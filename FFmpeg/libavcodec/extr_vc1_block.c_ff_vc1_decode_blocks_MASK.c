
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int mb_x; int mb_y; int pict_type; int er; int low_delay; int loop_filter; int gb; int current_picture; scalar_t__ esc3_level_length; } ;
struct TYPE_10__ {int pq; int left_blk_idx; int topleft_blk_idx; int top_blk_idx; int profile; int bi_type; int p_frame_skipped; TYPE_1__ s; scalar_t__ cur_blk_idx; int pquantizer; scalar_t__ halfpq; int x8; scalar_t__ x8_type; } ;
typedef TYPE_2__ VC1Context ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int,int,int ) ;
 int FUNC_1 (int *,int *,int *,int*,int*,scalar_t__,int,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

void FUNC_7(VC1Context *VAR_2)
{

    VAR_2->s.esc3_level_length = 0;
    if (VAR_2->x8_type) {
        FUNC_1(&VAR_2->x8, &VAR_2->s.current_picture,
                                  &VAR_2->s.gb, &VAR_2->s.mb_x, &VAR_2->s.mb_y,
                                  2 * VAR_2->pq + VAR_2->halfpq, VAR_2->pq * !VAR_2->pquantizer,
                                  VAR_2->s.loop_filter, VAR_2->s.low_delay);

        FUNC_0(&VAR_2->s.er, 0, 0,
                        (VAR_2->s.mb_x >> 1) - 1, (VAR_2->s.mb_y >> 1) - 1,
                        VAR_0);
    } else {
        VAR_2->cur_blk_idx = 0;
        VAR_2->left_blk_idx = -1;
        VAR_2->topleft_blk_idx = 1;
        VAR_2->top_blk_idx = 2;
        switch (VAR_2->s.pict_type) {
        case 129:
            if (VAR_2->profile == VAR_1)
                FUNC_4(VAR_2);
            else
                FUNC_3(VAR_2);
            break;
        case 128:
            if (VAR_2->p_frame_skipped)
                FUNC_6(VAR_2);
            else
                FUNC_5(VAR_2);
            break;
        case 130:
            if (VAR_2->bi_type) {
                if (VAR_2->profile == VAR_1)
                    FUNC_4(VAR_2);
                else
                    FUNC_3(VAR_2);
            } else
                FUNC_2(VAR_2);
            break;
        }
    }
}
