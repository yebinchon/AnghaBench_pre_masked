
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mach_voucher_attr_value_handle_t ;
typedef size_t iv_index_t ;
typedef TYPE_1__* ipc_voucher_attr_control_t ;
struct TYPE_5__ {TYPE_1__* ivgte_control; } ;
struct TYPE_4__ {int ivac_init_table_size; } ;


 TYPE_1__* VAR_0 ;
 size_t FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static inline iv_index_t
FUNC_2(
 iv_index_t VAR_2,
 mach_voucher_attr_value_handle_t VAR_3)
{
 ipc_voucher_attr_control_t VAR_4;

 VAR_4 = VAR_1[VAR_2].ivgte_control;
 FUNC_1(VAR_0 != VAR_4);
 return FUNC_0(VAR_4->ivac_init_table_size, VAR_3);
}
