
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int numcodebreakpoints; TYPE_1__* codebreakpoint; } ;
struct TYPE_3__ {scalar_t__ addr; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

int FUNC_0(u32 VAR_2) {
   int VAR_3;

   if (VAR_1->numcodebreakpoints < VAR_0) {

      for (VAR_3 = 0; VAR_3 < VAR_1->numcodebreakpoints; VAR_3++)
      {
         if (VAR_2 == VAR_1->codebreakpoint[VAR_3].addr)
            return -1;
      }

      VAR_1->codebreakpoint[VAR_1->numcodebreakpoints].addr = VAR_2;
      VAR_1->numcodebreakpoints++;

      return 0;
   }

   return -1;
}
