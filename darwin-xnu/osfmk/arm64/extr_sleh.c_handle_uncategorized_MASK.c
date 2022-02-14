
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef TYPE_3__* thread_kernel_state_t ;
typedef int mach_msg_type_number_t ;
typedef int mach_exception_data_type_t ;
typedef int instr16 ;
typedef int instr ;
typedef int exception_type_t ;
typedef scalar_t__ boolean_t ;
typedef int arm_saved_state_t ;
struct TYPE_5__ {scalar_t__ kstackptr; } ;
struct TYPE_8__ {TYPE_1__ machine; } ;
struct TYPE_6__ {int ss; } ;
struct TYPE_7__ {TYPE_2__ machine; } ;


 int FUNC_0 (scalar_t__,char*,int) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_12 ;
 int FUNC_7 (int ) ;
 TYPE_4__* FUNC_8 () ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int ,int*,int) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (char*,void*,int) ;
 scalar_t__ FUNC_15 (int ,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_16(arm_saved_state_t *VAR_13, boolean_t VAR_14)
{
 exception_type_t VAR_15 = VAR_2;
 mach_exception_data_type_t VAR_16[2] = {VAR_1};
 mach_msg_type_number_t VAR_17 = 2;
 uint32_t VAR_18 = 0;

 if (VAR_14) {
  uint16_t VAR_19 = 0;
  FUNC_0(FUNC_12(VAR_13), (char *)&VAR_19, sizeof(VAR_19));

  VAR_18 = VAR_19;
 } else {
  FUNC_0(FUNC_12(VAR_13), (char *)&VAR_18, sizeof(VAR_18));
 }
 if (FUNC_4(FUNC_11(VAR_13))) {
  if (FUNC_2(VAR_18)) {
   boolean_t VAR_20;
   vm_offset_t VAR_21;
   VAR_15 = VAR_3;

   VAR_20 = FUNC_13(VAR_4);




   VAR_21 = (vm_offset_t) FUNC_8()->machine.kstackptr;
   if (VAR_21) {
    ((thread_kernel_state_t) VAR_21)->machine.ss = *VAR_13;
   }





   FUNC_1(VAR_15, VAR_13);

   (void) FUNC_13(VAR_20);
   return;
  } else {
   FUNC_14("Undefined kernel instruction: pc=%p instr=%x\n", (void*)FUNC_12(VAR_13), VAR_18);
  }
 }




 if (VAR_14) {
  if (FUNC_3(VAR_18)) {
   VAR_15 = VAR_3;
   VAR_16[0] = VAR_0;
   VAR_16[1] = VAR_18;
  } else {
   VAR_16[1] = VAR_18;
  }
 } else {
  if (FUNC_2(VAR_18)) {
   VAR_15 = VAR_3;
   VAR_16[0] = VAR_0;
   VAR_16[1] = VAR_18;
  } else if (FUNC_3((VAR_18 & 0xFFFF))) {
   VAR_15 = VAR_3;
   VAR_16[0] = VAR_0;
   VAR_16[1] = VAR_18 & 0xFFFF;
  } else if (FUNC_3((VAR_18 >> 16))) {
   VAR_15 = VAR_3;
   VAR_16[0] = VAR_0;
   VAR_16[1] = VAR_18 >> 16;
  } else {
   VAR_16[1] = VAR_18;
  }
 }

 FUNC_10(VAR_15, VAR_16, VAR_17);
 FUNC_7(0);
}
