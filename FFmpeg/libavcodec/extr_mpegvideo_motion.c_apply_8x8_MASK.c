
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int (* qpel_mc_func ) (int *,int *,int) ;
typedef int op_pixels_func ;
struct TYPE_9__ {int * edge_emu_buffer; } ;
struct TYPE_8__ {int (* emulated_edge_mc ) (int *,int *,int,int,int,int,int,int,int,int) ;} ;
struct TYPE_11__ {int mb_x; int mb_y; int*** mv; int width; int height; int linesize; int h_edge_pos; int v_edge_pos; TYPE_3__* avctx; TYPE_2__ sc; TYPE_1__ vdsp; scalar_t__ quarter_sample; } ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_4__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (TYPE_4__*,int *,int *,int **,int *,int,int) ;
 int FUNC_3 (TYPE_4__*,int *,int *,int,int,int *,int,int) ;
 int FUNC_4 (int *,int *,int,int,int,int,int,int,int,int) ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static inline void FUNC_6(MpegEncContext *VAR_2,
                             uint8_t *VAR_3,
                             uint8_t *VAR_4,
                             uint8_t *VAR_5,
                             int VAR_6,
                             uint8_t **VAR_7,
                             qpel_mc_func (*VAR_8)[16],
                             op_pixels_func (*VAR_9)[4])
{
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15;
    int VAR_16 = VAR_2->mb_x;
    int VAR_17 = VAR_2->mb_y;
    uint8_t *VAR_18, *VAR_19;

    VAR_11 = 0;
    VAR_12 = 0;
    if (VAR_2->quarter_sample) {
        for (VAR_15 = 0; VAR_15 < 4; VAR_15++) {
            int VAR_20 = VAR_2->mv[VAR_6][VAR_15][0];
            int VAR_21 = VAR_2->mv[VAR_6][VAR_15][1];

            VAR_10 = ((VAR_21 & 3) << 2) | (VAR_20 & 3);
            VAR_13 = VAR_16 * 16 + (VAR_20 >> 2) + (VAR_15 & 1) * 8;
            VAR_14 = VAR_17 * 16 + (VAR_21 >> 2) + (VAR_15 >> 1) * 8;


            VAR_13 = FUNC_1(VAR_13, -16, VAR_2->width);
            if (VAR_13 == VAR_2->width)
                VAR_10 &= ~3;
            VAR_14 = FUNC_1(VAR_14, -16, VAR_2->height);
            if (VAR_14 == VAR_2->height)
                VAR_10 &= ~12;

            VAR_18 = VAR_7[0] + (VAR_14 * VAR_2->linesize) + (VAR_13);
            if ((unsigned)VAR_13 >= FUNC_0(VAR_2->h_edge_pos - (VAR_20 & 3) - 7, 0) ||
                (unsigned)VAR_14 >= FUNC_0(VAR_2->v_edge_pos - (VAR_21 & 3) - 7, 0)) {
                VAR_2->vdsp.emulated_edge_mc(VAR_2->sc.edge_emu_buffer, VAR_18,
                                         VAR_2->linesize, VAR_2->linesize,
                                         9, 9,
                                         VAR_13, VAR_14,
                                         VAR_2->h_edge_pos,
                                         VAR_2->v_edge_pos);
                VAR_18 = VAR_2->sc.edge_emu_buffer;
            }
            VAR_19 = VAR_3 + ((VAR_15 & 1) * 8) + (VAR_15 >> 1) * 8 * VAR_2->linesize;
            VAR_8[1][VAR_10](VAR_19, VAR_18, VAR_2->linesize);

            VAR_11 += VAR_2->mv[VAR_6][VAR_15][0] / 2;
            VAR_12 += VAR_2->mv[VAR_6][VAR_15][1] / 2;
        }
    } else {
        for (VAR_15 = 0; VAR_15 < 4; VAR_15++) {
            FUNC_3(VAR_2,
                        VAR_3 + ((VAR_15 & 1) * 8) + (VAR_15 >> 1) * 8 * VAR_2->linesize,
                        VAR_7[0],
                        VAR_16 * 16 + (VAR_15 & 1) * 8,
                        VAR_17 * 16 + (VAR_15 >> 1) * 8,
                        VAR_9[1],
                        VAR_2->mv[VAR_6][VAR_15][0],
                        VAR_2->mv[VAR_6][VAR_15][1]);

            VAR_11 += VAR_2->mv[VAR_6][VAR_15][0];
            VAR_12 += VAR_2->mv[VAR_6][VAR_15][1];
        }
    }

    if (!VAR_1 || !(VAR_2->avctx->flags & VAR_0))
        FUNC_2(VAR_2, VAR_4, VAR_5,
                          VAR_7, VAR_9[1], VAR_11, VAR_12);
}
