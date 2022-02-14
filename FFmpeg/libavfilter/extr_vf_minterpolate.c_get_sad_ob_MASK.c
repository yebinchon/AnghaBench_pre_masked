
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int linesize; int x_min; int mb_size; int x_max; int y_min; int y_max; scalar_t__ pred_y; scalar_t__ pred_x; scalar_t__* data_cur; scalar_t__* data_ref; } ;
typedef TYPE_1__ AVMotionEstContext ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static uint64_t FUNC_2(AVMotionEstContext *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    uint8_t *VAR_6 = VAR_1->data_ref;
    uint8_t *VAR_7 = VAR_1->data_cur;
    int VAR_8 = VAR_1->linesize;
    int VAR_9 = VAR_1->x_min + VAR_1->mb_size / 2;
    int VAR_10 = VAR_1->x_max - VAR_1->mb_size / 2;
    int VAR_11 = VAR_1->y_min + VAR_1->mb_size / 2;
    int VAR_12 = VAR_1->y_max - VAR_1->mb_size / 2;
    int VAR_13 = VAR_4 - VAR_2;
    int VAR_14 = VAR_5 - VAR_3;
    int VAR_15, VAR_16;
    uint64_t VAR_17 = 0;

    VAR_2 = FUNC_1(VAR_2, VAR_9, VAR_10);
    VAR_3 = FUNC_1(VAR_3, VAR_11, VAR_12);
    VAR_4 = FUNC_1(VAR_4, VAR_9, VAR_10);
    VAR_5 = FUNC_1(VAR_5, VAR_11, VAR_12);

    for (VAR_16 = -VAR_1->mb_size / 2; VAR_16 < VAR_1->mb_size * 3 / 2; VAR_16++)
        for (VAR_15 = -VAR_1->mb_size / 2; VAR_15 < VAR_1->mb_size * 3 / 2; VAR_15++)
            VAR_17 += FUNC_0(VAR_6[VAR_4 + VAR_15 + (VAR_5 + VAR_16) * VAR_8] - VAR_7[VAR_2 + VAR_15 + (VAR_3 + VAR_16) * VAR_8]);

    return VAR_17 + (FUNC_0(VAR_13 - VAR_1->pred_x) + FUNC_0(VAR_14 - VAR_1->pred_y)) * VAR_0;
}
