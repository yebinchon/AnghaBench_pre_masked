
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chain; } ;
typedef TYPE_1__ hlsl_renderchain_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
   hlsl_renderchain_t *VAR_1 = (hlsl_renderchain_t*)VAR_0;

   if (!VAR_1)
      return;

   FUNC_0(VAR_1);
   FUNC_1(&VAR_1->chain);
   FUNC_2(VAR_1);
}
