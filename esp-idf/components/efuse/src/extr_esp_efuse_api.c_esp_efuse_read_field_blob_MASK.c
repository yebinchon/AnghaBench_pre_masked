
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int esp_err_t ;
typedef int esp_efuse_desc_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (size_t,int) ;
 int FUNC_3 (int const**,void*,size_t,int ) ;
 int FUNC_4 (int *,int ,int ) ;

esp_err_t FUNC_5(const esp_efuse_desc_t* VAR_3[], void* VAR_4, size_t VAR_5)
{
    FUNC_0();
    esp_err_t VAR_6 = VAR_1;
    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == 0) {
        VAR_6 = VAR_0;
    } else {
        FUNC_4((uint8_t *)VAR_4, 0, FUNC_2(VAR_5, 8));
        VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_2);
    }
    FUNC_1();
    return VAR_6;
}
