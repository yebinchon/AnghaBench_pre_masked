
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int paused; } ;
typedef TYPE_1__ libnx_audren_thread_t ;



__attribute__((used)) static bool FUNC_0(void *VAR_0, bool VAR_1)
{
   (void)VAR_1;
   libnx_audren_thread_t *VAR_2 = (libnx_audren_thread_t*)VAR_0;

   if (!VAR_2)
      return 0;

   VAR_2->paused = 0;

   return 1;
}
