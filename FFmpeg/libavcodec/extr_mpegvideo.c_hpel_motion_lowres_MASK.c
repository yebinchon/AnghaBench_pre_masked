
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int (* h264_chroma_mc_func ) (int *,int *,int,int,int,int) ;
struct TYPE_8__ {int * edge_emu_buffer; } ;
struct TYPE_7__ {int (* emulated_edge_mc ) (int *,int *,int ,int ,int,int,int,int,int,int) ;} ;
struct TYPE_9__ {int linesize; TYPE_3__ sc; TYPE_2__ vdsp; scalar_t__ quarter_sample; TYPE_1__* avctx; } ;
struct TYPE_6__ {int lowres; } ;
typedef TYPE_4__ MpegEncContext ;


 unsigned int FUNC_0 (int,int ) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (int *,int *,int ,int ,int,int,int,int,int,int) ;
 int FUNC_3 (int *,int *,int,int,int,int) ;

__attribute__((used)) static inline int FUNC_4(MpegEncContext *VAR_0,
                                     uint8_t *VAR_1, uint8_t *VAR_2,
                                     int VAR_3, int VAR_4,
                                     int VAR_5, int VAR_6,
                                     int VAR_7, int VAR_8, ptrdiff_t VAR_9,
                                     int VAR_10, int VAR_11,
                                     int VAR_12, int VAR_13, h264_chroma_mc_func *VAR_14,
                                     int VAR_15, int VAR_16)
{
    const int VAR_17 = VAR_0->avctx->lowres;
    const int VAR_18 = FUNC_1(VAR_17, 3);
    const int VAR_19 = (2 << VAR_17) - 1;
    int VAR_20 = 0;
    int VAR_21, VAR_22;

    if (VAR_0->quarter_sample) {
        VAR_15 /= 2;
        VAR_16 /= 2;
    }

    VAR_21 = VAR_15 & VAR_19;
    VAR_22 = VAR_16 & VAR_19;
    VAR_5 += VAR_15 >> (VAR_17 + 1);
    VAR_6 += VAR_16 >> (VAR_17 + 1);

    VAR_2 += VAR_6 * VAR_9 + VAR_5;

    if ((unsigned)VAR_5 > FUNC_0( VAR_10 - (!!VAR_21) - VAR_12, 0) ||
        (unsigned)VAR_6 > FUNC_0((VAR_11 >> VAR_3) - (!!VAR_22) - VAR_13, 0)) {
        VAR_0->vdsp.emulated_edge_mc(VAR_0->sc.edge_emu_buffer, VAR_2,
                                 VAR_0->linesize, VAR_0->linesize,
                                 VAR_12 + 1, (VAR_13 + 1) << VAR_3,
                                 VAR_5, VAR_6 << VAR_3,
                                 VAR_10, VAR_11);
        VAR_2 = VAR_0->sc.edge_emu_buffer;
        VAR_20 = 1;
    }

    VAR_21 = (VAR_21 << 2) >> VAR_17;
    VAR_22 = (VAR_22 << 2) >> VAR_17;
    if (VAR_4)
        VAR_2 += VAR_0->linesize;
    VAR_14[VAR_18](VAR_1, VAR_2, VAR_9, VAR_13, VAR_21, VAR_22);
    return VAR_20;
}
