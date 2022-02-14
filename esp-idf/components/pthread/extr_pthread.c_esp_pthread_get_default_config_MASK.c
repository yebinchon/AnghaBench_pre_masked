
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inherit_cfg; int pin_to_core; int * thread_name; int prio; int stack_size; } ;
typedef TYPE_1__ esp_pthread_cfg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

esp_pthread_cfg_t FUNC_1(void)
{
    esp_pthread_cfg_t VAR_2 = {
        .stack_size = VAR_1,
        .prio = VAR_0,
        .inherit_cfg = 0,
        .thread_name = ((void*)0),
        .pin_to_core = FUNC_0()
    };

    return VAR_2;
}
