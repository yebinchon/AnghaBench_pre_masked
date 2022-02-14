
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t timer_idx_t ;
typedef size_t timer_group_t ;
typedef int esp_err_t ;
struct TYPE_6__ {TYPE_2__* hw_timer; } ;
struct TYPE_4__ {int enable; } ;
struct TYPE_5__ {TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__** VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;

esp_err_t FUNC_3(timer_group_t VAR_8, timer_idx_t VAR_9)
{
    FUNC_0(VAR_8 < VAR_3, VAR_4, VAR_0);
    FUNC_0(VAR_9 < VAR_5, VAR_6, VAR_0);
    FUNC_1(&VAR_7[VAR_8]);
    VAR_2[VAR_8]->hw_timer[VAR_9].config.enable = 1;
    FUNC_2(&VAR_7[VAR_8]);
    return VAR_1;
}
