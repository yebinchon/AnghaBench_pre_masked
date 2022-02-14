
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;

esp_err_t FUNC_3(void)
{
    if (VAR_2 == 0) {
        return VAR_0;
    } else {
        esp_err_t VAR_3 = FUNC_1();
        if (VAR_3 == VAR_1) {
            FUNC_2();
        }
        FUNC_0();
        return VAR_3;
    }
}
