
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* elos; } ;
typedef TYPE_1__ sortable_bbox ;


 int FUNC_0 (int,int) ;

void FUNC_1(sortable_bbox *VAR_0, sortable_bbox *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = 32;
    float VAR_5 = 1./(1+FUNC_0(10, (VAR_1->elos[VAR_2] - VAR_0->elos[VAR_2])/400.));
    float VAR_6 = 1./(1+FUNC_0(10, (VAR_0->elos[VAR_2] - VAR_1->elos[VAR_2])/400.));
    float VAR_7 = VAR_3 ? 1 : 0;
    float VAR_8 = VAR_3 ? 0 : 1;
    VAR_0->elos[VAR_2] += VAR_4*(VAR_7 - VAR_5);
    VAR_1->elos[VAR_2] += VAR_4*(VAR_8 - VAR_6);
}
