
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rmt_mode_t ;
typedef scalar_t__ rmt_channel_t ;
typedef size_t gpio_num_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (size_t,scalar_t__,int ) ;
 int FUNC_5 (size_t,scalar_t__,int ,int ) ;
 int FUNC_6 (size_t,int ) ;

esp_err_t FUNC_7(rmt_channel_t VAR_15, rmt_mode_t VAR_16, gpio_num_t VAR_17)
{
    FUNC_3(VAR_15 < VAR_7, VAR_6, VAR_0);
    FUNC_3(VAR_16 < VAR_10, VAR_9, VAR_0);
    FUNC_3(((FUNC_0(VAR_17) && (VAR_16 == VAR_11)) || (FUNC_1(VAR_17) && (VAR_16 == VAR_12))),
        VAR_8, VAR_0);

    FUNC_2(VAR_4[VAR_17], VAR_5);
    if(VAR_16 == VAR_12) {
        FUNC_6(VAR_17, VAR_3);
        FUNC_5(VAR_17, VAR_14 + VAR_15, 0, 0);
    } else {
        FUNC_6(VAR_17, VAR_2);
        FUNC_4(VAR_17, VAR_13 + VAR_15, 0);
    }
    return VAR_1;
}
