
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* utility; int* nearest_cb; TYPE_2__** cells; } ;
typedef TYPE_1__ elbg_data ;
struct TYPE_5__ {size_t index; struct TYPE_5__* next; } ;
typedef TYPE_2__ cell ;



__attribute__((used)) static void FUNC_0(elbg_data *VAR_0, int VAR_1, int VAR_2)
{
    cell *VAR_3;

    VAR_0->utility[VAR_1] = VAR_2;
    for (VAR_3=VAR_0->cells[VAR_1]; VAR_3; VAR_3=VAR_3->next)
        VAR_0->nearest_cb[VAR_3->index] = VAR_1;
}
