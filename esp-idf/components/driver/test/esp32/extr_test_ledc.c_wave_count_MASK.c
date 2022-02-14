
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int counter_l_lim; int counter_h_lim; int hctrl_mode; int lctrl_mode; int neg_mode; int pos_mode; int unit; int channel; int ctrl_gpio_num; int pulse_gpio_num; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_10 ;
 int FUNC_6 (int) ;

__attribute__((used)) static int16_t FUNC_7(int VAR_11)
{
    int16_t VAR_12;
    pcnt_config_t VAR_13 = {
        .pulse_gpio_num = VAR_6,
        .ctrl_gpio_num = VAR_5,
        .channel = VAR_2,
        .unit = VAR_9,
        .pos_mode = VAR_4,
        .neg_mode = VAR_3,
        .lctrl_mode = VAR_8,
        .hctrl_mode = VAR_7,
        .counter_h_lim = VAR_0,
        .counter_l_lim = VAR_1,
    };
    FUNC_0(FUNC_5(&VAR_13));


    FUNC_0(FUNC_2(VAR_9));
    FUNC_0(FUNC_1(VAR_9));
    FUNC_0(FUNC_3(VAR_9));
    FUNC_0(FUNC_4(VAR_9, &VAR_12));

    FUNC_6(VAR_11 / VAR_10);
    FUNC_0(FUNC_4(VAR_9, &VAR_12));
    return VAR_12;
}
