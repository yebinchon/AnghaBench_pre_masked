
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int has_reset; struct TYPE_4__* next; } ;
typedef TYPE_1__ twdt_task_t ;
struct TYPE_6__ {int wdt_feed; scalar_t__ wdt_wprotect; } ;
struct TYPE_5__ {TYPE_1__* list; } ;


 TYPE_3__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void FUNC_0(void)
{

    VAR_0=VAR_1;
    VAR_0=1;
    VAR_0=0;

    for (twdt_task_t *VAR_3 = VAR_2->list; VAR_3 != ((void*)0); VAR_3 = VAR_3->next){
        VAR_3->has_reset=0;
    }
}
