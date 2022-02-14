
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sigmadelta_channel_t ;
typedef size_t gpio_num_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_8 ;
 int FUNC_3 (size_t,scalar_t__,int ,int ) ;
 int FUNC_4 (size_t,int ) ;

esp_err_t FUNC_5(sigmadelta_channel_t VAR_9, gpio_num_t VAR_10)
{
    FUNC_2(VAR_9 < VAR_7, VAR_6, VAR_0);
    FUNC_2(FUNC_0(VAR_10), VAR_8, VAR_0);
    FUNC_1(VAR_3[VAR_10], VAR_5);
    FUNC_4(VAR_10, VAR_2);
    FUNC_3(VAR_10, VAR_4 + VAR_9, 0, 0);
    return VAR_1;
}
