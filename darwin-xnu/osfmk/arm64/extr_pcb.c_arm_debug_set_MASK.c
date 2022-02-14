
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flavor; } ;
struct TYPE_7__ {TYPE_1__ dsh; } ;
typedef TYPE_2__ arm_debug_state_t ;




 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(arm_debug_state_t *VAR_0)
{
 if (VAR_0) {
  switch (VAR_0->dsh.flavor) {
  case 129:
   FUNC_0(VAR_0);
   break;
  case 128:
   FUNC_1(VAR_0);
   break;
  default:
   FUNC_3("arm_debug_set");
   break;
  }
 } else {
  if (FUNC_4(FUNC_2()))
   FUNC_1(VAR_0);
  else
   FUNC_0(VAR_0);
 }
}
