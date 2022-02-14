
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sdmmc_event_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int) ;

esp_err_t FUNC_1(int VAR_6, sdmmc_event_t* VAR_7)
{
    if (!VAR_7) {
        return VAR_0;
    }
    if (!VAR_5) {
        return VAR_1;
    }
    int VAR_8 = FUNC_0(VAR_5, VAR_7, VAR_6);
    if (VAR_8 == VAR_4) {
        return VAR_2;
    }
    return VAR_3;
}
