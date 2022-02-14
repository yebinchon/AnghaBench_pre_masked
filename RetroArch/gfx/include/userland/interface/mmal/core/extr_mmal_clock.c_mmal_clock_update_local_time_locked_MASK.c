
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int64_t ;
struct TYPE_3__ {scalar_t__ rtc_at_update; int scale; int media_time_frac; int media_time; int wall_time; } ;
typedef TYPE_1__ MMAL_CLOCK_PRIVATE_T ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void FUNC_1(MMAL_CLOCK_PRIVATE_T *VAR_0)
{
   uint32_t VAR_1 = FUNC_0();
   uint32_t VAR_2 = (VAR_1 > VAR_0->rtc_at_update) ? (VAR_1 - VAR_0->rtc_at_update) : 0;

   VAR_0->wall_time += VAR_2;




   int64_t VAR_3 = ((int64_t)VAR_2) * (int64_t)(VAR_0->scale << 8) + VAR_0->media_time_frac;

   VAR_0->media_time += VAR_3 >> 24;
   VAR_0->media_time_frac = VAR_3 & ((1<<24)-1);

   VAR_0->rtc_at_update = VAR_1;
}
