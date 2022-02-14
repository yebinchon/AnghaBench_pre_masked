
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_2__ {int TimeStamp_tick; void* Ticks_per_sec; void* Ticks_scale; void* TimeStamp_frac; void* TimeStamp_sec; } ;
typedef TYPE_1__ new_commpage_timeofday_data_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_0(
 uint64_t VAR_3,
 uint64_t VAR_4,
 uint64_t VAR_5,
 uint64_t VAR_6,
 uint64_t VAR_7)
{
 new_commpage_timeofday_data_t *VAR_8;

 if (VAR_2 == 0)
  return;

 VAR_8 = (new_commpage_timeofday_data_t *)(VAR_0+VAR_1);

 VAR_8->TimeStamp_tick = 0x0ULL;




 VAR_8->TimeStamp_sec = VAR_4;
 VAR_8->TimeStamp_frac = VAR_5;
 VAR_8->Ticks_scale = VAR_6;
 VAR_8->Ticks_per_sec = VAR_7;




 VAR_8->TimeStamp_tick = VAR_3;
}
