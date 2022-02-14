
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;

esp_err_t FUNC_1(int VAR_5)
{
    if (VAR_5 >= VAR_0) {
        return VAR_2;
    }
    uint32_t VAR_6 = FUNC_0(VAR_1 + VAR_5 * sizeof(int32_t));
    if (VAR_6 & 1) {
        return VAR_3;
    }
    return VAR_4;
}
