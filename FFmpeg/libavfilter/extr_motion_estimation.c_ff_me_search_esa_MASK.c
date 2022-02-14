
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int (* get_cost ) (TYPE_1__*,int,int,int,int) ;int y_max; scalar_t__ search_param; int x_max; int y_min; int x_min; } ;
typedef TYPE_1__ AVMotionEstContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*,int,int,int,int) ;

uint64_t FUNC_4(AVMotionEstContext *VAR_0, int VAR_1, int VAR_2, int *VAR_3)
{
    int VAR_4, VAR_5;
    int VAR_6 = FUNC_1(VAR_0->x_min, VAR_1 - VAR_0->search_param);
    int VAR_7 = FUNC_1(VAR_0->y_min, VAR_2 - VAR_0->search_param);
    int VAR_8 = FUNC_2(VAR_1 + VAR_0->search_param, VAR_0->x_max);
    int VAR_9 = FUNC_2(VAR_2 + VAR_0->search_param, VAR_0->y_max);
    uint64_t VAR_10, VAR_11;

    if (!(VAR_11 = VAR_0->get_cost(VAR_0, VAR_1, VAR_2, VAR_1, VAR_2)))
        return VAR_11;

    for (VAR_5 = VAR_7; VAR_5 <= VAR_9; VAR_5++)
        for (VAR_4 = VAR_6; VAR_4 <= VAR_8; VAR_4++)
            FUNC_0(VAR_4, VAR_5);

    return VAR_11;
}
