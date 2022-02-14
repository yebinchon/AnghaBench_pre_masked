
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int has_reset; struct TYPE_5__* next; int task_handle; } ;
typedef TYPE_1__ twdt_task_t ;
typedef int TaskHandle_t ;
struct TYPE_6__ {TYPE_1__* list; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int,int) ;
 TYPE_1__* FUNC_2 (int ,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_6 () ;

void FUNC_7(void)
{
    FUNC_3(&VAR_2);

    FUNC_0((VAR_1 != ((void*)0)), VAR_0);


    TaskHandle_t VAR_3 = FUNC_6();
    bool VAR_4;
    twdt_task_t *VAR_5 = FUNC_2(VAR_3, &VAR_4);


    if(VAR_5 != ((void*)0)){
        VAR_5->has_reset = 1;
        if(VAR_4){
            FUNC_5();
        }
        FUNC_4(&VAR_2);
        return;
    }


    VAR_5 = FUNC_1(1, sizeof(twdt_task_t));
    FUNC_0((VAR_5 != ((void*)0)), VAR_0);
    VAR_5->task_handle = VAR_3;
    VAR_5->has_reset = 1;
    VAR_5->next = ((void*)0);

    if (VAR_1->list == ((void*)0)) {
        VAR_1->list = VAR_5;
    } else {
        twdt_task_t *VAR_6;
        for (VAR_6 = VAR_1->list; VAR_6->next != ((void*)0); VAR_6 = VAR_6->next){
            ;
        }
        VAR_6->next = VAR_5;
    }

    FUNC_4(&VAR_2);
}
