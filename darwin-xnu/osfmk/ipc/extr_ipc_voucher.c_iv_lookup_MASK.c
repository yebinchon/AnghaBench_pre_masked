
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t iv_index_t ;
typedef TYPE_1__* ipc_voucher_t ;
struct TYPE_3__ {size_t iv_table_size; size_t* iv_table; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline iv_index_t
FUNC_0(ipc_voucher_t VAR_1, iv_index_t VAR_2)
{
 if (VAR_2 < VAR_1->iv_table_size)
  return VAR_1->iv_table[VAR_2];
 return VAR_0;
}
