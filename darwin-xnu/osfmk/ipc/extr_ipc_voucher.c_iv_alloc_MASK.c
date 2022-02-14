
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ iv_index_t ;
typedef int * iv_entry_t ;
typedef TYPE_1__* ipc_voucher_t ;
struct TYPE_5__ {scalar_t__ iv_table_size; int * iv_table; int * iv_inline_table; int iv_port; scalar_t__ iv_hash; scalar_t__ iv_sum; int iv_refs; } ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;

ipc_voucher_t
FUNC_4(iv_index_t VAR_7)
{
 ipc_voucher_t VAR_8;
 iv_index_t VAR_9;


 VAR_8 = (ipc_voucher_t)FUNC_2(VAR_5);
 if (VAR_3 == VAR_8)
  return VAR_3;

 FUNC_1(&VAR_8->iv_refs, &VAR_6);
 VAR_8->iv_sum = 0;
 VAR_8->iv_hash = 0;
 VAR_8->iv_port = VAR_0;

 if (VAR_7 > VAR_2) {
  iv_entry_t VAR_10;


  VAR_10 = (iv_entry_t) FUNC_0(sizeof(*VAR_10) * VAR_7);
  if (VAR_1 == VAR_10) {
   FUNC_3(VAR_5, VAR_8);
   return VAR_3;
  }
  VAR_8->iv_table = VAR_10;
  VAR_8->iv_table_size = VAR_7;
 } else {
  VAR_8->iv_table = VAR_8->iv_inline_table;
  VAR_8->iv_table_size = VAR_2;
 }


 for (VAR_9=0; VAR_9 < VAR_8->iv_table_size; VAR_9++)
  VAR_8->iv_table[VAR_9] = VAR_4;

 return (VAR_8);
}
