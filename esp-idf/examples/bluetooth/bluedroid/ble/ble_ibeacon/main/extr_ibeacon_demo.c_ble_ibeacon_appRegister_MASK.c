
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;

void FUNC_4(void)
{
    esp_err_t VAR_3;

    FUNC_1(VAR_0, "register callback");


    if ((VAR_3 = FUNC_2(VAR_2)) != VAR_1) {
        FUNC_0(VAR_0, "gap register error: %s", FUNC_3(VAR_3));
        return;
    }

}
