
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int (* qpel_mc_func ) (int *,int *,int) ;
typedef int ptrdiff_t ;
typedef int (* op_pixels_func ) (int *,int *,int,int) ;
struct TYPE_6__ {int (* emulated_edge_mc ) (int *,int *,int,int,int,int,int,int,int,int) ;} ;
struct TYPE_8__ {int * edge_emu_buffer; } ;
struct TYPE_9__ {int mb_x; int mb_y; int v_edge_pos; int linesize; int uvlinesize; int workaround_bugs; int h_edge_pos; TYPE_2__* avctx; TYPE_1__ vdsp; TYPE_3__ sc; } ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_4__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,int,int,int,int,int,int,int,int) ;
 int FUNC_2 (int *,int *,int,int,int,int,int,int,int,int) ;
 int FUNC_3 (int *,int *,int,int,int,int,int,int,int,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int *,int,int) ;
 int FUNC_8 (int *,int *,int,int) ;

__attribute__((used)) static inline void FUNC_9(MpegEncContext *VAR_5,
                               uint8_t *VAR_6,
                               uint8_t *VAR_7,
                               uint8_t *VAR_8,
                               int VAR_9, int VAR_10,
                               int VAR_11, uint8_t **VAR_12,
                               op_pixels_func (*VAR_13)[4],
                               qpel_mc_func (*VAR_14)[16],
                               int VAR_15, int VAR_16, int VAR_17)
{
    uint8_t *VAR_18, *VAR_19, *VAR_20;
    int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
    ptrdiff_t VAR_30, VAR_31;

    VAR_21 = ((VAR_16 & 3) << 2) | (VAR_15 & 3);

    VAR_25 = VAR_5->mb_x * 16 + (VAR_15 >> 2);
    VAR_26 = VAR_5->mb_y * (16 >> VAR_9) + (VAR_16 >> 2);

    VAR_29 = VAR_5->v_edge_pos >> VAR_9;
    VAR_30 = VAR_5->linesize << VAR_9;
    VAR_31 = VAR_5->uvlinesize << VAR_9;

    if (VAR_9) {
        VAR_23 = VAR_15 / 2;
        VAR_24 = VAR_16 >> 1;
    } else if (VAR_5->workaround_bugs & VAR_4) {
        static const int VAR_32[8] = { 0, 0, 1, 1, 0, 0, 0, 1 };
        VAR_23 = (VAR_15 >> 1) + VAR_32[VAR_15 & 7];
        VAR_24 = (VAR_16 >> 1) + VAR_32[VAR_16 & 7];
    } else if (VAR_5->workaround_bugs & VAR_3) {
        VAR_23 = (VAR_15 >> 1) | (VAR_15 & 1);
        VAR_24 = (VAR_16 >> 1) | (VAR_16 & 1);
    } else {
        VAR_23 = VAR_15 / 2;
        VAR_24 = VAR_16 / 2;
    }
    VAR_23 = (VAR_23 >> 1) | (VAR_23 & 1);
    VAR_24 = (VAR_24 >> 1) | (VAR_24 & 1);

    VAR_22 = (VAR_23 & 1) | ((VAR_24 & 1) << 1);
    VAR_23 >>= 1;
    VAR_24 >>= 1;

    VAR_27 = VAR_5->mb_x * 8 + VAR_23;
    VAR_28 = VAR_5->mb_y * (8 >> VAR_9) + VAR_24;

    VAR_18 = VAR_12[0] + VAR_26 * VAR_30 + VAR_25;
    VAR_19 = VAR_12[1] + VAR_28 * VAR_31 + VAR_27;
    VAR_20 = VAR_12[2] + VAR_28 * VAR_31 + VAR_27;

    if ((unsigned)VAR_25 >= FUNC_0(VAR_5->h_edge_pos - (VAR_15 & 3) - 15 , 0) ||
        (unsigned)VAR_26 >= FUNC_0( VAR_29 - (VAR_16 & 3) - VAR_17 + 1, 0)) {
        VAR_5->vdsp.emulated_edge_mc(VAR_5->sc.edge_emu_buffer, VAR_18,
                                 VAR_5->linesize, VAR_5->linesize,
                                 17, 17 + VAR_9,
                                 VAR_25, VAR_26 * (1 << VAR_9),
                                 VAR_5->h_edge_pos, VAR_5->v_edge_pos);
        VAR_18 = VAR_5->sc.edge_emu_buffer;
        if (!VAR_1 || !(VAR_5->avctx->flags & VAR_0)) {
            uint8_t *VAR_33 = VAR_5->sc.edge_emu_buffer + 18 * VAR_5->linesize;
            uint8_t *VAR_34 = VAR_33 + 10 * VAR_5->uvlinesize;
            if (VAR_5->workaround_bugs & VAR_2)
                VAR_34 -= VAR_5->uvlinesize;
            VAR_5->vdsp.emulated_edge_mc(VAR_33, VAR_19,
                                     VAR_5->uvlinesize, VAR_5->uvlinesize,
                                     9, 9 + VAR_9,
                                     VAR_27, VAR_28 * (1 << VAR_9),
                                     VAR_5->h_edge_pos >> 1, VAR_5->v_edge_pos >> 1);
            VAR_5->vdsp.emulated_edge_mc(VAR_34, VAR_20,
                                     VAR_5->uvlinesize, VAR_5->uvlinesize,
                                     9, 9 + VAR_9,
                                     VAR_27, VAR_28 * (1 << VAR_9),
                                     VAR_5->h_edge_pos >> 1, VAR_5->v_edge_pos >> 1);
            VAR_19 = VAR_33;
            VAR_20 = VAR_34;
        }
    }

    if (!VAR_9)
        VAR_14[0][VAR_21](VAR_6, VAR_18, VAR_30);
    else {
        if (VAR_10) {
            VAR_6 += VAR_5->linesize;
            VAR_7 += VAR_5->uvlinesize;
            VAR_8 += VAR_5->uvlinesize;
        }

        if (VAR_11) {
            VAR_18 += VAR_5->linesize;
            VAR_19 += VAR_5->uvlinesize;
            VAR_20 += VAR_5->uvlinesize;
        }


        VAR_14[1][VAR_21](VAR_6, VAR_18, VAR_30);
        VAR_14[1][VAR_21](VAR_6 + 8, VAR_18 + 8, VAR_30);
    }
    if (!VAR_1 || !(VAR_5->avctx->flags & VAR_0)) {
        VAR_13[1][VAR_22](VAR_8, VAR_20, VAR_31, VAR_17 >> 1);
        VAR_13[1][VAR_22](VAR_7, VAR_19, VAR_31, VAR_17 >> 1);
    }
}
