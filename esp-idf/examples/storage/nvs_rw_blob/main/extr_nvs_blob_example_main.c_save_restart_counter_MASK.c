
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvs_handle_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,char*,scalar_t__) ;

esp_err_t FUNC_5(void)
{
    nvs_handle_t VAR_4;
    esp_err_t VAR_5;


    VAR_5 = FUNC_3(VAR_3, VAR_2, &VAR_4);
    if (VAR_5 != VAR_1) return VAR_5;


    int32_t VAR_6 = 0;
    VAR_5 = FUNC_2(VAR_4, "restart_conter", &VAR_6);
    if (VAR_5 != VAR_1 && VAR_5 != VAR_0) return VAR_5;


    VAR_6++;
    VAR_5 = FUNC_4(VAR_4, "restart_conter", VAR_6);
    if (VAR_5 != VAR_1) return VAR_5;





    VAR_5 = FUNC_1(VAR_4);
    if (VAR_5 != VAR_1) return VAR_5;


    FUNC_0(VAR_4);
    return VAR_1;
}
