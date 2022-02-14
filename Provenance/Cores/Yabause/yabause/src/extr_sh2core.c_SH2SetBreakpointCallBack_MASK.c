
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void (* BreakpointCallBack ) (void*,VAR_0,void*) ;void* BreakpointUserData; } ;
struct TYPE_5__ {TYPE_1__ bp; } ;
typedef TYPE_2__ SH2_struct ;



void FUNC_0(SH2_struct *VAR_1, void (*VAR_2)(void *, VAR_3, void *), void *VAR_4) {
   VAR_1->bp.BreakpointCallBack = VAR_2;
   VAR_1->bp.BreakpointUserData = VAR_4;
}
