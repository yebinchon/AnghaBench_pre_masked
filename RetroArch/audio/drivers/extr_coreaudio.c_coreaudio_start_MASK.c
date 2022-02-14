
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_paused; int dev; } ;
typedef TYPE_1__ coreaudio_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_1(void *VAR_1, bool VAR_2)
{
   coreaudio_t *VAR_3 = (coreaudio_t*)VAR_1;
   if (!VAR_3)
      return 0;
   VAR_3->is_paused = (FUNC_0(VAR_3->dev) == VAR_0) ? 0 : 1;
   return VAR_3->is_paused ? 0 : 1;
}
