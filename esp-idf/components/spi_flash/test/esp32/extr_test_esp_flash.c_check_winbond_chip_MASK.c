
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_flash_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int*) ;

__attribute__((used)) static bool FUNC_2(esp_flash_t* VAR_0)
{
    uint32_t VAR_1;
    esp_err_t VAR_2 = FUNC_1(VAR_0, &VAR_1);
    FUNC_0(VAR_2);
    if ((VAR_1 >> 16) == 0xEF) {
        return 1;
    } else {
        return 0;
    }
}
