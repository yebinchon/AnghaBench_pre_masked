
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_paused; int dev; } ;
typedef TYPE_1__ coreaudio_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_1(void *VAR_1)
{
   coreaudio_t *VAR_2 = (coreaudio_t*)VAR_1;
   if (!VAR_2)
      return 0;
   VAR_2->is_paused = (FUNC_0(VAR_2->dev) == VAR_0) ? 1 : 0;
   return VAR_2->is_paused ? 1 : 0;
}
