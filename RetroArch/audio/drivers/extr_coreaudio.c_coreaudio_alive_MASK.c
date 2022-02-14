
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_paused; } ;
typedef TYPE_1__ coreaudio_t ;



__attribute__((used)) static bool FUNC_0(void *VAR_0)
{
   coreaudio_t *VAR_1 = (coreaudio_t*)VAR_0;
   if (!VAR_1)
      return 0;
   return !VAR_1->is_paused;
}
