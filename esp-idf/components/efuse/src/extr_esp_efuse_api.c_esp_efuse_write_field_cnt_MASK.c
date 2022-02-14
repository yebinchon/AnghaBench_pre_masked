
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
 int FUNC_2 (int ,char*,size_t) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int const**,size_t*,int ,int ) ;
 int FUNC_6 () ;
 int VAR_5 ;
 int VAR_6 ;

esp_err_t FUNC_7(const esp_efuse_desc_t* VAR_7[], size_t VAR_8)
{
    FUNC_0();
    esp_err_t VAR_9 = VAR_2;
    if (VAR_7 == ((void*)0) || VAR_8 == 0) {
        VAR_9 = VAR_1;
    } else {
        if (VAR_6 == 0) {
            FUNC_6();
        }
        VAR_9 = FUNC_5(VAR_7, &VAR_8, 0, VAR_5);

        if (VAR_8 != 0) {
            FUNC_2(VAR_4, "The required number of bits can not be set. [Not set %d]", VAR_8);
            VAR_9 = VAR_0;
        }
        if (VAR_9 == VAR_3) {
            VAR_9 = VAR_2;
        }

        if (VAR_6 == 0) {
            if (VAR_9 == VAR_2) {
                VAR_9 = FUNC_3();
                if (VAR_9 == VAR_2) {
                    FUNC_4();
                }
            }
            FUNC_6();
        }
    }
    FUNC_1();
    return VAR_9;
}
