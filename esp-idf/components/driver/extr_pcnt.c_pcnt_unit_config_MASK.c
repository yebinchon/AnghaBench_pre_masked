
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__ unit; scalar_t__ channel; int pulse_gpio_num; int ctrl_gpio_num; int lctrl_mode; int hctrl_mode; int neg_mode; int pos_mode; int counter_l_lim; int counter_h_lim; } ;
typedef TYPE_1__ pcnt_config_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

esp_err_t FUNC_9(const pcnt_config_t *VAR_14)
{
    uint8_t VAR_15 = VAR_14->unit;
    uint8_t VAR_16 = VAR_14->channel;
    int VAR_17 = VAR_14->pulse_gpio_num;
    int VAR_18 = VAR_14->ctrl_gpio_num;

    FUNC_1(VAR_15 < VAR_12, VAR_11, VAR_0);
    FUNC_1(VAR_16 < VAR_3, VAR_2, VAR_0);
    FUNC_1(VAR_17 < 0 || (FUNC_0(VAR_17) && (VAR_17 != VAR_18)), "PCNT pulse input io error", VAR_0);
    FUNC_1(VAR_18 < 0 || FUNC_0(VAR_18), "PCNT ctrl io error", VAR_0);
    FUNC_1((VAR_14->pos_mode < VAR_4) && (VAR_14->neg_mode < VAR_4), VAR_5, VAR_0);
    FUNC_1((VAR_14->hctrl_mode < VAR_10) && (VAR_14->lctrl_mode < VAR_10), VAR_6, VAR_0);

    static bool VAR_19 = 0;
    if (VAR_19 == 0) {
        FUNC_8(VAR_13);
        VAR_19 = 1;
    }
    FUNC_7(VAR_13);

    FUNC_4(VAR_15, VAR_7, VAR_14->counter_h_lim);
    FUNC_4(VAR_15, VAR_8, VAR_14->counter_l_lim);

    FUNC_2(VAR_15, VAR_7);
    FUNC_2(VAR_15, VAR_8);
    FUNC_2(VAR_15, VAR_9);
    FUNC_3(VAR_15);

    FUNC_5(VAR_15, VAR_16, VAR_14->pos_mode, VAR_14->neg_mode, VAR_14->hctrl_mode, VAR_14->lctrl_mode);

    FUNC_6(VAR_15, VAR_16, VAR_17, VAR_18);
    return VAR_1;
}
