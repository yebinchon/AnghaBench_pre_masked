
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int hours; unsigned int minutes; unsigned int seconds; } ;
struct TYPE_5__ {TYPE_1__ runtime; } ;
typedef TYPE_2__ runtime_log_t ;
typedef scalar_t__ retro_time_t ;


 int FUNC_0 (unsigned int,unsigned int,unsigned int,scalar_t__*) ;
 int FUNC_1 (scalar_t__,unsigned int*,unsigned int*,unsigned int*) ;

void FUNC_2(runtime_log_t *VAR_0, unsigned VAR_1, unsigned VAR_2, unsigned VAR_3)
{
   retro_time_t VAR_4;
   retro_time_t VAR_5;

   if (!VAR_0)
      return;

   FUNC_0(
         VAR_0->runtime.hours, VAR_0->runtime.minutes, VAR_0->runtime.seconds,
         &VAR_4);

   FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_5);

   FUNC_1(VAR_4 + VAR_5,
         &VAR_0->runtime.hours, &VAR_0->runtime.minutes, &VAR_0->runtime.seconds);
}
