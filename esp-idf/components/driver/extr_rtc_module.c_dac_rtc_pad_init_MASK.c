
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gpio_num_t ;
typedef int esp_err_t ;
typedef scalar_t__ dac_channel_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static esp_err_t FUNC_7(dac_channel_t VAR_5)
{
    FUNC_0((VAR_5 >= VAR_0) && (VAR_5 < VAR_1), VAR_2, VAR_3);
    gpio_num_t VAR_6 = 0;
    FUNC_1(VAR_5, &VAR_6);
    FUNC_2(VAR_6);
    FUNC_4(VAR_6);
    FUNC_3(VAR_6);
    FUNC_6(VAR_6);
    FUNC_5(VAR_6);

    return VAR_4;
}
