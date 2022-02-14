
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int (* get_cost ) (TYPE_1__*,int,int,int,int) ;scalar_t__ search_param; int y_max; int x_max; int y_min; int x_min; } ;
typedef TYPE_1__ AVMotionEstContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int) ;
 int** VAR_0 ;
 int FUNC_4 (TYPE_1__*,int,int,int,int) ;

uint64_t FUNC_5(AVMotionEstContext *VAR_1, int VAR_2, int VAR_3, int *VAR_4)
{
    int VAR_5, VAR_6;
    int VAR_7 = FUNC_1(VAR_1->x_min, VAR_2 - VAR_1->search_param);
    int VAR_8 = FUNC_1(VAR_1->y_min, VAR_3 - VAR_1->search_param);
    int VAR_9 = FUNC_2(VAR_2 + VAR_1->search_param, VAR_1->x_max);
    int VAR_10 = FUNC_2(VAR_3 + VAR_1->search_param, VAR_1->y_max);
    uint64_t VAR_11, VAR_12;
    int VAR_13 = FUNC_3(VAR_1->search_param, 2);
    int VAR_14;

    VAR_4[0] = VAR_2;
    VAR_4[1] = VAR_3;

    if (!(VAR_12 = VAR_1->get_cost(VAR_1, VAR_2, VAR_3, VAR_2, VAR_3)))
        return VAR_12;

    do {
        VAR_5 = VAR_4[0];
        VAR_6 = VAR_4[1];

        for (VAR_14 = 0; VAR_14 < 8; VAR_14++)
            FUNC_0(VAR_5 + VAR_0[VAR_14][0] * VAR_13, VAR_6 + VAR_0[VAR_14][1] * VAR_13);

        VAR_13 = VAR_13 >> 1;

    } while (VAR_13 > 0);

    return VAR_12;
}
