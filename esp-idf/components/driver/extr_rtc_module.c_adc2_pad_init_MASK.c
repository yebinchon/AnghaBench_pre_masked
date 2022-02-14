
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gpio_num_t ;
typedef int esp_err_t ;
typedef int adc2_channel_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static esp_err_t FUNC_6(adc2_channel_t VAR_2)
{
    gpio_num_t VAR_3 = 0;
    FUNC_0(FUNC_1(VAR_2, &VAR_3));
    FUNC_0(FUNC_3(VAR_3));
    FUNC_0(FUNC_5(VAR_3));
    FUNC_0(FUNC_4(VAR_3));
    FUNC_0(FUNC_2(VAR_3, VAR_1));
    return VAR_0;
}
