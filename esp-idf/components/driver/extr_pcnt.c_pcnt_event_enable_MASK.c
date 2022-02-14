
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t pcnt_unit_t ;
typedef scalar_t__ pcnt_evt_type_t ;
typedef int esp_err_t ;
struct TYPE_6__ {TYPE_2__* conf_unit; } ;
struct TYPE_4__ {int thr_l_lim_en; int thr_h_lim_en; int thr_thres0_en; int thr_thres1_en; int thr_zero_en; } ;
struct TYPE_5__ {TYPE_1__ conf0; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;

esp_err_t FUNC_1(pcnt_unit_t VAR_12, pcnt_evt_type_t VAR_13)
{
    FUNC_0(VAR_12 < VAR_11, VAR_10, VAR_0);
    FUNC_0(VAR_13 < VAR_5, VAR_8, VAR_0);
    if(VAR_13 == VAR_4) {
        VAR_2.conf_unit[VAR_12].conf0.thr_l_lim_en = 1;
    } else if(VAR_13 == VAR_3) {
        VAR_2.conf_unit[VAR_12].conf0.thr_h_lim_en = 1;
    } else if(VAR_13 == VAR_6) {
        VAR_2.conf_unit[VAR_12].conf0.thr_thres0_en = 1;
    } else if(VAR_13 == VAR_7) {
        VAR_2.conf_unit[VAR_12].conf0.thr_thres1_en = 1;
    } else if(VAR_13 == VAR_9) {
        VAR_2.conf_unit[VAR_12].conf0.thr_zero_en = 1;
    }
    return VAR_1;
}
