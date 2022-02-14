
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int has_reset; struct TYPE_3__* next; } ;
typedef TYPE_1__ twdt_task_t ;
struct TYPE_4__ {TYPE_1__* list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{

    FUNC_1(&VAR_0, 0);
    FUNC_0(&VAR_0);
    FUNC_1(&VAR_0, 1);

    for (twdt_task_t *VAR_2 = VAR_1->list; VAR_2 != ((void*)0); VAR_2 = VAR_2->next){
        VAR_2->has_reset=0;
    }
}
