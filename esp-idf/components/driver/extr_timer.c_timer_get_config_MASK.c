
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t timer_idx_t ;
typedef size_t timer_group_t ;
struct TYPE_8__ {int divider; int intr_type; int counter_en; int counter_dir; int auto_reload; int alarm_en; } ;
typedef TYPE_3__ timer_config_t ;
typedef int esp_err_t ;
struct TYPE_9__ {TYPE_2__* hw_timer; } ;
struct TYPE_6__ {int divider; scalar_t__ level_int_en; int enable; int increase; int autoreload; int alarm_en; } ;
struct TYPE_7__ {TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__** VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;

esp_err_t FUNC_3(timer_group_t VAR_10, timer_idx_t VAR_11, timer_config_t *VAR_12)
{
    FUNC_0(VAR_10 < VAR_3, VAR_4, VAR_0);
    FUNC_0(VAR_11 < VAR_6, VAR_7, VAR_0);
    FUNC_0(VAR_12 != ((void*)0), VAR_8, VAR_0);
    FUNC_1(&VAR_9[VAR_10]);
    VAR_12->alarm_en = VAR_2[VAR_10]->hw_timer[VAR_11].config.alarm_en;
    VAR_12->auto_reload = VAR_2[VAR_10]->hw_timer[VAR_11].config.autoreload;
    VAR_12->counter_dir = VAR_2[VAR_10]->hw_timer[VAR_11].config.increase;
    VAR_12->divider = (VAR_2[VAR_10]->hw_timer[VAR_11].config.divider == 0 ?
        65536 : VAR_2[VAR_10]->hw_timer[VAR_11].config.divider);
    VAR_12->counter_en = VAR_2[VAR_10]->hw_timer[VAR_11].config.enable;
    if(VAR_2[VAR_10]->hw_timer[VAR_11].config.level_int_en) {
        VAR_12->intr_type = VAR_5;
    }
    FUNC_2(&VAR_9[VAR_10]);
    return VAR_1;
}
