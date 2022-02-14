
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int has_reset; struct TYPE_5__* next; int * task_handle; } ;
typedef TYPE_1__ twdt_task_t ;
typedef int esp_err_t ;
typedef int * TaskHandle_t ;
struct TYPE_6__ {TYPE_1__* list; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (int ,int) ;
 TYPE_1__* FUNC_4 (int *,int*) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int FUNC_7 () ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int * FUNC_8 () ;
 int * FUNC_9 (int) ;

esp_err_t FUNC_10(TaskHandle_t VAR_8)
{
    FUNC_5(&VAR_7);

    FUNC_0((VAR_6 != ((void*)0)), VAR_1);

    twdt_task_t *VAR_9;
    bool VAR_10;
    if (VAR_8 == ((void*)0)){
        VAR_8 = FUNC_8();
    }

    VAR_9 = FUNC_4(VAR_8, &VAR_10);

    FUNC_0((VAR_9 == ((void*)0)), VAR_0);


    VAR_9 = FUNC_2(1,sizeof(twdt_task_t));
    FUNC_0((VAR_9 != ((void*)0)), VAR_2);
    VAR_9->task_handle = VAR_8;
    VAR_9->has_reset = 1;
    VAR_9->next = ((void*)0);
    if (VAR_6->list == ((void*)0)) {
        VAR_6->list = VAR_9;
    } else {
        twdt_task_t *VAR_11;
        for (VAR_11 = VAR_6->list; VAR_11->next != ((void*)0); VAR_11 = VAR_11->next){
            ;
        }
        VAR_11->next = VAR_9;
    }


    for(int VAR_12 = 0; VAR_12 < VAR_5; VAR_12++){
        if(VAR_8 == FUNC_9(VAR_12)){
            FUNC_1(FUNC_3(VAR_4, VAR_12));
            break;
        }
    }

    if(VAR_10){
        FUNC_7();
    }

    FUNC_6(&VAR_7);
    return VAR_3;
}
