
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int seconds; int minutes; int hours; } ;
struct TYPE_5__ {TYPE_1__ runtime; } ;
typedef TYPE_2__ runtime_log_t ;
typedef scalar_t__ retro_time_t ;


 int FUNC_0 (int ,int ,int ,scalar_t__*) ;
 int FUNC_1 (scalar_t__,int *,int *,int *) ;

void FUNC_2(runtime_log_t *VAR_0, retro_time_t VAR_1)
{
   retro_time_t VAR_2;

   if (!VAR_0)
      return;

   FUNC_0(
         VAR_0->runtime.hours, VAR_0->runtime.minutes, VAR_0->runtime.seconds,
         &VAR_2);

   FUNC_1(VAR_2 + VAR_1,
         &VAR_0->runtime.hours, &VAR_0->runtime.minutes, &VAR_0->runtime.seconds);
}
