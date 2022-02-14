
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int esp_err_t ;
typedef scalar_t__ dac_channel_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_17 ;

esp_err_t FUNC_5(dac_channel_t VAR_18, uint8_t VAR_19)
{
    FUNC_1((VAR_18 >= VAR_0) && (VAR_18 < VAR_2), VAR_3, VAR_4);
    FUNC_3(&VAR_17);

    FUNC_0(VAR_14, VAR_16);


    if (VAR_18 == VAR_0) {
        FUNC_0(VAR_15, VAR_12);
    } else if (VAR_18 == VAR_1) {
        FUNC_0(VAR_15, VAR_13);
    }


    if (VAR_18 == VAR_0) {
        FUNC_2(VAR_6, VAR_8, VAR_19, VAR_9);
    } else if (VAR_18 == VAR_1) {
        FUNC_2(VAR_7, VAR_10, VAR_19, VAR_11);
    }

    FUNC_4(&VAR_17);

    return VAR_5;
}
