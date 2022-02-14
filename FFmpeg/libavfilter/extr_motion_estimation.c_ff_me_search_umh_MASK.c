
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int x_min; int search_param; int y_min; int x_max; int y_max; int pred_x; int pred_y; TYPE_1__* preds; } ;
struct TYPE_4__ {int nb; int** mvs; } ;
typedef TYPE_1__ AVMotionEstPredictor ;
typedef TYPE_2__ AVMotionEstContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int** VAR_1 ;
 int** VAR_2 ;
 int** VAR_3 ;

uint64_t FUNC_3(AVMotionEstContext *VAR_4, int VAR_5, int VAR_6, int *VAR_7)
{
    int VAR_8, VAR_9;
    int VAR_10 = FUNC_1(VAR_4->x_min, VAR_5 - VAR_4->search_param);
    int VAR_11 = FUNC_1(VAR_4->y_min, VAR_6 - VAR_4->search_param);
    int VAR_12 = FUNC_2(VAR_5 + VAR_4->search_param, VAR_4->x_max);
    int VAR_13 = FUNC_2(VAR_6 + VAR_4->search_param, VAR_4->y_max);
    uint64_t VAR_14, VAR_15;
    int VAR_16, VAR_17;
    int VAR_18, VAR_19;

    AVMotionEstPredictor *VAR_20 = &VAR_4->preds[0];

    VAR_15 = VAR_0;

    FUNC_0(VAR_5 + VAR_4->pred_x, VAR_6 + VAR_4->pred_y);

    for (VAR_17 = 0; VAR_17 < VAR_20->nb; VAR_17++)
        FUNC_0(VAR_5 + VAR_20->mvs[VAR_17][0], VAR_6 + VAR_20->mvs[VAR_17][1]);


    VAR_8 = VAR_7[0];
    VAR_9 = VAR_7[1];
    for (VAR_16 = 1; VAR_16 <= VAR_4->search_param; VAR_16 += 2) {
        FUNC_0(VAR_8 - VAR_16, VAR_9);
        FUNC_0(VAR_8 + VAR_16, VAR_9);
        if (VAR_16 <= VAR_4->search_param / 2) {
            FUNC_0(VAR_8, VAR_9 - VAR_16);
            FUNC_0(VAR_8, VAR_9 + VAR_16);
        }
    }


    VAR_18 = FUNC_2(VAR_7[0] + 2, VAR_12);
    VAR_19 = FUNC_2(VAR_7[1] + 2, VAR_13);
    for (VAR_9 = FUNC_1(VAR_11, VAR_7[1] - 2); VAR_9 <= VAR_19; VAR_9++)
        for (VAR_8 = FUNC_1(VAR_10, VAR_7[0] - 2); VAR_8 <= VAR_18; VAR_8++)
            FUNC_0(VAR_8, VAR_9);

    VAR_8 = VAR_7[0];
    VAR_9 = VAR_7[1];
    for (VAR_16 = 1; VAR_16 <= VAR_4->search_param / 4; VAR_16++)
        for (VAR_17 = 1; VAR_17 < 16; VAR_17++)
            FUNC_0(VAR_8 + VAR_3[VAR_17][0] * VAR_16, VAR_9 + VAR_3[VAR_17][1] * VAR_16);


    do {
        VAR_8 = VAR_7[0];
        VAR_9 = VAR_7[1];

        for (VAR_17 = 0; VAR_17 < 6; VAR_17++)
            FUNC_0(VAR_8 + VAR_2[VAR_17][0], VAR_9 + VAR_2[VAR_17][1]);

    } while (VAR_8 != VAR_7[0] || VAR_9 != VAR_7[1]);

    for (VAR_17 = 0; VAR_17 < 4; VAR_17++)
        FUNC_0(VAR_8 + VAR_1[VAR_17][0], VAR_9 + VAR_1[VAR_17][1]);

    return VAR_15;
}
