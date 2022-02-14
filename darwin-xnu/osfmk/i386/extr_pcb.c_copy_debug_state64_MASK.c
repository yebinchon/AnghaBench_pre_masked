
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dr7; int dr6; int dr3; int dr2; int dr1; int dr0; int dr5; int dr4; } ;
typedef TYPE_1__ x86_debug_state64_t ;
typedef scalar_t__ boolean_t ;



void
FUNC_0(
  x86_debug_state64_t *VAR_0,
  x86_debug_state64_t *VAR_1,
  boolean_t VAR_2)
{
 if (VAR_2) {
  VAR_1->dr4 = VAR_0->dr4;
  VAR_1->dr5 = VAR_0->dr5;
 }

 VAR_1->dr0 = VAR_0->dr0;
 VAR_1->dr1 = VAR_0->dr1;
 VAR_1->dr2 = VAR_0->dr2;
 VAR_1->dr3 = VAR_0->dr3;
 VAR_1->dr6 = VAR_0->dr6;
 VAR_1->dr7 = VAR_0->dr7;
}
