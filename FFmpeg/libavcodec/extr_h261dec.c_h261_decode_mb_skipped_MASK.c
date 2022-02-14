
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int* mb_type; scalar_t__*** motion_val; } ;
struct TYPE_9__ {int mb_x; int mb_y; int mb_stride; int* block_last_index; int mb_skipped; int mb_width; int block; scalar_t__*** mv; TYPE_1__ current_picture; int mv_type; int mv_dir; scalar_t__ mb_intra; } ;
struct TYPE_10__ {int gob_number; int mtype; TYPE_2__ s; } ;
typedef TYPE_2__ MpegEncContext ;
typedef TYPE_3__ H261Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__* const) ;
 int FUNC_1 (TYPE_2__* const,int ) ;
 int FUNC_2 (TYPE_2__* const) ;

__attribute__((used)) static int FUNC_3(H261Context *VAR_6, int VAR_7, int VAR_8)
{
    MpegEncContext *const VAR_9 = &VAR_6->s;
    int VAR_10;

    VAR_9->mb_intra = 0;

    for (VAR_10 = VAR_7; VAR_10 < VAR_8; VAR_10++) {
        int VAR_11, VAR_12;

        VAR_9->mb_x = ((VAR_6->gob_number - 1) % 2) * 11 + VAR_10 % 11;
        VAR_9->mb_y = ((VAR_6->gob_number - 1) / 2) * 3 + VAR_10 / 11;
        VAR_12 = VAR_9->mb_x + VAR_9->mb_y * VAR_9->mb_stride;
        FUNC_0(VAR_9);
        FUNC_2(VAR_9);

        for (VAR_11 = 0; VAR_11 < 6; VAR_11++)
            VAR_9->block_last_index[VAR_11] = -1;

        VAR_9->mv_dir = VAR_4;
        VAR_9->mv_type = VAR_5;
        VAR_9->current_picture.mb_type[VAR_12] = VAR_3 | VAR_0 | VAR_2;
        VAR_9->mv[0][0][0] = 0;
        VAR_9->mv[0][0][1] = 0;
        VAR_9->mb_skipped = 1;
        VAR_6->mtype &= ~VAR_1;

        if (VAR_9->current_picture.motion_val[0]) {
            int VAR_13 = 2*VAR_9->mb_width + 1;
            int VAR_14 = 2 * VAR_9->mb_x + (2 * VAR_9->mb_y) * VAR_13;
            VAR_9->current_picture.motion_val[0][VAR_14][0] = VAR_9->mv[0][0][0];
            VAR_9->current_picture.motion_val[0][VAR_14][1] = VAR_9->mv[0][0][1];
        }

        FUNC_1(VAR_9, VAR_9->block);
    }

    return 0;
}
