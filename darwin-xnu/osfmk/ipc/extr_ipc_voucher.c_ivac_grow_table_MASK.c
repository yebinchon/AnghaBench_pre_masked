
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* ivac_entry_t ;
typedef int ivac_entry ;
typedef int iv_index_t ;
typedef TYPE_2__* ipc_voucher_attr_control_t ;
struct TYPE_14__ {int ivac_is_growing; int ivac_table_size; int ivac_freelist; TYPE_1__* ivac_table; } ;
struct TYPE_13__ {int ivace_next; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static void
FUNC_10(ipc_voucher_attr_control_t VAR_1)
{
 iv_index_t VAR_2 = 0;


 ivac_entry_t VAR_3 = ((void*)0), VAR_4 = ((void*)0);
 iv_index_t VAR_5, VAR_6;

 if (VAR_1->ivac_is_growing) {
  FUNC_2(VAR_1);
  return;
 }

 VAR_1->ivac_is_growing = 1;
 if (VAR_1->ivac_table_size >= VAR_0) {
  FUNC_9("Cannot grow ipc space beyond IVAC_ENTRIES_MAX. Some process is leaking vouchers");
  return;
 }

 VAR_6 = VAR_1->ivac_table_size;
 FUNC_3(VAR_1);

 VAR_5 = VAR_6 * 2;

 FUNC_0(VAR_5 > VAR_6);
 FUNC_0(VAR_5 < VAR_0);

 VAR_3 = FUNC_7(sizeof(ivac_entry) * VAR_5);
 if (!VAR_3){
  FUNC_9("Failed to grow ivac table to size %d\n", VAR_5);
  return;
 }


 for (VAR_2 = VAR_6; VAR_2 < VAR_5; VAR_2++) {
  FUNC_6(&VAR_3[VAR_2], VAR_2+1);
 }

 FUNC_1(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->ivac_table_size; VAR_2++){
  FUNC_5(&VAR_1->ivac_table[VAR_2], &VAR_3[VAR_2]);
 }

 VAR_4 = VAR_1->ivac_table;

 VAR_1->ivac_table = VAR_3;
 VAR_1->ivac_table_size = VAR_5;


 VAR_1->ivac_table[VAR_5 - 1].ivace_next = VAR_1->ivac_freelist;
 VAR_1->ivac_freelist = VAR_6;
 VAR_1->ivac_is_growing = 0;
 FUNC_4(VAR_1);

 if (VAR_4){
  FUNC_3(VAR_1);
  FUNC_8(VAR_4, VAR_6 * sizeof(ivac_entry));
  FUNC_1(VAR_1);
 }
}
