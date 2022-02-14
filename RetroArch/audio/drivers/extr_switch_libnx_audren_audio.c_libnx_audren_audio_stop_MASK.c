
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int drv; } ;
typedef TYPE_1__ libnx_audren_t ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0)
{
   libnx_audren_t *VAR_1 = (libnx_audren_t*)VAR_0;

   if (!VAR_1)
      return 0;

   FUNC_0(&VAR_1->drv, 0);

   return 1;
}
