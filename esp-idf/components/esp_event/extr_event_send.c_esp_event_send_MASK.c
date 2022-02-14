
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int system_event_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

esp_err_t FUNC_2(system_event_t *VAR_1)
{

    esp_err_t VAR_2 = FUNC_1(VAR_1);
    if (VAR_2 != VAR_0) {
        return VAR_2;
    }


    VAR_2 = FUNC_0(VAR_1);
    if (VAR_2 != VAR_0) {
        return VAR_2;
    }

    return VAR_0;
}
