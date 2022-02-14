
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {size_t numcodebreakpoints; TYPE_1__* codebreakpoint; } ;
struct TYPE_7__ {TYPE_2__ bp; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
typedef TYPE_3__ SH2_struct ;


 size_t VAR_0 ;

int FUNC_0(SH2_struct *VAR_1, u32 VAR_2) {
   int VAR_3;

   if (VAR_1->bp.numcodebreakpoints < VAR_0) {

      for (VAR_3 = 0; VAR_3 < VAR_1->bp.numcodebreakpoints; VAR_3++)
      {
         if (VAR_2 == VAR_1->bp.codebreakpoint[VAR_3].addr)
            return -1;
      }

      VAR_1->bp.codebreakpoint[VAR_1->bp.numcodebreakpoints].addr = VAR_2;
      VAR_1->bp.numcodebreakpoints++;

      return 0;
   }

   return -1;
}
