
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int w; int h; int format; TYPE_1__* dst; } ;
struct TYPE_11__ {int nb_components; TYPE_2__* comp; int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_10__ {int* planewidth; int* planeheight; int nb_planes; int* fft_bits; int* fft_len; void** fft_vdata_impulse; void** fft_hdata_impulse; void** fft_vdata; void** fft_hdata; int depth; } ;
struct TYPE_9__ {int depth; } ;
struct TYPE_8__ {TYPE_3__* priv; } ;
typedef int FFTComplex ;
typedef TYPE_3__ ConvolveContext ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVFilterLink ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 void* FUNC_3 (int,int) ;
 TYPE_4__* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_1)
{
    ConvolveContext *VAR_2 = VAR_1->dst->priv;
    const AVPixFmtDescriptor *VAR_3 = FUNC_4(VAR_1->format);
    int VAR_4, VAR_5;

    VAR_2->planewidth[1] = VAR_2->planewidth[2] = FUNC_1(VAR_1->w, VAR_3->log2_chroma_w);
    VAR_2->planewidth[0] = VAR_2->planewidth[3] = VAR_1->w;
    VAR_2->planeheight[1] = VAR_2->planeheight[2] = FUNC_1(VAR_1->h, VAR_3->log2_chroma_h);
    VAR_2->planeheight[0] = VAR_2->planeheight[3] = VAR_1->h;

    VAR_2->nb_planes = VAR_3->nb_components;
    VAR_2->depth = VAR_3->comp[0].depth;

    for (VAR_5 = 0; VAR_5 < VAR_2->nb_planes; VAR_5++) {
        int VAR_6 = VAR_2->planewidth[VAR_5];
        int VAR_7 = VAR_2->planeheight[VAR_5];
        int VAR_8 = FUNC_2(VAR_6, VAR_7);

        for (VAR_4 = 1; 1 << VAR_4 < VAR_8; VAR_4++);

        VAR_2->fft_bits[VAR_5] = VAR_4;
        VAR_2->fft_len[VAR_5] = 1 << VAR_2->fft_bits[VAR_5];

        if (!(VAR_2->fft_hdata[VAR_5] = FUNC_3(VAR_2->fft_len[VAR_5], VAR_2->fft_len[VAR_5] * sizeof(FFTComplex))))
            return FUNC_0(VAR_0);

        if (!(VAR_2->fft_vdata[VAR_5] = FUNC_3(VAR_2->fft_len[VAR_5], VAR_2->fft_len[VAR_5] * sizeof(FFTComplex))))
            return FUNC_0(VAR_0);

        if (!(VAR_2->fft_hdata_impulse[VAR_5] = FUNC_3(VAR_2->fft_len[VAR_5], VAR_2->fft_len[VAR_5] * sizeof(FFTComplex))))
            return FUNC_0(VAR_0);

        if (!(VAR_2->fft_vdata_impulse[VAR_5] = FUNC_3(VAR_2->fft_len[VAR_5], VAR_2->fft_len[VAR_5] * sizeof(FFTComplex))))
            return FUNC_0(VAR_0);
    }

    return 0;
}
