
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wps_st_cb_t ;
typedef scalar_t__ wifi_mode_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int ) ;

bool
FUNC_2(wps_st_cb_t VAR_2)
{
    wifi_mode_t VAR_3;

    FUNC_0(&VAR_3);
    if (VAR_3 == VAR_0 || VAR_3 == VAR_1) {
        return 0;
    }

    if (FUNC_1(VAR_2) == 0) {
        return 1;
    }

    return 0;
}
