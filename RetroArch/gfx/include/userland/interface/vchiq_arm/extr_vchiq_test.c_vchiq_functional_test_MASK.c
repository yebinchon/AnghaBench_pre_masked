
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_2__ {int iters; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static VCHIQ_STATUS_T
FUNC_2(void)
{
   int VAR_3;
   FUNC_1("Functional test - iters:%d\n", VAR_2.iters);
   for (VAR_3 = 0; VAR_3 < VAR_2.iters; VAR_3++)
   {
      FUNC_1("======== iteration %d ========\n", VAR_3+1);

      if (FUNC_0() != VAR_1)
         return VAR_0;
   }
   return VAR_1;
}
