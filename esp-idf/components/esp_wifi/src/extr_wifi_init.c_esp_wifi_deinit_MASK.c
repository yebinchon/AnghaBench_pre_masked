
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;

esp_err_t FUNC_4(void)
{
    esp_err_t VAR_2 = VAR_0;

    FUNC_1();
    VAR_2 = FUNC_2();
    if (VAR_2 != VAR_0) {
        FUNC_0(VAR_1, "Failed to deinit Wi-Fi driver (0x%x)", VAR_2);
    }





    return VAR_2;
}
