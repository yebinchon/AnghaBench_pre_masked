
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ mach_voucher_attr_value_reference_t ;
typedef int mach_voucher_attr_value_handle_t ;
typedef scalar_t__ mach_voucher_attr_key_t ;
typedef scalar_t__ kern_return_t ;
typedef TYPE_1__* ivac_entry_t ;
typedef size_t iv_index_t ;
typedef TYPE_2__* ipc_voucher_attr_manager_t ;
typedef TYPE_3__* ipc_voucher_attr_control_t ;
struct TYPE_14__ {size_t ivac_table_size; size_t ivac_freelist; TYPE_1__* ivac_table; } ;
struct TYPE_13__ {scalar_t__ (* ivam_release_value ) (TYPE_2__*,scalar_t__,int,scalar_t__) ;} ;
struct TYPE_12__ {scalar_t__ ivace_refs; int ivace_value; scalar_t__ ivace_made; size_t ivace_index; size_t ivace_next; void* ivace_free; void* ivace_releasing; scalar_t__ ivace_persist; } ;


 void* VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (size_t,int) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (size_t,void*,TYPE_2__**,TYPE_3__**) ;
 scalar_t__ FUNC_7 (TYPE_2__*,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(
 iv_index_t VAR_8,
 iv_index_t VAR_9)
{
 ipc_voucher_attr_control_t VAR_10;
 ipc_voucher_attr_manager_t VAR_11;
 mach_voucher_attr_value_handle_t VAR_12;
 mach_voucher_attr_value_reference_t VAR_13;
 mach_voucher_attr_key_t VAR_14;
 iv_index_t VAR_15;
 ivac_entry_t VAR_16;
 kern_return_t VAR_17;


 if (VAR_4 == VAR_9)
  return;

 FUNC_6(VAR_8, VAR_0, &VAR_11, &VAR_10);
 FUNC_0(VAR_1 != VAR_10);
 FUNC_0(VAR_2 != VAR_11);

 FUNC_3(VAR_10);
 FUNC_0(VAR_9 < VAR_10->ivac_table_size);
 VAR_16 = &VAR_10->ivac_table[VAR_9];

 FUNC_0(0 < VAR_16->ivace_refs);


 if (VAR_16->ivace_persist) {
  FUNC_5(VAR_10);
  return;
 }

 if (0 < --VAR_16->ivace_refs) {
  FUNC_5(VAR_10);
  return;
 }

 VAR_14 = FUNC_2(VAR_8);
 FUNC_0(VAR_6 != VAR_14);






 if (VAR_16->ivace_releasing) {
  FUNC_5(VAR_10);
  return;
 }


 VAR_16->ivace_releasing = VAR_7;
 VAR_12 = VAR_16->ivace_value;

 redrive:
 FUNC_0(VAR_12 == VAR_16->ivace_value);
 FUNC_0(!VAR_16->ivace_free);
 VAR_13 = VAR_16->ivace_made;
 FUNC_5(VAR_10);


 VAR_17 = (VAR_11->ivam_release_value)(VAR_11, VAR_14, VAR_12, VAR_13);


 FUNC_3(VAR_10);
 VAR_16 = &VAR_10->ivac_table[VAR_9];
 FUNC_0(VAR_12 == VAR_16->ivace_value);
 if (VAR_16->ivace_made != VAR_13) {
  if (VAR_5 == VAR_17)
   VAR_16->ivace_made -= VAR_13;

  if (0 == VAR_16->ivace_refs)
   goto redrive;

  VAR_16->ivace_releasing = VAR_0;
  FUNC_5(VAR_10);
  return;
 } else {







  if (VAR_5 != VAR_17) {
   VAR_16->ivace_releasing = VAR_0;
   FUNC_5(VAR_10);
   return;
  }
 }

 FUNC_0(0 == VAR_16->ivace_refs);







 VAR_15 = FUNC_1(VAR_8, VAR_12);
 if (VAR_10->ivac_table[VAR_15].ivace_index == VAR_9) {
  VAR_10->ivac_table[VAR_15].ivace_index = VAR_16->ivace_next;
 } else {
  VAR_15 = VAR_10->ivac_table[VAR_15].ivace_index;
  FUNC_0(VAR_3 != VAR_15);
  while (VAR_10->ivac_table[VAR_15].ivace_next != VAR_9) {
   VAR_15 = VAR_10->ivac_table[VAR_15].ivace_next;
   FUNC_0(VAR_3 != VAR_15);
  }
  VAR_10->ivac_table[VAR_15].ivace_next = VAR_16->ivace_next;
 }


 VAR_16->ivace_value = 0xdeadc0dedeadc0de;
 VAR_16->ivace_releasing = VAR_0;
 VAR_16->ivace_free = VAR_7;
 VAR_16->ivace_made = 0;
 VAR_16->ivace_next = VAR_10->ivac_freelist;
 VAR_10->ivac_freelist = VAR_9;
 FUNC_5(VAR_10);


 FUNC_4(VAR_10);

 return;
}
