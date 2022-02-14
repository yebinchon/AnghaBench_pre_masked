
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_5__ {int*** motion_val; } ;
struct TYPE_7__ {int b8_stride; int* block_index; scalar_t__ first_slice_line; int gb; int mspel; scalar_t__ mb_x; TYPE_1__ current_picture; } ;
struct TYPE_6__ {scalar_t__ top_left_mv_flag; TYPE_3__ s; } ;
typedef TYPE_2__ Wmv2Context ;
typedef TYPE_3__ MpegEncContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int,int) ;

__attribute__((used)) static int16_t *FUNC_4(Wmv2Context *VAR_0, int *VAR_1, int *VAR_2)
{
    MpegEncContext *const VAR_3 = &VAR_0->s;
    int VAR_4, VAR_5, VAR_6, VAR_7;
    int16_t *VAR_8, *VAR_9, *VAR_10, *VAR_11;

    VAR_5 = VAR_3->b8_stride;
    VAR_4 = VAR_3->block_index[0];

    VAR_11 = VAR_3->current_picture.motion_val[0][VAR_4];

    VAR_8 = VAR_3->current_picture.motion_val[0][VAR_4 - 1];
    VAR_9 = VAR_3->current_picture.motion_val[0][VAR_4 - VAR_5];
    VAR_10 = VAR_3->current_picture.motion_val[0][VAR_4 + 2 - VAR_5];

    if (VAR_3->mb_x && !VAR_3->first_slice_line && !VAR_3->mspel && VAR_0->top_left_mv_flag)
        VAR_6 = FUNC_1(FUNC_0(VAR_8[0] - VAR_9[0]), FUNC_0(VAR_8[1] - VAR_9[1]));
    else
        VAR_6 = 0;

    if (VAR_6 >= 8)
        VAR_7 = FUNC_2(&VAR_3->gb);
    else
        VAR_7 = 2;

    if (VAR_7 == 0) {
        *VAR_1 = VAR_8[0];
        *VAR_2 = VAR_8[1];
    } else if (VAR_7 == 1) {
        *VAR_1 = VAR_9[0];
        *VAR_2 = VAR_9[1];
    } else {

        if (VAR_3->first_slice_line) {
            *VAR_1 = VAR_8[0];
            *VAR_2 = VAR_8[1];
        } else {
            *VAR_1 = FUNC_3(VAR_8[0], VAR_9[0], VAR_10[0]);
            *VAR_2 = FUNC_3(VAR_8[1], VAR_9[1], VAR_10[1]);
        }
    }

    return VAR_11;
}
