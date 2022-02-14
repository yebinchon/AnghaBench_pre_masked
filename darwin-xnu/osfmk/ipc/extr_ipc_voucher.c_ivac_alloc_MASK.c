
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t natural_t ;
typedef TYPE_1__* ivac_entry_t ;
typedef int ivac_entry ;
typedef int iv_index_t ;
typedef TYPE_2__* ipc_voucher_attr_control_t ;
struct TYPE_8__ {int ivac_table_size; int ivac_init_table_size; int ivac_freelist; int ivac_key_index; TYPE_1__* ivac_table; int ivac_port; void* ivac_is_growing; int ivac_refs; } ;
struct TYPE_7__ {int ivace_next; void* ivace_free; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ) ;

ipc_voucher_attr_control_t
FUNC_5(iv_index_t VAR_8)
{
 ipc_voucher_attr_control_t VAR_9;
 ivac_entry_t VAR_10;
 natural_t VAR_11;


 VAR_9 = (ipc_voucher_attr_control_t)FUNC_4(VAR_6);
 if (VAR_3 == VAR_9)
  return VAR_3;

 FUNC_3(&VAR_9->ivac_refs, &VAR_7);
 VAR_9->ivac_is_growing = VAR_0;
 VAR_9->ivac_port = VAR_1;


 VAR_10 = (ivac_entry_t) FUNC_2(VAR_2 * sizeof(ivac_entry));
 VAR_9->ivac_table = VAR_10;
 VAR_9->ivac_table_size = VAR_2;
 VAR_9->ivac_init_table_size = VAR_2;
 for (VAR_11 = 0; VAR_11 < VAR_9->ivac_table_size; VAR_11++) {
  FUNC_1(&VAR_10[VAR_11], VAR_11+1);
 }


 VAR_10[0].ivace_next = VAR_5;
 VAR_10[0].ivace_free = VAR_0;
 VAR_10[VAR_11-1].ivace_next = VAR_4;
 VAR_9->ivac_freelist = 1;
 FUNC_0(VAR_9);
 VAR_9->ivac_key_index = VAR_8;
 return (VAR_9);
}
