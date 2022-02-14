
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_5__* thread_t ;
typedef int mach_msg_type_number_t ;
typedef int mach_exception_data_type_t ;
typedef int exception_type_t ;
typedef int arm_saved_state_t ;
struct TYPE_10__ {int * upcb; TYPE_3__* DebugData; } ;
struct TYPE_11__ {TYPE_4__ machine; } ;
struct TYPE_7__ {int mdscr_el1; } ;
struct TYPE_8__ {TYPE_1__ ds64; } ;
struct TYPE_9__ {TYPE_2__ uds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 () ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static void
FUNC_7(arm_saved_state_t *VAR_4)
{
 thread_t VAR_5 = FUNC_2();
 exception_type_t VAR_6;
 mach_exception_data_type_t VAR_7[2];
 mach_msg_type_number_t VAR_8 = 2;

 if (!FUNC_0(FUNC_4(VAR_4))) {
  FUNC_5("SW_STEP_DEBUG exception from kernel.", VAR_4);
 }


 if (VAR_5->machine.DebugData != ((void*)0)) {
  VAR_5->machine.DebugData->uds.ds64.mdscr_el1 &= ~0x1;
 } else {
  FUNC_5("SW_STEP_DEBUG exception thread DebugData is NULL.", VAR_4);
 }

 FUNC_6((VAR_5->machine.upcb),
     FUNC_4((VAR_5->machine.upcb)) & ~(VAR_3 | VAR_1 | VAR_0));


 VAR_6 = VAR_2;
 VAR_7[0] = 1;
 VAR_7[1] = 0;

 FUNC_3(VAR_6, VAR_7, VAR_8);
 FUNC_1(0);
}
