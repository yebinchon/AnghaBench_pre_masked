
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_1__* vm_map_t ;
typedef int uint32_t ;
typedef TYPE_2__* thread_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ fault_status_t ;
typedef int boolean_t ;
typedef int arm_saved_state_t ;
struct TYPE_8__ {int options; TYPE_1__* map; } ;
struct TYPE_7__ {int pmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_10 ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 TYPE_2__* FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int *,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 TYPE_1__* VAR_12 ;
 int FUNC_13 (char*,scalar_t__) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (int ) ;
 int VAR_13 ;
 char VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_16 (char*,int *) ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_17 (int ,scalar_t__,int *) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *,scalar_t__) ;
 scalar_t__ VAR_18 ;
 int FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (TYPE_1__*,scalar_t__,int ,int ,int ,int,int *,int ) ;

__attribute__((used)) static void
FUNC_22(arm_saved_state_t *VAR_19, uint32_t VAR_20, vm_offset_t VAR_21,
     fault_status_t VAR_22, vm_prot_t VAR_23, vm_offset_t VAR_24)
{
 thread_t VAR_25 = FUNC_3();
 (void)VAR_20;
 if (FUNC_14())
  FUNC_16("Unexpected abort while on interrupt stack.", VAR_19);


 if (FUNC_12(VAR_22)) {
  kern_return_t VAR_26 = VAR_2;
  vm_map_t VAR_27;
  int VAR_28;
  if (VAR_21 >= VAR_11 && VAR_21 < VAR_18) {
   FUNC_16("Unexpected fault in kernel static region\n",VAR_19);
  }

  if (FUNC_0(VAR_21) || VAR_25 == VAR_7) {
   VAR_27 = VAR_12;
   VAR_28 = VAR_8;
  } else {
   VAR_27 = VAR_25->map;
   VAR_28 = VAR_6;
  }
  if (!FUNC_11(VAR_22)) {
   VAR_26 = FUNC_2(VAR_27->pmap, FUNC_20(VAR_21), VAR_23, VAR_0);
   if (VAR_26 == VAR_4) return;
  }

  if (VAR_26 != VAR_3)
  {



   VAR_26 = FUNC_21(VAR_27, VAR_21, VAR_23,
                                         VAR_0, VAR_10, VAR_28,
                                       ((void*)0), 0);
  }

  if (VAR_26 == VAR_4) return;




  if (VAR_24) {
   FUNC_19(VAR_19, VAR_24);
   return;
  }
 } else if (FUNC_7(VAR_22)) {
  FUNC_16("Unaligned kernel data abort.", VAR_19);
 } else if (FUNC_9(VAR_22)) {






  FUNC_16("Kernel parity error.", VAR_19);

 } else {
  FUNC_13("Unclassified kernel abort (fault_code=0x%x)\n", VAR_22);
 }

 FUNC_16("Kernel data abort.", VAR_19);
}
