
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ carttype; TYPE_1__* cdi; } ;
struct TYPE_5__ {int (* DeInit ) () ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 () ;

void FUNC_4(void) {
   if(VAR_2 != ((void*)0)) {
      if (VAR_2->cdi != ((void*)0)) {
         VAR_2->cdi->DeInit();
      }

      if(VAR_2->carttype == VAR_1)
         FUNC_1();
      else if (VAR_2->carttype == VAR_0)
         FUNC_0();

      FUNC_2(VAR_2);
   }
   VAR_2 = ((void*)0);

   if (VAR_3)
      FUNC_2(VAR_3);
   VAR_3 = ((void*)0);
}
