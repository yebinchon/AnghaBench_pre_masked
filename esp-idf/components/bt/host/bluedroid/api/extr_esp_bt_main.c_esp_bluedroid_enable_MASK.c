
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int ** FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 () ;

esp_err_t FUNC_5(void)
{
    btc_msg_t VAR_12;
    future_t **VAR_13;

    if (!VAR_11) {
        FUNC_0("Bludroid not initialised\n");
        return VAR_5;
    }

    if (VAR_10) {
        FUNC_0("Bluedroid already enabled\n");
        return VAR_5;
    }

    VAR_13 = FUNC_1(VAR_1);
    *VAR_13 = FUNC_4();
    if (*VAR_13 == ((void*)0)) {
        FUNC_0("Bluedroid enable failed\n");
        return VAR_6;
    }

    VAR_12.sig = VAR_3;
    VAR_12.pid = VAR_2;
    VAR_12.act = VAR_0;

    if (FUNC_2(&VAR_12, ((void*)0), 0, ((void*)0)) != VAR_4) {
        FUNC_0("Bluedroid enable failed\n");
        return VAR_7;
    }

    if (FUNC_3(*VAR_13) == VAR_9) {
        FUNC_0("Bluedroid enable failed\n");
        return VAR_7;
    }

    VAR_10 = 1;

    return VAR_8;
}
