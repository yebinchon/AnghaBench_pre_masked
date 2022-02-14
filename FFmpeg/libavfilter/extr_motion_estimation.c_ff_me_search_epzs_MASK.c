
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {scalar_t__ pred_y; scalar_t__ pred_x; TYPE_1__* preds; int y_max; scalar_t__ search_param; int x_max; int y_min; int x_min; } ;
struct TYPE_4__ {int nb; scalar_t__** mvs; } ;
typedef TYPE_1__ AVMotionEstPredictor ;
typedef TYPE_2__ AVMotionEstContext ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__** VAR_1 ;

uint64_t FUNC_3(AVMotionEstContext *VAR_2, int VAR_3, int VAR_4, int *VAR_5)
{
    int VAR_6, VAR_7;
    int VAR_8 = FUNC_1(VAR_2->x_min, VAR_3 - VAR_2->search_param);
    int VAR_9 = FUNC_1(VAR_2->y_min, VAR_4 - VAR_2->search_param);
    int VAR_10 = FUNC_2(VAR_3 + VAR_2->search_param, VAR_2->x_max);
    int VAR_11 = FUNC_2(VAR_4 + VAR_2->search_param, VAR_2->y_max);
    uint64_t VAR_12, VAR_13;
    int VAR_14;

    AVMotionEstPredictor *VAR_15 = VAR_2->preds;

    VAR_13 = VAR_0;

    FUNC_0(VAR_3 + VAR_2->pred_x, VAR_4 + VAR_2->pred_y);

    for (VAR_14 = 0; VAR_14 < VAR_15[0].nb; VAR_14++)
        FUNC_0(VAR_3 + VAR_15[0].mvs[VAR_14][0], VAR_4 + VAR_15[0].mvs[VAR_14][1]);

    for (VAR_14 = 0; VAR_14 < VAR_15[1].nb; VAR_14++)
        FUNC_0(VAR_3 + VAR_15[1].mvs[VAR_14][0], VAR_4 + VAR_15[1].mvs[VAR_14][1]);

    do {
        VAR_6 = VAR_5[0];
        VAR_7 = VAR_5[1];

        for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
            FUNC_0(VAR_6 + VAR_1[VAR_14][0], VAR_7 + VAR_1[VAR_14][1]);

    } while (VAR_6 != VAR_5[0] || VAR_7 != VAR_5[1]);

    return VAR_13;
}
