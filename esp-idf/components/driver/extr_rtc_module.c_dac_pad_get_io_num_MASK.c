
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gpio_num_t ;
typedef int esp_err_t ;
typedef int dac_channel_t ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,int ) ;

esp_err_t FUNC_1(dac_channel_t VAR_6, gpio_num_t *VAR_7)
{
    FUNC_0((VAR_6 >= 129) && (VAR_6 < VAR_2), VAR_3, VAR_4);
    FUNC_0(*VAR_7, "Param null", VAR_4);

    switch (VAR_6) {
    case 129:
        *VAR_7 = VAR_0;
        break;
    case 128:
        *VAR_7 = VAR_1;
        break;
    default:
        return VAR_4;
    }

    return VAR_5;
}
