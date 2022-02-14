
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t pcnt_unit_t ;
typedef scalar_t__ pcnt_evt_type_t ;
typedef scalar_t__ int16_t ;
typedef int esp_err_t ;
struct TYPE_8__ {TYPE_3__* conf_unit; } ;
struct TYPE_6__ {scalar_t__ cnt_thres1; scalar_t__ cnt_thres0; } ;
struct TYPE_5__ {scalar_t__ cnt_h_lim; scalar_t__ cnt_l_lim; } ;
struct TYPE_7__ {TYPE_2__ conf1; TYPE_1__ conf2; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;

esp_err_t FUNC_1(pcnt_unit_t VAR_12, pcnt_evt_type_t VAR_13, int16_t VAR_14)
{
    FUNC_0(VAR_12 < VAR_11, VAR_10, VAR_0);
    FUNC_0(VAR_13 < VAR_5, VAR_8, VAR_0);
    FUNC_0(!(VAR_13 == VAR_4 && VAR_14 > 0), VAR_9, VAR_0);
    FUNC_0(!(VAR_13 == VAR_3 && VAR_14 < 0), VAR_9, VAR_0);
    if(VAR_13 == VAR_4) {
        VAR_2.conf_unit[VAR_12].conf2.cnt_l_lim = VAR_14;
    } else if(VAR_13 == VAR_3) {
        VAR_2.conf_unit[VAR_12].conf2.cnt_h_lim = VAR_14;
    } else if(VAR_13 == VAR_6) {
        VAR_2.conf_unit[VAR_12].conf1.cnt_thres0 = VAR_14;
    } else if(VAR_13 == VAR_7) {
        VAR_2.conf_unit[VAR_12].conf1.cnt_thres1 = VAR_14;
    }
    return VAR_1;
}
