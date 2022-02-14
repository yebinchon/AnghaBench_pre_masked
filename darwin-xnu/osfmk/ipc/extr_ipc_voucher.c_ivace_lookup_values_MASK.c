
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int * mach_voucher_attr_value_handle_array_t ;
typedef int mach_voucher_attr_value_handle_array_size_t ;
typedef TYPE_1__* ivac_entry_t ;
typedef size_t iv_index_t ;
typedef TYPE_2__* ipc_voucher_attr_control_t ;
struct TYPE_9__ {TYPE_2__* ivgte_control; } ;
struct TYPE_8__ {size_t ivac_table_size; TYPE_1__* ivac_table; } ;
struct TYPE_7__ {scalar_t__ ivace_refs; int ivace_value; } ;


 TYPE_2__* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_5__* VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(
 iv_index_t VAR_4,
 iv_index_t VAR_5,
 mach_voucher_attr_value_handle_array_t VAR_6,
 mach_voucher_attr_value_handle_array_size_t *VAR_7)
{
 ipc_voucher_attr_control_t VAR_8;
 ivac_entry_t VAR_9;

 if (VAR_1 == VAR_5 ||
     VAR_2 <= VAR_4) {
  *VAR_7 = 0;
  return;
 }

 VAR_8 = VAR_3[VAR_4].ivgte_control;
 FUNC_0(VAR_0 != VAR_8);




 FUNC_1(VAR_8);
 FUNC_0(VAR_5 < VAR_8->ivac_table_size);
 VAR_9 = &VAR_8->ivac_table[VAR_5];




 FUNC_0(VAR_9->ivace_refs > 0);
 VAR_6[0] = VAR_9->ivace_value;
 FUNC_2(VAR_8);
 *VAR_7 = 1;
}
