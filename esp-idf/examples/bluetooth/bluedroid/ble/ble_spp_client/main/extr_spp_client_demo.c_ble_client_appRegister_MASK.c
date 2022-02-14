
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ esp_err_t ;
typedef int err_msg ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_7 (int,int) ;
 int FUNC_8 (int ,char*,int,int *,int,int *) ;

void FUNC_9(void)
{
    esp_err_t VAR_9;
    char VAR_10[20];

    FUNC_1(VAR_1, "register callback");


    if ((VAR_9 = FUNC_2(VAR_5)) != VAR_0) {
        FUNC_0(VAR_1, "gap register error: %s", FUNC_6(VAR_9, VAR_10, sizeof(VAR_10)));
        return;
    }

    if ((VAR_9 = FUNC_5(VAR_6)) != VAR_0) {
        FUNC_0(VAR_1, "gattc register error: %s", FUNC_6(VAR_9, VAR_10, sizeof(VAR_10)));
        return;
    }
    FUNC_4(VAR_2);

    esp_err_t VAR_11 = FUNC_3(200);
    if (VAR_11){
        FUNC_0(VAR_1, "set local  MTU failed: %s", FUNC_6(VAR_11, VAR_10, sizeof(VAR_10)));
    }

    VAR_4 = FUNC_7(10, sizeof(uint32_t));
    FUNC_8(VAR_7, "spp_client_reg_task", 2048, ((void*)0), 10, ((void*)0));





}
