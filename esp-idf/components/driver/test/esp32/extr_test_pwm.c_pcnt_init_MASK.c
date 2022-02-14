
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pulse_gpio_num; int ctrl_gpio_num; int counter_l_lim; int counter_h_lim; int hctrl_mode; int lctrl_mode; int neg_mode; int pos_mode; int unit; int channel; } ;
typedef TYPE_1__ pcnt_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(int VAR_8, int VAR_9)
{
    pcnt_config_t VAR_10 = {
       .pulse_gpio_num = VAR_8,
       .ctrl_gpio_num = VAR_9,
       .channel = VAR_2,
       .unit = VAR_7,
       .pos_mode = VAR_4,
       .neg_mode = VAR_3,
       .lctrl_mode = VAR_6,
       .hctrl_mode = VAR_5,
       .counter_h_lim = VAR_0,
       .counter_l_lim = VAR_1,
   };
   FUNC_0(FUNC_1(&VAR_10));
}
