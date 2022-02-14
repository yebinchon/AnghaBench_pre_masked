
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t timer_idx_t ;
typedef size_t timer_group_t ;
typedef int esp_err_t ;
struct TYPE_4__ {TYPE_1__* hw_timer; } ;
struct TYPE_3__ {int alarm_low; scalar_t__ alarm_high; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_8 ;

esp_err_t FUNC_3(timer_group_t VAR_9, timer_idx_t VAR_10, uint64_t* VAR_11)
{
    FUNC_0(VAR_9 < VAR_3, VAR_4, VAR_0);
    FUNC_0(VAR_10 < VAR_5, VAR_6, VAR_0);
    FUNC_0(VAR_11 != ((void*)0), VAR_7, VAR_0);
    FUNC_1(&VAR_8[VAR_9]);
    *VAR_11 = ((uint64_t) VAR_2[VAR_9]->hw_timer[VAR_10].alarm_high << 32)
                | (VAR_2[VAR_9]->hw_timer[VAR_10].alarm_low);
    FUNC_2(&VAR_8[VAR_9]);
    return VAR_1;
}
