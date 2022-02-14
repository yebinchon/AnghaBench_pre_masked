
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int mb_size; int search_param; int x_min; int x_max; int y_min; int y_max; int * get_cost; } ;
typedef TYPE_1__ AVMotionEstContext ;


 int VAR_0 ;

void FUNC_0(AVMotionEstContext *VAR_1, int VAR_2, int VAR_3,
                        int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    VAR_1->width = VAR_4;
    VAR_1->height = VAR_5;
    VAR_1->mb_size = VAR_2;
    VAR_1->search_param = VAR_3;
    VAR_1->get_cost = &VAR_0;
    VAR_1->x_min = VAR_6;
    VAR_1->x_max = VAR_7;
    VAR_1->y_min = VAR_8;
    VAR_1->y_max = VAR_9;
}
