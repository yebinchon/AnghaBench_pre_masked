
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timer_config_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(timer_config_t VAR_6, bool VAR_7)
{
    esp_err_t VAR_8;
    VAR_8 = FUNC_1(VAR_4, VAR_2, &VAR_6);
    if (VAR_7) {
        FUNC_0(VAR_8 == VAR_1);
    } else {
        FUNC_0(VAR_8 == VAR_0);
    }
    VAR_8 = FUNC_1(VAR_4, VAR_3, &VAR_6);
    if (VAR_7) {
        FUNC_0(VAR_8 == VAR_1);
    } else {
        FUNC_0(VAR_8 == VAR_0);
    }
    VAR_8 = FUNC_1(VAR_5, VAR_2, &VAR_6);
    if (VAR_7) {
        FUNC_0(VAR_8 == VAR_1);
    } else {
        FUNC_0(VAR_8 == VAR_0);
    }
    VAR_8 = FUNC_1(VAR_5, VAR_3, &VAR_6);
    if (VAR_7) {
        FUNC_0(VAR_8 == VAR_1);
    } else {
        FUNC_0(VAR_8 == VAR_0);
    }
}
