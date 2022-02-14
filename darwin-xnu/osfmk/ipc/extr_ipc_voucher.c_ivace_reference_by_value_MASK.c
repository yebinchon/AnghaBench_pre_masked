
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int mach_voucher_attr_value_handle_t ;
typedef int mach_voucher_attr_value_flags_t ;
typedef TYPE_1__* ivac_entry_t ;
typedef size_t iv_index_t ;
typedef TYPE_2__* ipc_voucher_attr_control_t ;
struct TYPE_11__ {size_t ivac_table_size; size_t ivac_freelist; TYPE_1__* ivac_table; int ivac_init_table_size; } ;
struct TYPE_10__ {size_t ivace_index; size_t ivace_next; int ivace_refs; int ivace_made; void* ivace_persist; void* ivace_free; int ivace_value; } ;


 void* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_0 (int ,int ) ;
 size_t VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static iv_index_t
FUNC_6(
 ipc_voucher_attr_control_t VAR_8,
 mach_voucher_attr_value_handle_t VAR_9,
 mach_voucher_attr_value_flags_t VAR_10)
{
 ivac_entry_t VAR_11 = VAR_1;
 iv_index_t VAR_12;
 iv_index_t VAR_13;

 if (VAR_2 == VAR_8) {
  return VAR_5;
 }

  FUNC_3(VAR_8);
restart:
 VAR_12 = FUNC_0(VAR_8->ivac_init_table_size, VAR_9);
 VAR_13 = VAR_8->ivac_table[VAR_12].ivace_index;
 while (VAR_13 != VAR_4) {
  FUNC_1(VAR_13 < VAR_8->ivac_table_size);
  VAR_11 = &VAR_8->ivac_table[VAR_13];
  FUNC_1(!VAR_11->ivace_free);

  if (VAR_11->ivace_value == VAR_9)
   break;

  FUNC_1(VAR_11->ivace_next != VAR_13);
  VAR_13 = VAR_11->ivace_next;
 }


 if (VAR_13 != VAR_4) {

  if (!VAR_11->ivace_persist) {
   VAR_11->ivace_refs++;
   VAR_11->ivace_made++;
  }

  FUNC_5(VAR_8);
  FUNC_4(VAR_8);
  return VAR_13;
 }


 VAR_13 = VAR_8->ivac_freelist;
 if (VAR_3 == VAR_13) {

  FUNC_2(VAR_8);
  goto restart;
 }


 VAR_11 = &VAR_8->ivac_table[VAR_13];
 VAR_8->ivac_freelist = VAR_11->ivace_next;


 VAR_11->ivace_value = VAR_9;
 VAR_11->ivace_refs = 1;
 VAR_11->ivace_made = 1;
 VAR_11->ivace_free = VAR_0;
 VAR_11->ivace_persist = (VAR_10 & VAR_6) ? VAR_7 : VAR_0;


 VAR_11->ivace_next = VAR_8->ivac_table[VAR_12].ivace_index;
 VAR_8->ivac_table[VAR_12].ivace_index = VAR_13;
 FUNC_5(VAR_8);



 return VAR_13;
}
