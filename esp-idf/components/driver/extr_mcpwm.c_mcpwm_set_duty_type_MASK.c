
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t mcpwm_unit_t ;
typedef size_t mcpwm_timer_t ;
typedef size_t mcpwm_operator_t ;
typedef scalar_t__ mcpwm_duty_type_t ;
typedef int esp_err_t ;
struct TYPE_10__ {TYPE_4__* channel; TYPE_2__* timer; } ;
struct TYPE_9__ {TYPE_3__* generator; } ;
struct TYPE_8__ {int utez; int utea; int dtep; int dtea; int uteb; int dteb; scalar_t__ dtez; scalar_t__ utep; } ;
struct TYPE_6__ {scalar_t__ mode; } ;
struct TYPE_7__ {TYPE_1__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__** VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

esp_err_t FUNC_3(mcpwm_unit_t VAR_17, mcpwm_timer_t VAR_18, mcpwm_operator_t VAR_19,
                              mcpwm_duty_type_t VAR_20)
{
    FUNC_0(VAR_17 < VAR_13, VAR_14, VAR_0);
    FUNC_0(VAR_18 < VAR_12, VAR_11, VAR_0);
    FUNC_0(VAR_19 < VAR_9, VAR_10, VAR_0);
    FUNC_0(VAR_20 < VAR_5, VAR_6, VAR_0);
    FUNC_1(&VAR_16);
    if (VAR_19 == VAR_7) {
        if (VAR_2[VAR_17]->timer[VAR_18].mode.mode == VAR_15) {
            if (VAR_20 == VAR_4) {
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].utez = 1;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].utea = 2;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].utep = 0;
            } else {
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].utez = 2;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].utea = 1;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].utep = 0;
            }
        } else if (VAR_2[VAR_17]->timer[VAR_18].mode.mode == VAR_3) {
            if (VAR_20 == VAR_4) {
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].dtep = 2;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].dtea = 1;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].dtez = 0;
            } else {
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].dtep = 1;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].dtea = 2;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].dtez = 0;
            }
        } else {
            if (VAR_20 == VAR_4) {
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].utez = 1;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].utea = 2;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].dtea = 1;
            } else {
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].utez = 2;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].utea = 1;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].dtea = 2;
            }
        }
    }
    if (VAR_19 == VAR_8) {
        if (VAR_2[VAR_17]->timer[VAR_18].mode.mode == VAR_15) {
            if (VAR_20 == VAR_4) {
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].utez = 1;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].uteb = 2;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].utep = 0;
            } else {
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].utez = 2;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].uteb = 1;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].utep = 0;
            }
        } else if (VAR_2[VAR_17]->timer[VAR_18].mode.mode == VAR_3) {
            if (VAR_20 == VAR_4) {
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].dtep = 2;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].dteb = 1;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].dtez = 0;
            } else {
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].dtep = 1;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].dteb = 2;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].dtez = 0;
            }
        } else {
            if (VAR_20 == VAR_4) {
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].utez = 1;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].uteb = 2;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].dteb = 1;
            } else {
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].utez = 2;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].uteb = 1;
                VAR_2[VAR_17]->channel[VAR_18].generator[VAR_19].dteb = 2;
            }
        }
    }
    FUNC_2(&VAR_16);
    return VAR_1;
}
