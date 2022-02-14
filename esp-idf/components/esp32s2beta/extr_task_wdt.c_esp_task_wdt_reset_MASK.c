
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int has_reset; } ;
typedef TYPE_1__ twdt_task_t ;
typedef int esp_err_t ;
typedef int TaskHandle_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int ,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;

esp_err_t FUNC_6(void)
{
    FUNC_2(&VAR_4);

    FUNC_0((VAR_3 != ((void*)0)), VAR_0);

    TaskHandle_t VAR_5 = FUNC_5();
    twdt_task_t *VAR_6;
    bool VAR_7;


    VAR_6 = FUNC_1(VAR_5, &VAR_7);

    FUNC_0((VAR_6 != ((void*)0)), VAR_1);

    VAR_6->has_reset = 1;
    if(VAR_7){
        FUNC_4();
    }

    FUNC_3(&VAR_4);
    return VAR_2;
}
