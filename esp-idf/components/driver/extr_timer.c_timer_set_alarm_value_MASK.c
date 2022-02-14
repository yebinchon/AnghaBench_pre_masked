
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* uint32_t ;
typedef size_t timer_idx_t ;
typedef size_t timer_group_t ;
typedef int esp_err_t ;
struct TYPE_4__ {TYPE_1__* hw_timer; } ;
struct TYPE_3__ {void* alarm_low; void* alarm_high; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;

esp_err_t FUNC_3(timer_group_t VAR_8, timer_idx_t VAR_9, uint64_t VAR_10)
{
    FUNC_0(VAR_8 < VAR_3, VAR_4, VAR_0);
    FUNC_0(VAR_9 < VAR_5, VAR_6, VAR_0);
    FUNC_1(&VAR_7[VAR_8]);
    VAR_2[VAR_8]->hw_timer[VAR_9].alarm_high = (uint32_t) (VAR_10 >> 32);
    VAR_2[VAR_8]->hw_timer[VAR_9].alarm_low = (uint32_t) VAR_10;
    FUNC_2(&VAR_7[VAR_8]);
    return VAR_1;
}
