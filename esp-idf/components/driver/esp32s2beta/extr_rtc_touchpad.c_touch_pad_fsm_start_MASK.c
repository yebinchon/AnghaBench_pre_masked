
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_5__ {int touch_clkgate_en; } ;
struct TYPE_8__ {TYPE_1__ touch_ctrl2; } ;
struct TYPE_6__ {int touch_channel_clr; } ;
struct TYPE_7__ {TYPE_2__ sar_touch_chn_st; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;

esp_err_t FUNC_2(void)
{
    FUNC_0();
    VAR_1.touch_ctrl2.touch_clkgate_en = 1;
    VAR_2.sar_touch_chn_st.touch_channel_clr = VAR_3;
    FUNC_1();
    return VAR_0;
}
