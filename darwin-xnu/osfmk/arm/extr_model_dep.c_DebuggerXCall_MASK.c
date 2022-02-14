
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_10__ {int cpsr; } ;
typedef TYPE_2__ arm_saved_state_t ;
struct TYPE_9__ {scalar_t__ kstackptr; } ;
struct TYPE_11__ {TYPE_1__ machine; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_8__* FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int ) ;

void
FUNC_10(
 void *VAR_4)
{
 boolean_t VAR_5 = VAR_1;
 vm_offset_t VAR_6 = 0;
 arm_saved_state_t *VAR_7 = (arm_saved_state_t *) VAR_4;

 if (VAR_7 != ((void*)0)) {



  VAR_5 = FUNC_1(VAR_7->cpsr);

 }

 VAR_6 = FUNC_3()->machine.kstackptr;
 arm_saved_state_t *VAR_8 = (arm_saved_state_t *)VAR_6;

 if (VAR_5) {

  *VAR_8 = *VAR_7;

 } else if (VAR_7) {

  FUNC_6(VAR_8, 0);
  FUNC_8(VAR_8, 0);
  FUNC_7(VAR_8, 0);
  FUNC_9(VAR_8, 0);
 }

 (void)FUNC_5(&VAR_2, 1);
 FUNC_2(VAR_0);
 while (VAR_3);


}
