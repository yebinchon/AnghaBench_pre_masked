
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int time_t ;
struct affs_date {void* ticks; void* mins; void* days; } ;
struct TYPE_2__ {int tz_minuteswest; } ;


 void* FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;

void
FUNC_1(time_t VAR_1, struct affs_date *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;

 VAR_1 -= VAR_0.tz_minuteswest * 60 + ((8 * 365 + 2) * 24 * 60 * 60);
 if (VAR_1 < 0)
  VAR_1 = 0;
 VAR_3 = VAR_1 / 86400;
 VAR_1 -= VAR_3 * 86400;
 VAR_4 = VAR_1 / 60;
 VAR_1 -= VAR_4 * 60;

 VAR_2->days = FUNC_0(VAR_3);
 VAR_2->mins = FUNC_0(VAR_4);
 VAR_2->ticks = FUNC_0(VAR_1 * 50);
}
