
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {scalar_t__ shift; } ;
typedef TYPE_1__ pal_rtc_nanotime_t ;
struct TYPE_5__ {int cpu_clock_rate_hz; int cpu_frequency_hz; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static uint64_t
FUNC_2(uint64_t VAR_3)
{
 pal_rtc_nanotime_t *VAR_4 = &VAR_2;
 uint64_t VAR_5;

 if (VAR_4->shift != 0 )
  FUNC_1("Slow TSC, rtc_nanotime.shift == %d\n", VAR_4->shift);


        VAR_5 = ((VAR_3 + (VAR_0/2))
   / VAR_0)
    * VAR_0;




        if (VAR_5 >= 0x100000000ULL) {
            VAR_1.cpu_clock_rate_hz = 0xFFFFFFFFUL;
        } else {
            VAR_1.cpu_clock_rate_hz = (unsigned long)VAR_5;
        }
        VAR_1.cpu_frequency_hz = VAR_5;

 FUNC_0("[RTCLOCK] frequency %llu (%llu)\n", VAR_5, VAR_3);
 return(VAR_5);
}
