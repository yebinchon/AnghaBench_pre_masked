
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int linesize; int mb_size; scalar_t__ pred_y; scalar_t__ pred_x; scalar_t__ y_max; scalar_t__ y_min; scalar_t__ x_max; scalar_t__ x_min; scalar_t__* data_ref; scalar_t__* data_cur; } ;
typedef TYPE_1__ AVMotionEstContext ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int,scalar_t__,scalar_t__) ;

__attribute__((used)) static uint64_t FUNC_3(AVMotionEstContext *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    uint8_t *VAR_6 = VAR_1->data_cur;
    uint8_t *VAR_7 = VAR_1->data_ref;
    int VAR_8 = VAR_1->linesize;
    int VAR_9 = VAR_4 - VAR_2;
    int VAR_10 = VAR_5 - VAR_3;
    int VAR_11, VAR_12, VAR_13, VAR_14;
    uint64_t VAR_15 = 0;

    VAR_2 = FUNC_2(VAR_2, VAR_1->x_min, VAR_1->x_max);
    VAR_3 = FUNC_2(VAR_3, VAR_1->y_min, VAR_1->y_max);
    VAR_11 = FUNC_2(VAR_4 - VAR_2, -FUNC_1(VAR_2 - VAR_1->x_min, VAR_1->x_max - VAR_2), FUNC_1(VAR_2 - VAR_1->x_min, VAR_1->x_max - VAR_2));
    VAR_12 = FUNC_2(VAR_5 - VAR_3, -FUNC_1(VAR_3 - VAR_1->y_min, VAR_1->y_max - VAR_3), FUNC_1(VAR_3 - VAR_1->y_min, VAR_1->y_max - VAR_3));

    VAR_6 += (VAR_3 + VAR_12) * VAR_8;
    VAR_7 += (VAR_3 - VAR_12) * VAR_8;

    for (VAR_14 = 0; VAR_14 < VAR_1->mb_size; VAR_14++)
        for (VAR_13 = 0; VAR_13 < VAR_1->mb_size; VAR_13++)
            VAR_15 += FUNC_0(VAR_6[VAR_2 + VAR_11 + VAR_13 + VAR_14 * VAR_8] - VAR_7[VAR_2 - VAR_11 + VAR_13 + VAR_14 * VAR_8]);

    return VAR_15 + (FUNC_0(VAR_9 - VAR_1->pred_x) + FUNC_0(VAR_10 - VAR_1->pred_y)) * VAR_0;
}
