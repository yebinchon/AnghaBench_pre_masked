
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int,int *,int,int *) ;

esp_err_t FUNC_3(void)
{
    FUNC_1();
    FUNC_0("I2S", VAR_0);
    FUNC_2(VAR_3, "example_i2s_adc_dac", 1024 * 2, ((void*)0), 5, ((void*)0));
    FUNC_2(VAR_2, "ADC read task", 2048, ((void*)0), 5, ((void*)0));
    return VAR_1;
}
