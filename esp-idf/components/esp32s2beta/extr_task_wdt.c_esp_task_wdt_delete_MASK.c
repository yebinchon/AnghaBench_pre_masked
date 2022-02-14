
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ twdt_task_t ;
typedef int esp_err_t ;
typedef int * TaskHandle_t ;
struct TYPE_6__ {TYPE_1__* list; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 TYPE_1__* FUNC_2 (int *,int*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 () ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int * FUNC_7 () ;
 int * FUNC_8 (int) ;

esp_err_t FUNC_9(TaskHandle_t VAR_7)
{
    if(VAR_7 == ((void*)0)){
        VAR_7 = FUNC_7();
    }
    FUNC_4(&VAR_6);

    FUNC_0((VAR_5 != ((void*)0)), VAR_1);

    twdt_task_t *VAR_8;
    bool VAR_9;
    VAR_8 = FUNC_2(VAR_7, &VAR_9);

    FUNC_0((VAR_8 != ((void*)0)), VAR_0);

    if(VAR_8 == VAR_5->list){
        VAR_5->list = VAR_8->next;
        FUNC_3(VAR_8);
    }else{
        twdt_task_t *VAR_10;
        for (VAR_10 = VAR_5->list; VAR_10->next != VAR_8; VAR_10 = VAR_10->next){
            ;
        }
        VAR_10->next = VAR_8->next;
        FUNC_3(VAR_8);
    }


    for(int VAR_11 = 0; VAR_11 < VAR_4; VAR_11++){
        if(VAR_7 == FUNC_8(VAR_11)){
            FUNC_1(VAR_3, VAR_11);
            break;
        }
    }

    if(VAR_9){
        FUNC_6();
    }

    FUNC_5(&VAR_6);
    return VAR_2;
}
