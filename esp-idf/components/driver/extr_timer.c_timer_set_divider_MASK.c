
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef size_t timer_idx_t ;
typedef size_t timer_group_t ;
typedef int esp_err_t ;
struct TYPE_6__ {TYPE_2__* hw_timer; } ;
struct TYPE_4__ {int enable; scalar_t__ divider; } ;
struct TYPE_5__ {TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__** VAR_3 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;

esp_err_t FUNC_3(timer_group_t VAR_9, timer_idx_t VAR_10, uint32_t VAR_11)
{
    FUNC_0(VAR_9 < VAR_4, VAR_5, VAR_1);
    FUNC_0(VAR_10 < VAR_6, VAR_7, VAR_1);
    FUNC_0(VAR_11 > 1 && VAR_11 < 65537, VAR_0, VAR_1);
    FUNC_1(&VAR_8[VAR_9]);
    int VAR_12 = VAR_3[VAR_9]->hw_timer[VAR_10].config.enable;
    VAR_3[VAR_9]->hw_timer[VAR_10].config.enable = 0;
    VAR_3[VAR_9]->hw_timer[VAR_10].config.divider = (uint16_t) VAR_11;
    VAR_3[VAR_9]->hw_timer[VAR_10].config.enable = VAR_12;
    FUNC_2(&VAR_8[VAR_9]);
    return VAR_2;
}
