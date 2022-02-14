
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t timer_idx_t ;
typedef size_t timer_group_t ;
typedef scalar_t__ timer_count_dir_t ;
typedef int esp_err_t ;
struct TYPE_6__ {TYPE_2__* hw_timer; } ;
struct TYPE_4__ {scalar_t__ increase; } ;
struct TYPE_5__ {TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__** VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;

esp_err_t FUNC_3(timer_group_t VAR_10, timer_idx_t VAR_11, timer_count_dir_t VAR_12)
{
    FUNC_0(VAR_10 < VAR_5, VAR_6, VAR_0);
    FUNC_0(VAR_11 < VAR_7, VAR_8, VAR_0);
    FUNC_0(VAR_12 < VAR_4, VAR_3, VAR_0);
    FUNC_1(&VAR_9[VAR_10]);
    VAR_2[VAR_10]->hw_timer[VAR_11].config.increase = VAR_12;
    FUNC_2(&VAR_9[VAR_10]);
    return VAR_1;
}
