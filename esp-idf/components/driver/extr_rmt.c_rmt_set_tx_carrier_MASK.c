
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint16_t ;
typedef size_t rmt_channel_t ;
typedef scalar_t__ rmt_carrier_level_t ;
typedef int esp_err_t ;
struct TYPE_8__ {TYPE_2__* conf_ch; TYPE_3__* carrier_duty_ch; } ;
struct TYPE_7__ {void* low; void* high; } ;
struct TYPE_5__ {int carrier_en; scalar_t__ carrier_out_lv; } ;
struct TYPE_6__ {TYPE_1__ conf0; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int,int ,int ) ;

esp_err_t FUNC_1(rmt_channel_t VAR_7, bool VAR_8, uint16_t VAR_9, uint16_t VAR_10,
    rmt_carrier_level_t VAR_11)
{
    FUNC_0(VAR_7 < VAR_6, VAR_5, VAR_0);
    FUNC_0(VAR_11 < VAR_4, VAR_3, VAR_0);
    VAR_2.carrier_duty_ch[VAR_7].high = VAR_9;
    VAR_2.carrier_duty_ch[VAR_7].low = VAR_10;
    VAR_2.conf_ch[VAR_7].conf0.carrier_out_lv = VAR_11;
    VAR_2.conf_ch[VAR_7].conf0.carrier_en = VAR_8;
    return VAR_1;
}
