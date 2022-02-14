
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_paused; int rd; } ;
typedef TYPE_1__ rsd_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, bool VAR_1)
{
   rsd_t *VAR_2 = (rsd_t*)VAR_0;
   if (FUNC_0(VAR_2->rd) < 0)
      return 0;
   VAR_2->is_paused = 0;

   return 1;
}
