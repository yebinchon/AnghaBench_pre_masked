
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int numcodebreakpoints; TYPE_1__* codebreakpoint; } ;
struct TYPE_3__ {int addr; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 () ;

int FUNC_1(u32 VAR_1) {
   int VAR_2;

   if (VAR_0->numcodebreakpoints > 0) {
      for (VAR_2 = 0; VAR_2 < VAR_0->numcodebreakpoints; VAR_2++) {
         if (VAR_0->codebreakpoint[VAR_2].addr == VAR_1)
         {
            VAR_0->codebreakpoint[VAR_2].addr = 0xFFFFFFFF;
            FUNC_0();
            VAR_0->numcodebreakpoints--;
            return 0;
         }
      }
   }

   return -1;
}
