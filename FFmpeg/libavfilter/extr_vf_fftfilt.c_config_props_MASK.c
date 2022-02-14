
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int w; int h; int format; TYPE_1__* dst; } ;
struct TYPE_13__ {int nb_components; int log2_chroma_h; int log2_chroma_w; TYPE_2__* comp; } ;
struct TYPE_12__ {int depth; int* planewidth; int* planeheight; int* rdft_hbits; int* rdft_hlen; int* rdft_vbits; int* rdft_vlen; scalar_t__ eval_mode; int irdft_horizontal; int rdft_horizontal; void** weight; void** ivrdft; void** vrdft; void** rdft_vdata; void** ihrdft; void** hrdft; void** rdft_hdata; int nb_planes; } ;
struct TYPE_11__ {int depth; } ;
struct TYPE_10__ {TYPE_3__* priv; } ;
typedef int FFTSample ;
typedef TYPE_3__ FFTFILTContext ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 TYPE_4__* FUNC_4 (int ) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_9)
{
    FFTFILTContext *VAR_10 = VAR_9->dst->priv;
    const AVPixFmtDescriptor *VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15;

    VAR_11 = FUNC_4(VAR_9->format);
    VAR_10->depth = VAR_11->comp[0].depth;
    VAR_10->planewidth[1] = VAR_10->planewidth[2] = FUNC_1(VAR_9->w, VAR_11->log2_chroma_w);
    VAR_10->planewidth[0] = VAR_10->planewidth[3] = VAR_9->w;
    VAR_10->planeheight[1] = VAR_10->planeheight[2] = FUNC_1(VAR_9->h, VAR_11->log2_chroma_h);
    VAR_10->planeheight[0] = VAR_10->planeheight[3] = VAR_9->h;

    VAR_10->nb_planes = FUNC_3(VAR_9->format);

    for (VAR_14 = 0; VAR_14 < VAR_11->nb_components; VAR_14++) {
        int VAR_16 = VAR_10->planewidth[VAR_14];
        int VAR_17 = VAR_10->planeheight[VAR_14];


        for (VAR_12 = 1; 1 << VAR_12 < VAR_16*10/9; VAR_12++);
        VAR_10->rdft_hbits[VAR_14] = VAR_12;
        VAR_10->rdft_hlen[VAR_14] = 1 << VAR_12;
        if (!(VAR_10->rdft_hdata[VAR_14] = FUNC_2(VAR_17, VAR_10->rdft_hlen[VAR_14] * sizeof(FFTSample))))
            return FUNC_0(VAR_2);

        if (!(VAR_10->hrdft[VAR_14] = FUNC_5(VAR_10->rdft_hbits[VAR_14], VAR_1)))
            return FUNC_0(VAR_2);
        if (!(VAR_10->ihrdft[VAR_14] = FUNC_5(VAR_10->rdft_hbits[VAR_14], VAR_4)))
            return FUNC_0(VAR_2);


        for (VAR_13 = 1; 1 << VAR_13 < VAR_17*10/9; VAR_13++);
        VAR_10->rdft_vbits[VAR_14] = VAR_13;
        VAR_10->rdft_vlen[VAR_14] = 1 << VAR_13;
        if (!(VAR_10->rdft_vdata[VAR_14] = FUNC_2(VAR_10->rdft_hlen[VAR_14], VAR_10->rdft_vlen[VAR_14] * sizeof(FFTSample))))
            return FUNC_0(VAR_2);

        if (!(VAR_10->vrdft[VAR_14] = FUNC_5(VAR_10->rdft_vbits[VAR_14], VAR_1)))
            return FUNC_0(VAR_2);
        if (!(VAR_10->ivrdft[VAR_14] = FUNC_5(VAR_10->rdft_vbits[VAR_14], VAR_4)))
            return FUNC_0(VAR_2);
    }


    for (VAR_15 = 0; VAR_15 < 3; VAR_15++) {
        if(!(VAR_10->weight[VAR_15] = FUNC_2(VAR_10->rdft_hlen[VAR_15], VAR_10->rdft_vlen[VAR_15] * sizeof(double))))
            return FUNC_0(VAR_2);

        if (VAR_10->eval_mode == VAR_3)
            FUNC_6(VAR_10, VAR_9, VAR_15);
    }

    if (VAR_10->depth <= 8) {
        VAR_10->rdft_horizontal = VAR_8;
        VAR_10->irdft_horizontal = VAR_6;
    } else if (VAR_10->depth > 8) {
        VAR_10->rdft_horizontal = VAR_7;
        VAR_10->irdft_horizontal = VAR_5;
    } else {
        return VAR_0;
    }
    return 0;
}
