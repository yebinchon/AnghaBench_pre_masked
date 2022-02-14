
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct clocksource {int shift; int mask; int cycle_last; int vread; } ;
struct TYPE_3__ {int shift; int mult; int mask; int cycle_last; int vread; } ;
struct TYPE_4__ {int lock; int wall_time_coarse; struct timespec wall_to_monotonic; int wall_time_nsec; int wall_time_sec; TYPE_1__ clock; } ;


 int FUNC_0 () ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct timespec *VAR_1, struct timespec *VAR_2,
   struct clocksource *VAR_3, u32 VAR_4)
{
 unsigned long VAR_5;

 FUNC_1(&VAR_0.lock, VAR_5);

 VAR_0.clock.vread = VAR_3->vread;
 VAR_0.clock.cycle_last = VAR_3->cycle_last;
 VAR_0.clock.mask = VAR_3->mask;
 VAR_0.clock.mult = VAR_4;
 VAR_0.clock.shift = VAR_3->shift;
 VAR_0.wall_time_sec = VAR_1->tv_sec;
 VAR_0.wall_time_nsec = VAR_1->tv_nsec;
 VAR_0.wall_to_monotonic = *VAR_2;
 VAR_0.wall_time_coarse = FUNC_0();
 FUNC_2(&VAR_0.lock, VAR_5);
}
