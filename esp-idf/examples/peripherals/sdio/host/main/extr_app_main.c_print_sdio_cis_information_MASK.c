
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int sdmmc_card_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *,int *,size_t const,size_t*) ;
 int FUNC_8 (int *,size_t,int *) ;

__attribute__((used)) static esp_err_t FUNC_9(sdmmc_card_t* VAR_3)
{
    const size_t VAR_4 = 256;
    uint8_t VAR_5[VAR_4];
    size_t VAR_6 = 1024;
    esp_err_t VAR_7 = VAR_1;

    VAR_7 = FUNC_7(VAR_3, VAR_5, VAR_4, &VAR_6);
    if (VAR_7 == VAR_0) {
        int VAR_8 = VAR_6;
        uint8_t* VAR_9 = FUNC_6(VAR_8);
        FUNC_4(VAR_9);

        FUNC_2(VAR_2, "CIS data longer than expected, temporary buffer allocated.");
        VAR_7 = FUNC_7(VAR_3, VAR_9, VAR_8, &VAR_6);
        FUNC_0(VAR_7);

        FUNC_8(VAR_9, VAR_6, ((void*)0));

        FUNC_5(VAR_9);
    } else if (VAR_7 == VAR_1) {
        FUNC_8(VAR_5, VAR_6, ((void*)0));
    } else {

        FUNC_1(VAR_2, "failed to get the entire CIS data.");
        FUNC_3();
    }
    return VAR_1;
}
