
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mcpwm_unit_t ;
typedef scalar_t__ mcpwm_io_signals_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int,int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_4 (int,scalar_t__,int ) ;
 int FUNC_5 (int,scalar_t__,int ,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (scalar_t__) ;

esp_err_t FUNC_8(mcpwm_unit_t VAR_21, mcpwm_io_signals_t VAR_22, int VAR_23)
{
    if (VAR_23 == VAR_8) {

        return VAR_1;
    }

    FUNC_2(VAR_21 < VAR_11, VAR_12, VAR_0);
    FUNC_2((FUNC_0(VAR_23)), VAR_7, VAR_0);

    FUNC_7(VAR_15 + VAR_21);
    FUNC_3(VAR_4[VAR_23], VAR_16);
    bool VAR_24 = (VAR_22 <= VAR_5);
    if (VAR_21 == VAR_10) {
        if (VAR_24) {
            FUNC_2((FUNC_1(VAR_23)), VAR_7, VAR_0);
            FUNC_6(VAR_23, VAR_3);
            FUNC_5(VAR_23, VAR_17 + VAR_22, 0, 0);
        } else {
            FUNC_6(VAR_23, VAR_2);
            FUNC_4(VAR_23, VAR_18 + VAR_22 - VAR_13, 0);
        }
    } else {
        if (VAR_24) {
            FUNC_2((FUNC_1(VAR_23)), VAR_7, VAR_0);
            FUNC_6(VAR_23, VAR_3);
            FUNC_5(VAR_23, VAR_19 + VAR_22, 0, 0);
        } else if (VAR_22 >= VAR_9 && VAR_22 < VAR_6) {
            FUNC_6(VAR_23, VAR_2);
            FUNC_4(VAR_23, VAR_20 + VAR_22 - VAR_13, 0);
        } else {
            FUNC_6(VAR_23, VAR_2);
            FUNC_4(VAR_23, VAR_20 + VAR_22 - VAR_14, 0);
        }
    }
    return VAR_1;
}
