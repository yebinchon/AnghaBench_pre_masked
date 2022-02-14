
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t mcpwm_unit_t ;
typedef size_t mcpwm_timer_t ;
typedef size_t mcpwm_operator_t ;
typedef int esp_err_t ;
struct TYPE_6__ {TYPE_2__* channel; } ;
struct TYPE_5__ {TYPE_1__* generator; } ;
struct TYPE_4__ {int utez; int utea; int utep; int dtez; int dtea; int dtep; int uteb; int dteb; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__** VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

esp_err_t FUNC_3(mcpwm_unit_t VAR_10, mcpwm_timer_t VAR_11, mcpwm_operator_t VAR_12)
{
    FUNC_0(VAR_10 < VAR_7, VAR_8, VAR_0);
    FUNC_0(VAR_11 < VAR_6, VAR_5, VAR_0);
    FUNC_0(VAR_12 < VAR_3, VAR_4, VAR_0);
    FUNC_1(&VAR_9);
    if (VAR_12 == 0) {
        VAR_2[VAR_10]->channel[VAR_11].generator[VAR_12].utez = 1;
        VAR_2[VAR_10]->channel[VAR_11].generator[VAR_12].utea = 1;
        VAR_2[VAR_10]->channel[VAR_11].generator[VAR_12].utep = 1;
        VAR_2[VAR_10]->channel[VAR_11].generator[VAR_12].dtez = 1;
        VAR_2[VAR_10]->channel[VAR_11].generator[VAR_12].dtea = 1;
        VAR_2[VAR_10]->channel[VAR_11].generator[VAR_12].dtep = 1;
    } if (VAR_12 == 1) {
        VAR_2[VAR_10]->channel[VAR_11].generator[VAR_12].utez = 1;
        VAR_2[VAR_10]->channel[VAR_11].generator[VAR_12].uteb = 1;
        VAR_2[VAR_10]->channel[VAR_11].generator[VAR_12].utep = 1;
        VAR_2[VAR_10]->channel[VAR_11].generator[VAR_12].dtez = 1;
        VAR_2[VAR_10]->channel[VAR_11].generator[VAR_12].dteb = 1;
        VAR_2[VAR_10]->channel[VAR_11].generator[VAR_12].dtep = 1;
    }
    FUNC_2(&VAR_9);
    return VAR_1;
}
