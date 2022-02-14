
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * esp_hf_cb_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 () ;

esp_err_t FUNC_2(esp_hf_cb_t VAR_5)
{
    if (FUNC_1() != VAR_1) {
        return VAR_2;
    }
    if (VAR_5 == ((void*)0)) {
        return VAR_3;
    }
    FUNC_0(VAR_0, VAR_5);
    return VAR_4;
}
