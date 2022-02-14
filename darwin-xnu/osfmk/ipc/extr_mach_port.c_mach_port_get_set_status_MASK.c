
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int vm_map_size_t ;
typedef scalar_t__ vm_map_copy_t ;
typedef int vm_map_address_t ;
typedef int mach_port_name_t ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_space_t ;
typedef TYPE_1__* ipc_pset_t ;
typedef scalar_t__ ipc_object_t ;
typedef int ipc_entry_num_t ;
struct TYPE_6__ {int ips_messages; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int VAR_13 ;
 int FUNC_5 (scalar_t__,int *,int,int *,int*) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ,scalar_t__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int,int) ;
 scalar_t__ FUNC_11 (int ,int*,int,int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int ,scalar_t__*) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int,int ) ;
 scalar_t__ FUNC_15 (int ,int ,int,int ) ;
 scalar_t__ FUNC_16 (int ,int,int,int,int ,int ) ;

kern_return_t
FUNC_17(
 ipc_space_t VAR_14,
 mach_port_name_t VAR_15,
 mach_port_name_t **VAR_16,
 mach_msg_type_number_t *VAR_17)
{
 ipc_entry_num_t VAR_18;
 ipc_entry_num_t VAR_19;
 kern_return_t VAR_20;

 vm_size_t VAR_21;
 vm_offset_t VAR_22;
 vm_map_copy_t VAR_23;

 if (VAR_14 == VAR_1)
  return VAR_3;

 if (!FUNC_0(VAR_15))
  return VAR_2;

 VAR_21 = FUNC_2(VAR_13);

 for (;;) {
  mach_port_name_t *VAR_24;
  ipc_object_t VAR_25;
  ipc_pset_t VAR_26;

  VAR_20 = FUNC_11(VAR_13, &VAR_22, VAR_21, VAR_8, VAR_9);
  if (VAR_20 != VAR_5)
   return VAR_4;



  VAR_20 = FUNC_16(VAR_13, VAR_22, VAR_22 + VAR_21,
         VAR_11|VAR_12, VAR_9, VAR_0);
  FUNC_4(VAR_20 == VAR_5);

  VAR_20 = FUNC_6(VAR_14, VAR_15, VAR_6, &VAR_25);
  if (VAR_20 != VAR_5) {
   FUNC_10(VAR_13, VAR_22, VAR_21);
   return VAR_20;
  }


  FUNC_3(VAR_26 = (ipc_pset_t) VAR_25);
  FUNC_7(VAR_26);
  FUNC_9(VAR_26);

  VAR_24 = (mach_port_name_t *) VAR_22;
  VAR_19 = (ipc_entry_num_t)(VAR_21 / sizeof(mach_port_name_t));

  FUNC_5(VAR_14, &VAR_26->ips_messages, VAR_19, VAR_24, &VAR_18);


  FUNC_8(VAR_26);

  if (VAR_18 <= VAR_19)
   break;


  FUNC_10(VAR_13, VAR_22, VAR_21);
  VAR_21 = FUNC_13(
   (VAR_18 * sizeof(mach_port_name_t)),
    FUNC_1(VAR_13)) +
   FUNC_2(VAR_13);
 }

 if (VAR_18 == 0) {
  VAR_23 = VAR_10;

  FUNC_10(VAR_13, VAR_22, VAR_21);
 } else {
  vm_size_t VAR_27;
  vm_size_t VAR_28;

  VAR_27 = VAR_18 * sizeof(mach_port_name_t);
  VAR_28 = FUNC_13(
   VAR_27,
   FUNC_1(VAR_13));






  VAR_20 = FUNC_15(
   VAR_13,
   FUNC_14(VAR_22,
       FUNC_1(VAR_13)),
   FUNC_13(VAR_22 + VAR_28,
       FUNC_1(VAR_13)),
   VAR_0);
  FUNC_4(VAR_20 == VAR_5);

  VAR_20 = FUNC_12(VAR_13, (vm_map_address_t)VAR_22,
       (vm_map_size_t)VAR_27, VAR_7, &VAR_23);
  FUNC_4(VAR_20 == VAR_5);

  if (VAR_28 != VAR_21)
   FUNC_10(VAR_13,
      VAR_22 + VAR_28, VAR_21 - VAR_28);
 }

 *VAR_16 = (mach_port_name_t *) VAR_23;
 *VAR_17 = VAR_18;
 return VAR_5;
}
