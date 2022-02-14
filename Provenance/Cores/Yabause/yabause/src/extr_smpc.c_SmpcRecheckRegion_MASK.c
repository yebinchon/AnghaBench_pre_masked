
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ regionsetting; int regionid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_2(void) {
   if (VAR_1 == ((void*)0))
      return;

   if (VAR_1->regionsetting == VAR_0)
   {

      VAR_1->regionid = FUNC_1();



      if (VAR_1->regionid == 0)
         VAR_1->regionid = 1;
   }
   else
      FUNC_0(0);
}
