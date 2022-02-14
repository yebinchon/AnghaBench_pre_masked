
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dim; TYPE_2__** cells; scalar_t__ points; } ;
typedef TYPE_1__ elbg_data ;
struct TYPE_5__ {int index; struct TYPE_5__* next; } ;
typedef TYPE_2__ cell ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int*,int,int ) ;

__attribute__((used)) static void FUNC_1(elbg_data *VAR_1, int *VAR_2,
                           int *VAR_3[3])
{
    cell *VAR_4;
    cell **VAR_5 = &VAR_1->cells[VAR_2[2]];

    while(*VAR_5)
        VAR_5= &(*VAR_5)->next;

    *VAR_5 = VAR_1->cells[VAR_2[0]];

    VAR_1->cells[VAR_2[0]] = ((void*)0);
    VAR_4 = VAR_1->cells[VAR_2[1]];
    VAR_1->cells[VAR_2[1]] = ((void*)0);

    while(VAR_4) {
        cell *VAR_6 = VAR_4->next;
        int VAR_7 = FUNC_0(VAR_1->points + VAR_4->index*VAR_1->dim,
                           VAR_3[0], VAR_1->dim, VAR_0) >
                  FUNC_0(VAR_1->points + VAR_4->index*VAR_1->dim,
                           VAR_3[1], VAR_1->dim, VAR_0);

        VAR_4->next = VAR_1->cells[VAR_2[VAR_7]];
        VAR_1->cells[VAR_2[VAR_7]] = VAR_4;
        VAR_4 = VAR_6;
    }
}
