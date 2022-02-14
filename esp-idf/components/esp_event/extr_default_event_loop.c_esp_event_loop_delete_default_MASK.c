
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int * VAR_2 ;

esp_err_t FUNC_1(void)
{
    if (!VAR_2) {
        return VAR_0;
    }

    esp_err_t VAR_3;

    VAR_3 = FUNC_0(VAR_2);

    if (VAR_3 != VAR_1) {
        return VAR_3;
    }

    VAR_2 = ((void*)0);

    return VAR_1;
}
