
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int period_ms_t ;
typedef int osi_alarm_t ;
struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_1__ hash_map_entry_t ;


 scalar_t__ FUNC_0 (int *) ;

bool FUNC_1(hash_map_entry_t *VAR_0, void *VAR_1)
{
    osi_alarm_t *VAR_2 = (osi_alarm_t *)VAR_0->data;
    period_ms_t *VAR_3 = (period_ms_t *)VAR_1;
    *VAR_3 += FUNC_0(VAR_2);
    return 1;
}
