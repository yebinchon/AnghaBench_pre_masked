
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mach_voucher_attr_value_handle_t ;
typedef int mach_voucher_attr_key_t ;
typedef int kern_return_t ;
typedef size_t iv_index_t ;
typedef scalar_t__ ipc_voucher_attr_manager_t ;
typedef TYPE_2__* ipc_voucher_attr_control_t ;
struct TYPE_10__ {scalar_t__ ivgte_manager; int ivgte_key; TYPE_2__* ivgte_control; } ;
struct TYPE_9__ {TYPE_1__* ivac_table; } ;
struct TYPE_8__ {scalar_t__ ivace_next; scalar_t__ ivace_index; int ivace_persist; void* ivace_made; void* ivace_refs; int ivace_value; } ;


 void* VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 TYPE_5__* VAR_10 ;
 size_t FUNC_1 (size_t,int ) ;
 size_t FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (size_t) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

kern_return_t
FUNC_7(
 ipc_voucher_attr_manager_t VAR_11,
 mach_voucher_attr_value_handle_t VAR_12,
        mach_voucher_attr_key_t VAR_13,
 ipc_voucher_attr_control_t *VAR_14)
{
 ipc_voucher_attr_control_t VAR_15;
 iv_index_t VAR_16;
 iv_index_t VAR_17;

 if (VAR_2 == VAR_11)
  return VAR_6;

 VAR_16 = FUNC_2(VAR_13);
 if (VAR_4 == VAR_16)
  return VAR_6;

 VAR_15 = FUNC_3(VAR_16);
 if (VAR_1 == VAR_15)
  return VAR_7;


 VAR_15->ivac_table[VAR_5].ivace_value = VAR_12;
 VAR_15->ivac_table[VAR_5].ivace_refs = VAR_0;
 VAR_15->ivac_table[VAR_5].ivace_made = VAR_0;
 VAR_15->ivac_table[VAR_5].ivace_persist = VAR_9;
 FUNC_0(VAR_3 == VAR_15->ivac_table[VAR_5].ivace_next);

 FUNC_5();
 if (VAR_2 != VAR_10[VAR_16].ivgte_manager) {
  FUNC_6();
  FUNC_4(VAR_15);
  return VAR_6;
 }


 VAR_10[VAR_16].ivgte_manager = VAR_11;
 VAR_10[VAR_16].ivgte_control = VAR_15;
 VAR_10[VAR_16].ivgte_key = VAR_13;


 VAR_17 = FUNC_1(VAR_16, VAR_12);
 FUNC_0(VAR_3 == VAR_15->ivac_table[VAR_17].ivace_index);
 VAR_15->ivac_table[VAR_17].ivace_index = VAR_5;

 FUNC_6();


 *VAR_14 = VAR_15;

 return VAR_8;
}
