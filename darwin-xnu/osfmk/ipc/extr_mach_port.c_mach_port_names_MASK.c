
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_map_size_t ;
typedef scalar_t__ vm_map_copy_t ;
typedef int vm_map_address_t ;
typedef int mach_port_type_t ;
typedef int mach_port_name_t ;
typedef int mach_port_index_t ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
typedef TYPE_1__* ipc_space_t ;
typedef int ipc_port_timestamp_t ;
typedef TYPE_2__* ipc_entry_t ;
typedef int ipc_entry_num_t ;
typedef int ipc_entry_bits_t ;
struct TYPE_10__ {int ie_bits; } ;
struct TYPE_9__ {int is_table_size; TYPE_2__* is_table; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int) ;
 int VAR_12 ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (int ,TYPE_2__*,int ,int *,int *,int*) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ,scalar_t__*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_13 (int ,int ,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (scalar_t__,int ) ;
 scalar_t__ FUNC_16 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_17 (int ,int ,scalar_t__,int,int ,int ) ;

kern_return_t
FUNC_18(
 ipc_space_t VAR_13,
 mach_port_name_t **VAR_14,
 mach_msg_type_number_t *VAR_15,
 mach_port_type_t **VAR_16,
 mach_msg_type_number_t *VAR_17)
{
 ipc_entry_t VAR_18;
 ipc_entry_num_t VAR_19;
 mach_port_index_t VAR_20;
 ipc_entry_num_t VAR_21;
 ipc_port_timestamp_t VAR_22;
 mach_port_name_t *VAR_23;
 mach_port_type_t *VAR_24;
 kern_return_t VAR_25;

 vm_size_t VAR_26;
 vm_offset_t VAR_27;
 vm_offset_t VAR_28;
 vm_map_copy_t VAR_29;
 vm_map_copy_t VAR_30;


 FUNC_11(sizeof(mach_port_name_t) == sizeof(mach_port_type_t));

 if (VAR_13 == VAR_1)
  return VAR_2;

 VAR_26 = 0;

 for (;;) {
  ipc_entry_num_t VAR_31;
  vm_size_t VAR_32;

  FUNC_7(VAR_13);
  if (!FUNC_6(VAR_13)) {
   FUNC_8(VAR_13);
   if (VAR_26 != 0) {
    FUNC_9(VAR_12, VAR_27, VAR_26);
    FUNC_9(VAR_12, VAR_28, VAR_26);
   }
   return VAR_2;
  }


  VAR_31 = VAR_13->is_table_size;
  VAR_32 = FUNC_14(
   (VAR_31 * sizeof(mach_port_name_t)),
   FUNC_3(VAR_12));

  if (VAR_32 <= VAR_26)
   break;

  FUNC_8(VAR_13);

  if (VAR_26 != 0) {
   FUNC_9(VAR_12, VAR_27, VAR_26);
   FUNC_9(VAR_12, VAR_28, VAR_26);
  }
  VAR_26 = VAR_32;

  VAR_25 = FUNC_12(VAR_12, &VAR_27, VAR_26, VAR_7, VAR_8);
  if (VAR_25 != VAR_4)
   return VAR_3;

  VAR_25 = FUNC_12(VAR_12, &VAR_28, VAR_26, VAR_7, VAR_8);
  if (VAR_25 != VAR_4) {
   FUNC_9(VAR_12, VAR_27, VAR_26);
   return VAR_3;
  }



  VAR_25 = FUNC_17(
   VAR_12,
   FUNC_15(VAR_27,
       FUNC_3(VAR_12)),
   FUNC_14(VAR_27 + VAR_26,
       FUNC_3(VAR_12)),
   VAR_10|VAR_11, VAR_8,
   VAR_0);
  if (VAR_25 != VAR_4) {
   FUNC_9(VAR_12, VAR_27, VAR_26);
   FUNC_9(VAR_12, VAR_28, VAR_26);
   return VAR_3;
  }

  VAR_25 = FUNC_17(
   VAR_12,
   FUNC_15(VAR_28,
       FUNC_3(VAR_12)),
   FUNC_14(VAR_28 + VAR_26,
       FUNC_3(VAR_12)),
   VAR_10|VAR_11,
   VAR_8,
   VAR_0);
  if (VAR_25 != VAR_4) {
   FUNC_9(VAR_12, VAR_27, VAR_26);
   FUNC_9(VAR_12, VAR_28, VAR_26);
   return VAR_3;
  }

 }


 VAR_23 = (mach_port_name_t *) VAR_27;
 VAR_24 = (mach_port_type_t *) VAR_28;
 VAR_21 = 0;

 VAR_22 = FUNC_5();

 VAR_18 = VAR_13->is_table;
 VAR_19 = VAR_13->is_table_size;

 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
  ipc_entry_t VAR_33 = &VAR_18[VAR_20];
  ipc_entry_bits_t VAR_34 = VAR_33->ie_bits;

  if (FUNC_1(VAR_34) != VAR_5) {
   mach_port_name_t VAR_35;

   VAR_35 = FUNC_2(VAR_20, FUNC_0(VAR_34));
   FUNC_10(VAR_22, VAR_33, VAR_35, VAR_23,
            VAR_24, &VAR_21);
  }
 }

 FUNC_8(VAR_13);

 if (VAR_21 == 0) {
  VAR_29 = VAR_9;
  VAR_30 = VAR_9;

  if (VAR_26 != 0) {
   FUNC_9(VAR_12, VAR_27, VAR_26);
   FUNC_9(VAR_12, VAR_28, VAR_26);
  }
 } else {
  vm_size_t VAR_36;
  vm_size_t VAR_37;

  VAR_36 = VAR_21 * sizeof(mach_port_name_t);
  VAR_37 =
   FUNC_14(VAR_36,
       FUNC_3(VAR_12));






  VAR_25 = FUNC_16(
   VAR_12,
   FUNC_15(VAR_27,
       FUNC_3(VAR_12)),
   FUNC_14(VAR_27 + VAR_37,
       FUNC_3(VAR_12)),
   VAR_0);
  FUNC_4(VAR_25 == VAR_4);

  VAR_25 = FUNC_16(
   VAR_12,
   FUNC_15(VAR_28,
       FUNC_3(VAR_12)),
   FUNC_14(VAR_28 + VAR_37,
       FUNC_3(VAR_12)),
   VAR_0);
  FUNC_4(VAR_25 == VAR_4);

  VAR_25 = FUNC_13(VAR_12, (vm_map_address_t)VAR_27,
       (vm_map_size_t)VAR_36, VAR_6, &VAR_29);
  FUNC_4(VAR_25 == VAR_4);

  VAR_25 = FUNC_13(VAR_12, (vm_map_address_t)VAR_28,
       (vm_map_size_t)VAR_36, VAR_6, &VAR_30);
  FUNC_4(VAR_25 == VAR_4);

  if (VAR_37 != VAR_26) {
   FUNC_9(VAR_12,
      VAR_27 + VAR_37, VAR_26 - VAR_37);
   FUNC_9(VAR_12,
      VAR_28 + VAR_37, VAR_26 - VAR_37);
  }
 }

 *VAR_14 = (mach_port_name_t *) VAR_29;
 *VAR_15 = VAR_21;
 *VAR_16 = (mach_port_type_t *) VAR_30;
 *VAR_17 = VAR_21;
 return VAR_4;
}
