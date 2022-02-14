
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int protocomm_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (int ) ;

esp_err_t FUNC_3(protocomm_t *VAR_5)
{
    if (VAR_5 != VAR_4) {
        FUNC_0(VAR_2, "Incorrect stop request");
        return VAR_0;
    }

    FUNC_1(VAR_2, "Stopping console...");
    FUNC_2(VAR_3);
    return VAR_1;
}
