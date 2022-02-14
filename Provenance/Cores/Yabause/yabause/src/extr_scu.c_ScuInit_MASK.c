
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int scudspregs_struct ;
struct TYPE_5__ {scalar_t__ inbreakpoint; int * BreakpointCallBack; scalar_t__ numcodebreakpoints; TYPE_1__* codebreakpoint; } ;
typedef TYPE_2__ scubp_struct ;
struct TYPE_4__ {int addr; } ;
typedef int Scu ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;

int FUNC_1(void) {
   int VAR_4;

   if ((VAR_3 = (Scu *) FUNC_0(1, sizeof(Scu))) == ((void*)0))
      return -1;

   if ((VAR_2 = (scudspregs_struct *) FUNC_0(1, sizeof(scudspregs_struct))) == ((void*)0))
      return -1;

   if ((VAR_1 = (scubp_struct *) FUNC_0(1, sizeof(scubp_struct))) == ((void*)0))
      return -1;

   for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
      VAR_1->codebreakpoint[VAR_4].addr = 0xFFFFFFFF;
   VAR_1->numcodebreakpoints = 0;
   VAR_1->BreakpointCallBack=((void*)0);
   VAR_1->inbreakpoint=0;

   return 0;
}
