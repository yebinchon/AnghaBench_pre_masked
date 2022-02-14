
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nummemorybreakpoints; TYPE_1__* memorybreakpoint; } ;
struct TYPE_7__ {TYPE_2__ bp; } ;
struct TYPE_5__ {int addr; int * oldwritelong; int * oldwriteword; int * oldwritebyte; int * oldreadlong; int * oldreadword; int * oldreadbyte; scalar_t__ flags; } ;
typedef TYPE_3__ SH2_struct ;


 int VAR_0 ;

void FUNC_0(SH2_struct *VAR_1) {
   int VAR_2;
   for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   {
      VAR_1->bp.memorybreakpoint[VAR_2].addr = 0xFFFFFFFF;
      VAR_1->bp.memorybreakpoint[VAR_2].flags = 0;
      VAR_1->bp.memorybreakpoint[VAR_2].oldreadbyte = ((void*)0);
      VAR_1->bp.memorybreakpoint[VAR_2].oldreadword = ((void*)0);
      VAR_1->bp.memorybreakpoint[VAR_2].oldreadlong = ((void*)0);
      VAR_1->bp.memorybreakpoint[VAR_2].oldwritebyte = ((void*)0);
      VAR_1->bp.memorybreakpoint[VAR_2].oldwriteword = ((void*)0);
      VAR_1->bp.memorybreakpoint[VAR_2].oldwritelong = ((void*)0);
   }
   VAR_1->bp.nummemorybreakpoints = 0;
}
