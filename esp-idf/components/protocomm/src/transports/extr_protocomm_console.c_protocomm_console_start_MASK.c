
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int remove_endpoint; int add_endpoint; } ;
typedef TYPE_1__ protocomm_t ;
struct TYPE_7__ {int task_priority; int stack_size; } ;
typedef TYPE_2__ protocomm_console_config_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,char*,int ,int *,int ,int *) ;

esp_err_t FUNC_1(protocomm_t *VAR_11, const protocomm_console_config_t *VAR_12)
{
    if (VAR_11 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_6 != ((void*)0)) {
        if (VAR_6 == VAR_11) {
            return VAR_1;
        }
        else {
            return VAR_2;
        }
    }


    if (FUNC_0(VAR_10, "protocomm_console",
                    VAR_12->stack_size, ((void*)0), VAR_12->task_priority, &VAR_5) != VAR_7) {
        return VAR_3;
    }

    VAR_11->add_endpoint = VAR_8;
    VAR_11->remove_endpoint = VAR_9;
    VAR_6 = VAR_11;
    return VAR_4;
}
