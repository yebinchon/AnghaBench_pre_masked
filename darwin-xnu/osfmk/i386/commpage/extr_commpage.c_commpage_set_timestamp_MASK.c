
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_4__ {int TimeStamp_tick; void* Ticks_per_sec; void* Ticks_scale; void* TimeStamp_frac; void* TimeStamp_sec; } ;
typedef TYPE_1__ new_commpage_timeofday_data_t ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;

void
FUNC_0(
  uint64_t VAR_2,
  uint64_t VAR_3,
  uint64_t VAR_4,
  uint64_t VAR_5,
  uint64_t VAR_6)
{
 new_commpage_timeofday_data_t *VAR_7 = VAR_0;
 new_commpage_timeofday_data_t *VAR_8 = VAR_1;

 VAR_7->TimeStamp_tick = 0x0ULL;
 VAR_8->TimeStamp_tick = 0x0ULL;

 VAR_7->TimeStamp_sec = VAR_3;
 VAR_8->TimeStamp_sec = VAR_3;

 VAR_7->TimeStamp_frac = VAR_4;
 VAR_8->TimeStamp_frac = VAR_4;

 VAR_7->Ticks_scale = VAR_5;
 VAR_8->Ticks_scale = VAR_5;

 VAR_7->Ticks_per_sec = VAR_6;
 VAR_8->Ticks_per_sec = VAR_6;

 VAR_7->TimeStamp_tick = VAR_2;
 VAR_8->TimeStamp_tick = VAR_2;
}
