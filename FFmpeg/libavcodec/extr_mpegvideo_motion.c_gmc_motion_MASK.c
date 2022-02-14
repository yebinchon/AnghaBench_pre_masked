
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int (* gmc ) (int *,int *,int,int,int,int,int,int,int,int,int const,scalar_t__,int,int) ;} ;
struct TYPE_7__ {int sprite_warping_accuracy; int linesize; int uvlinesize; int** sprite_offset; int** sprite_delta; int mb_x; int mb_y; int h_edge_pos; int v_edge_pos; scalar_t__ no_rounding; TYPE_1__ mdsp; TYPE_2__* avctx; } ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,int,int,int,int,int,int,int,int,int const,scalar_t__,int,int) ;
 int FUNC_1 (int *,int *,int,int,int,int,int,int,int,int,int const,scalar_t__,int,int) ;
 int FUNC_2 (int *,int *,int,int,int,int,int,int,int,int,int const,scalar_t__,int,int) ;
 int FUNC_3 (int *,int *,int,int,int,int,int,int,int,int,int const,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_4(MpegEncContext *VAR_2,
                       uint8_t *VAR_3, uint8_t *VAR_4, uint8_t *VAR_5,
                       uint8_t **VAR_6)
{
    uint8_t *VAR_7;
    int VAR_8, VAR_9;
    const int VAR_10 = VAR_2->sprite_warping_accuracy;
    int VAR_11, VAR_12;

    VAR_8 = VAR_2->linesize;
    VAR_9 = VAR_2->uvlinesize;

    VAR_7 = VAR_6[0];

    VAR_11 = VAR_2->sprite_offset[0][0] + VAR_2->sprite_delta[0][0] * VAR_2->mb_x * 16 +
         VAR_2->sprite_delta[0][1] * VAR_2->mb_y * 16;
    VAR_12 = VAR_2->sprite_offset[0][1] + VAR_2->sprite_delta[1][0] * VAR_2->mb_x * 16 +
         VAR_2->sprite_delta[1][1] * VAR_2->mb_y * 16;

    VAR_2->mdsp.gmc(VAR_3, VAR_7, VAR_8, 16,
                VAR_11, VAR_12,
                VAR_2->sprite_delta[0][0], VAR_2->sprite_delta[0][1],
                VAR_2->sprite_delta[1][0], VAR_2->sprite_delta[1][1],
                VAR_10 + 1, (1 << (2 * VAR_10 + 1)) - VAR_2->no_rounding,
                VAR_2->h_edge_pos, VAR_2->v_edge_pos);
    VAR_2->mdsp.gmc(VAR_3 + 8, VAR_7, VAR_8, 16,
                VAR_11 + VAR_2->sprite_delta[0][0] * 8,
                VAR_12 + VAR_2->sprite_delta[1][0] * 8,
                VAR_2->sprite_delta[0][0], VAR_2->sprite_delta[0][1],
                VAR_2->sprite_delta[1][0], VAR_2->sprite_delta[1][1],
                VAR_10 + 1, (1 << (2 * VAR_10 + 1)) - VAR_2->no_rounding,
                VAR_2->h_edge_pos, VAR_2->v_edge_pos);

    if (VAR_1 && VAR_2->avctx->flags & VAR_0)
        return;

    VAR_11 = VAR_2->sprite_offset[1][0] + VAR_2->sprite_delta[0][0] * VAR_2->mb_x * 8 +
         VAR_2->sprite_delta[0][1] * VAR_2->mb_y * 8;
    VAR_12 = VAR_2->sprite_offset[1][1] + VAR_2->sprite_delta[1][0] * VAR_2->mb_x * 8 +
         VAR_2->sprite_delta[1][1] * VAR_2->mb_y * 8;

    VAR_7 = VAR_6[1];
    VAR_2->mdsp.gmc(VAR_4, VAR_7, VAR_9, 8,
                VAR_11, VAR_12,
                VAR_2->sprite_delta[0][0], VAR_2->sprite_delta[0][1],
                VAR_2->sprite_delta[1][0], VAR_2->sprite_delta[1][1],
                VAR_10 + 1, (1 << (2 * VAR_10 + 1)) - VAR_2->no_rounding,
                (VAR_2->h_edge_pos + 1) >> 1, (VAR_2->v_edge_pos + 1) >> 1);

    VAR_7 = VAR_6[2];
    VAR_2->mdsp.gmc(VAR_5, VAR_7, VAR_9, 8,
                VAR_11, VAR_12,
                VAR_2->sprite_delta[0][0], VAR_2->sprite_delta[0][1],
                VAR_2->sprite_delta[1][0], VAR_2->sprite_delta[1][1],
                VAR_10 + 1, (1 << (2 * VAR_10 + 1)) - VAR_2->no_rounding,
                (VAR_2->h_edge_pos + 1) >> 1, (VAR_2->v_edge_pos + 1) >> 1);
}
