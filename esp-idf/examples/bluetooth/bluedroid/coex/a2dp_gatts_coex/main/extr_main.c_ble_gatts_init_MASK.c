
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(void)
{
    esp_err_t VAR_5 = FUNC_4(VAR_4);
    if (VAR_5){
        FUNC_0(VAR_0, "gatts register error, error code = 0x%x", VAR_5);
        return;
    }
    VAR_5 = FUNC_1(VAR_3);
    if (VAR_5){
        FUNC_0(VAR_0, "gap register error, error code = 0x%x", VAR_5);
        return;
    }
    VAR_5 = FUNC_3(VAR_1);
    if (VAR_5){
        FUNC_0(VAR_0, "gatts app register error, error code = 0x%x", VAR_5);
        return;
    }
    VAR_5 = FUNC_3(VAR_2);
    if (VAR_5){
        FUNC_0(VAR_0, "gatts app register error, error code = 0x%x", VAR_5);
        return;
    }
    esp_err_t VAR_6 = FUNC_2(500);
    if (VAR_6){
        FUNC_0(VAR_0, "set local  MTU failed, error code = 0x%x", VAR_6);
    }
}
