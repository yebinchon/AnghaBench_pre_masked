
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;
typedef int esp_efuse_desc_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int const**,size_t*,int ,int ) ;

esp_err_t FUNC_3(const esp_efuse_desc_t* VAR_3[], size_t* VAR_4)
{
    FUNC_0();
    esp_err_t VAR_5 = VAR_1;
    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
        VAR_5 = VAR_0;
    } else {
        *VAR_4 = 0;
        VAR_5 = FUNC_2(VAR_3, VAR_4, 0, VAR_2);
    }
    FUNC_1();
    return VAR_5;
}
