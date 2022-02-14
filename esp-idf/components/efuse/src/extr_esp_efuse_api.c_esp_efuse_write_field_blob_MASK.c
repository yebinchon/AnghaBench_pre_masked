
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_err_t ;
typedef int esp_efuse_desc_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int const**,void*,size_t,int ) ;
 int FUNC_5 () ;
 int VAR_2 ;
 int VAR_3 ;

esp_err_t FUNC_6(const esp_efuse_desc_t* VAR_4[], const void* VAR_5, size_t VAR_6)
{
    FUNC_0();
    esp_err_t VAR_7 = VAR_1;
    if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == 0) {
        VAR_7 = VAR_0;
    } else {
        if (VAR_3 == 0) {
            FUNC_5();
        }
        VAR_7 = FUNC_4(VAR_4, (void*)VAR_5, VAR_6, VAR_2);

        if (VAR_3 == 0) {
            if (VAR_7 == VAR_1) {
                VAR_7 = FUNC_2();
                if (VAR_7 == VAR_1) {
                    FUNC_3();
                }
            }
            FUNC_5();
        }
    }
    FUNC_1();
    return VAR_7;
}
