
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int int32_t ;
typedef int esp_err_t ;


 int VAR_0 ;
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
 int FUNC_0 (scalar_t__,int) ;

esp_err_t FUNC_1(int VAR_12, uint16_t VAR_13, uint16_t VAR_14, int VAR_15, int VAR_16)
{
    if (VAR_12 >= VAR_0) {
        return VAR_3;
    }
    uint32_t VAR_17 =
        ((VAR_16 & VAR_10) << VAR_11) |
        ((VAR_13 & VAR_8) << VAR_9) |
        ((VAR_14 & VAR_6) << VAR_7) |
        ((VAR_15 & 1) << VAR_5);

    FUNC_0(VAR_1 + VAR_12 * sizeof(int32_t), 0);
    FUNC_0(VAR_2 + VAR_12 * sizeof(int32_t), VAR_17);
    return VAR_4;
}
