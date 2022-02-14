
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pulse_gpio_num; int ctrl_gpio_num; int counter_l_lim; int counter_h_lim; int hctrl_mode; int lctrl_mode; int neg_mode; int pos_mode; int unit; int channel; } ;
typedef TYPE_1__ pcnt_config_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int16_t FUNC_8(int VAR_9, int VAR_10, int VAR_11)
{
    pcnt_config_t VAR_12 = {
        .pulse_gpio_num = VAR_9,
        .ctrl_gpio_num = VAR_10,
        .channel = VAR_2,
        .unit = VAR_7,
        .pos_mode = VAR_4,
        .neg_mode = VAR_3,
        .lctrl_mode = VAR_6,
        .hctrl_mode = VAR_5,
        .counter_h_lim = VAR_0,
        .counter_l_lim = VAR_1,
    };
    FUNC_0(FUNC_5(&VAR_12));
    int16_t VAR_13;
    FUNC_0(FUNC_2(VAR_7));
    FUNC_0(FUNC_1(VAR_7));
    FUNC_0(FUNC_3(VAR_7));
    FUNC_0(FUNC_4(VAR_7, &VAR_13));
    FUNC_6("COUNT: %d\n", VAR_13);
    FUNC_7(VAR_11 / VAR_8);
    FUNC_0(FUNC_4(VAR_7, &VAR_13));
    FUNC_6("COUNT: %d\n", VAR_13);
    return VAR_13;
}
