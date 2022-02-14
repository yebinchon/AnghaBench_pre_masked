
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
typedef int (* h264_chroma_mc_func ) (int *,int *,int,int const,int,int) ;
struct TYPE_8__ {int * edge_emu_buffer; } ;
struct TYPE_7__ {int (* emulated_edge_mc ) (int *,int *,int,int,int,int,int,int,int const,int const) ;} ;
struct TYPE_9__ {int const h_edge_pos; int const v_edge_pos; int const mb_x; int const mb_y; int uvlinesize; TYPE_3__ sc; TYPE_2__ vdsp; scalar_t__ quarter_sample; TYPE_1__* avctx; } ;
struct TYPE_6__ {int lowres; } ;
typedef TYPE_4__ MpegEncContext ;


 unsigned int FUNC_0 (int const,int ) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int,int,int,int,int,int,int const,int const) ;
 int FUNC_4 (int *,int *,int,int const,int,int) ;
 int FUNC_5 (int *,int *,int,int,int,int,int,int,int const,int const) ;
 int FUNC_6 (int *,int *,int,int const,int,int) ;

__attribute__((used)) static inline void FUNC_7(MpegEncContext *VAR_0,
                                            uint8_t *VAR_1, uint8_t *VAR_2,
                                            uint8_t **VAR_3,
                                            h264_chroma_mc_func * VAR_4,
                                            int VAR_5, int VAR_6)
{
    const int VAR_7 = VAR_0->avctx->lowres;
    const int VAR_8 = FUNC_1(VAR_7, 3);
    const int VAR_9 = 8 >> VAR_7;
    const int VAR_10 = (2 << VAR_7) - 1;
    const int VAR_11 = VAR_0->h_edge_pos >> (VAR_7 + 1);
    const int VAR_12 = VAR_0->v_edge_pos >> (VAR_7 + 1);
    int VAR_13 = 0, VAR_14, VAR_15, VAR_16, VAR_17;
    ptrdiff_t VAR_18;
    uint8_t *VAR_19;

    if (VAR_0->quarter_sample) {
        VAR_5 /= 2;
        VAR_6 /= 2;
    }



    VAR_5 = FUNC_2(VAR_5);
    VAR_6 = FUNC_2(VAR_6);

    VAR_16 = VAR_5 & VAR_10;
    VAR_17 = VAR_6 & VAR_10;
    VAR_14 = VAR_0->mb_x * VAR_9 + (VAR_5 >> (VAR_7 + 1));
    VAR_15 = VAR_0->mb_y * VAR_9 + (VAR_6 >> (VAR_7 + 1));

    VAR_18 = VAR_15 * VAR_0->uvlinesize + VAR_14;
    VAR_19 = VAR_3[1] + VAR_18;
    if ((unsigned) VAR_14 > FUNC_0(VAR_11 - (!!VAR_16) - VAR_9, 0) ||
        (unsigned) VAR_15 > FUNC_0(VAR_12 - (!!VAR_17) - VAR_9, 0)) {
        VAR_0->vdsp.emulated_edge_mc(VAR_0->sc.edge_emu_buffer, VAR_19,
                                 VAR_0->uvlinesize, VAR_0->uvlinesize,
                                 9, 9,
                                 VAR_14, VAR_15, VAR_11, VAR_12);
        VAR_19 = VAR_0->sc.edge_emu_buffer;
        VAR_13 = 1;
    }
    VAR_16 = (VAR_16 << 2) >> VAR_7;
    VAR_17 = (VAR_17 << 2) >> VAR_7;
    VAR_4[VAR_8](VAR_1, VAR_19, VAR_0->uvlinesize, VAR_9, VAR_16, VAR_17);

    VAR_19 = VAR_3[2] + VAR_18;
    if (VAR_13) {
        VAR_0->vdsp.emulated_edge_mc(VAR_0->sc.edge_emu_buffer, VAR_19,
                                 VAR_0->uvlinesize, VAR_0->uvlinesize,
                                 9, 9,
                                 VAR_14, VAR_15, VAR_11, VAR_12);
        VAR_19 = VAR_0->sc.edge_emu_buffer;
    }
    VAR_4[VAR_8](VAR_2, VAR_19, VAR_0->uvlinesize, VAR_9, VAR_16, VAR_17);
}
