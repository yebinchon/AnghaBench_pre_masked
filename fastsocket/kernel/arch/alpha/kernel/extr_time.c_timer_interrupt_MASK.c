
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int irqreturn_t ;
typedef void* __u32 ;
struct TYPE_4__ {void* last_time; unsigned long scaled_ticks_per_cycle; unsigned long partial_tick; scalar_t__ last_rtc_update; } ;
struct TYPE_3__ {scalar_t__ tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (long) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 void* FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 TYPE_2__ VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;

irqreturn_t FUNC_10(int VAR_7, void *VAR_8)
{
 unsigned long VAR_9;
 __u32 VAR_10;
 long VAR_11;



 FUNC_3(VAR_0);


 FUNC_8(&VAR_6);






 VAR_10 = FUNC_4();
 VAR_9 = VAR_10 - VAR_4.last_time;
 VAR_4.last_time = VAR_10;
 VAR_9 = VAR_9 * VAR_4.scaled_ticks_per_cycle + VAR_4.partial_tick;
 VAR_4.partial_tick = VAR_9 & ((1UL << VAR_1) - 1);
 VAR_11 = VAR_9 >> VAR_1;

 if (VAR_11)
  FUNC_0(VAR_11);






 if (FUNC_2()
     && VAR_5.tv_sec > VAR_4.last_rtc_update + 660
     && VAR_5.tv_nsec >= 500000 - ((unsigned) VAR_3) / 2
     && VAR_5.tv_nsec <= 500000 + ((unsigned) VAR_3) / 2) {
  int VAR_12 = FUNC_5(VAR_5.tv_sec);
  VAR_4.last_rtc_update = VAR_5.tv_sec - (VAR_12 ? 600 : 0);
 }

 FUNC_9(&VAR_6);


 while (VAR_11--)
  FUNC_6(FUNC_7(FUNC_1()));


 return VAR_2;
}
