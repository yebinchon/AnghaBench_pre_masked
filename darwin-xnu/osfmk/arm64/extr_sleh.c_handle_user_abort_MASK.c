
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef void* vm_offset_t ;
typedef TYPE_1__* vm_map_t ;
typedef int uint32_t ;
typedef TYPE_2__* thread_t ;
typedef int mach_msg_type_number_t ;
typedef void* mach_exception_data_type_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ fault_status_t ;
typedef int exception_type_t ;
typedef int boolean_t ;
typedef int arm_saved_state_t ;
struct TYPE_7__ {int options; TYPE_1__* map; int iotier_override; } ;
struct TYPE_6__ {int pmap; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,int ,void*) ;
 scalar_t__ FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 () ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (int ,void**,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 TYPE_1__* VAR_13 ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int *) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_14 (int ,void*,int *) ;
 int FUNC_15 (int *,void*) ;
 void* FUNC_16 (void*) ;
 int FUNC_17 () ;
 int FUNC_18 (void*) ;
 scalar_t__ FUNC_19 () ;
 scalar_t__ FUNC_20 (TYPE_1__*,void*,int,int ,int ,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_21(arm_saved_state_t *VAR_15, uint32_t VAR_16, vm_offset_t VAR_17,
      fault_status_t VAR_18, vm_prot_t VAR_19, vm_offset_t VAR_20)
{
 exception_type_t VAR_21 = VAR_1;
 mach_exception_data_type_t VAR_22[2];
 mach_msg_type_number_t VAR_23 = 2;
 thread_t VAR_24 = FUNC_3();

 (void)VAR_16;
 (void)VAR_15;

 if (FUNC_10())
  FUNC_13("Apparently on interrupt stack when taking user abort!\n", VAR_15);

 VAR_24->iotier_override = VAR_8;

 if (FUNC_9(VAR_18)) {
  kern_return_t VAR_25 = VAR_5;
  vm_map_t VAR_26 = VAR_24->map;
  vm_offset_t VAR_27 = VAR_17;

  FUNC_2(VAR_26 != VAR_13);

  if (!(VAR_19 & VAR_12) && FUNC_19())
    VAR_27 = FUNC_16(VAR_17);
  (void)VAR_20;
  if ((VAR_25 != VAR_6) && !FUNC_8(VAR_18)) {
   VAR_25 = FUNC_1(VAR_26->pmap, FUNC_18(VAR_27), VAR_19, VAR_10);
  }
  if (VAR_25 != VAR_6) {

   {

    VAR_25 = FUNC_20(VAR_26, VAR_27, VAR_19,
                                          VAR_2, VAR_11, VAR_7,
                                        ((void*)0), 0);
   }
  }
  if (VAR_25 == VAR_6 || VAR_25 == VAR_4) {
   FUNC_17();

  }

  VAR_22[0] = VAR_25;
 } else if (FUNC_6(VAR_18)) {
  VAR_22[0] = VAR_0;
 } else if (FUNC_7(VAR_18)) {







  FUNC_12("User parity error.");

 } else {
  VAR_22[0] = VAR_5;
 }

 VAR_22[1] = VAR_17;
 FUNC_5(VAR_21, VAR_22, VAR_23);
 FUNC_2(0);
}
