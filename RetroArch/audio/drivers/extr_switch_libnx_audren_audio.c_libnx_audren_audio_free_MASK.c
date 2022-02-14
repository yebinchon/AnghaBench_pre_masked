
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* mempool; int drv; } ;
typedef TYPE_1__ libnx_audren_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
   libnx_audren_t *VAR_1 = (libnx_audren_t*)VAR_0;

   if (!VAR_1)
      return;

   FUNC_2(&VAR_1->drv, 0);
   FUNC_1(&VAR_1->drv);
   FUNC_0();

   if (VAR_1->mempool)
   {
      FUNC_3(VAR_1->mempool);
   }

   FUNC_3(VAR_1);
}
