
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t pcnt_unit_t ;
typedef scalar_t__ pcnt_ctrl_mode_t ;
typedef scalar_t__ pcnt_count_mode_t ;
typedef scalar_t__ pcnt_channel_t ;
typedef int esp_err_t ;
struct TYPE_6__ {TYPE_2__* conf_unit; } ;
struct TYPE_4__ {scalar_t__ ch1_lctrl_mode; scalar_t__ ch1_hctrl_mode; scalar_t__ ch1_neg_mode; scalar_t__ ch1_pos_mode; scalar_t__ ch0_lctrl_mode; scalar_t__ ch0_hctrl_mode; scalar_t__ ch0_neg_mode; scalar_t__ ch0_pos_mode; } ;
struct TYPE_5__ {TYPE_1__ conf0; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;

esp_err_t FUNC_1(pcnt_unit_t VAR_11, pcnt_channel_t VAR_12, pcnt_count_mode_t VAR_13, pcnt_count_mode_t VAR_14, pcnt_ctrl_mode_t VAR_15, pcnt_ctrl_mode_t VAR_16)
{
    FUNC_0(VAR_11 < VAR_10, VAR_9, VAR_0);
    FUNC_0(VAR_12 < VAR_4, VAR_3, VAR_0);
    FUNC_0((VAR_13 < VAR_5) && (VAR_14 < VAR_5), VAR_6, VAR_0);
    FUNC_0((VAR_15 < VAR_8) && (VAR_16 < VAR_8), VAR_7, VAR_0);

    if(VAR_12 == 0) {
        VAR_2.conf_unit[VAR_11].conf0.ch0_pos_mode = VAR_13;
        VAR_2.conf_unit[VAR_11].conf0.ch0_neg_mode = VAR_14;
        VAR_2.conf_unit[VAR_11].conf0.ch0_hctrl_mode = VAR_15;
        VAR_2.conf_unit[VAR_11].conf0.ch0_lctrl_mode = VAR_16;
    } else {
        VAR_2.conf_unit[VAR_11].conf0.ch1_pos_mode = VAR_13;
        VAR_2.conf_unit[VAR_11].conf0.ch1_neg_mode = VAR_14;
        VAR_2.conf_unit[VAR_11].conf0.ch1_hctrl_mode = VAR_15;
        VAR_2.conf_unit[VAR_11].conf0.ch1_lctrl_mode = VAR_16;
    }
    return VAR_1;
}
