
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {int numcodebreakpoints; TYPE_1__* codebreakpoint; } ;
struct TYPE_8__ {TYPE_2__ bp; } ;
struct TYPE_6__ {scalar_t__ addr; } ;
typedef TYPE_3__ SH2_struct ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_3__*) ;

int FUNC_2(SH2_struct *VAR_0, u32 VAR_1) {
   int VAR_2, VAR_3;

   FUNC_0("Deleting breakpoint %08X...\n", VAR_1);

   if (VAR_0->bp.numcodebreakpoints > 0) {
      for (VAR_2 = 0; VAR_2 < VAR_0->bp.numcodebreakpoints; VAR_2++) {
         if (VAR_0->bp.codebreakpoint[VAR_2].addr == VAR_1)
         {
            VAR_0->bp.codebreakpoint[VAR_2].addr = 0xFFFFFFFF;
            FUNC_1(VAR_0);
            VAR_0->bp.numcodebreakpoints--;

            FUNC_0("Remaining breakpoints: \n");

            for (VAR_3 = 0; VAR_3 < VAR_0->bp.numcodebreakpoints; VAR_3++)
            {
               FUNC_0("%08X", VAR_0->bp.codebreakpoint[VAR_3].addr);
            }

            return 0;
         }
      }
   }

   FUNC_0("Failed deleting breakpoint\n");

   return -1;
}
