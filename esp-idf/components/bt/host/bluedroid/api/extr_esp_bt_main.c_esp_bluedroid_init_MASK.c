
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int future_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int act; int pid; int sig; } ;
typedef TYPE_1__ btc_msg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (char*) ;
 int VAR_11 ;
 int FUNC_1 () ;
 int ** FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int ,int *) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 () ;

esp_err_t FUNC_8(void)
{
    btc_msg_t VAR_12;
    future_t **VAR_13;

    if (FUNC_4() != VAR_5) {
        FUNC_0("Controller not initialised\n");
        return VAR_6;
    }

    if (VAR_11) {
        FUNC_0("Bluedroid already initialised\n");
        return VAR_6;
    }





    FUNC_1();

    VAR_13 = FUNC_2(VAR_1);
    *VAR_13 = FUNC_6();
    if (*VAR_13 == ((void*)0)) {
        FUNC_0("Bluedroid initialise failed\n");
        return VAR_7;
    }

    VAR_12.sig = VAR_3;
    VAR_12.pid = VAR_2;
    VAR_12.act = VAR_0;

    if (FUNC_3(&VAR_12, ((void*)0), 0, ((void*)0)) != VAR_4) {
        FUNC_0("Bluedroid initialise failed\n");
        return VAR_8;
    }

    if (FUNC_5(*VAR_13) == VAR_10) {
        FUNC_0("Bluedroid initialise failed\n");
        return VAR_8;
    }

    VAR_11 = 1;

    return VAR_9;
}
