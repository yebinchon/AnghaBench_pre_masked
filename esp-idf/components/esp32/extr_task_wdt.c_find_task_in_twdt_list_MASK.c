
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ task_handle; int has_reset; struct TYPE_4__* next; } ;
typedef TYPE_1__ twdt_task_t ;
typedef scalar_t__ TaskHandle_t ;
struct TYPE_5__ {TYPE_1__* list; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static twdt_task_t *FUNC_0(TaskHandle_t VAR_1, bool *VAR_2)
{
    twdt_task_t *VAR_3 = ((void*)0);
    *VAR_2 = 1;
    for(twdt_task_t *VAR_4 = VAR_0->list; VAR_4 != ((void*)0); VAR_4 = VAR_4->next){
        if(VAR_4->task_handle == VAR_1){
            VAR_3 = VAR_4;
        }else{
            if(VAR_4->has_reset == 0){
                *VAR_2 = 0;
            }
        }
    }
    return VAR_3;
}
