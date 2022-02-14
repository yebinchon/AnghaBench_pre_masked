
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t iv_index_t ;
typedef TYPE_1__* ipc_voucher_t ;
typedef int boolean_t ;
struct TYPE_3__ {scalar_t__ iv_table_size; size_t* iv_table; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline iv_index_t
FUNC_0(ipc_voucher_t VAR_2, boolean_t *VAR_3)
{
 iv_index_t VAR_4 = 0;

 boolean_t VAR_5 = VAR_1;
 if (0 < VAR_2->iv_table_size) {
  iv_index_t VAR_6 = VAR_2->iv_table_size - 1;

  do {
   iv_index_t VAR_7 = VAR_2->iv_table[VAR_6];
   VAR_4 = VAR_4 << 3 | VAR_4 >> (32 - 3);
   VAR_4 = ~VAR_4;
   if (0 < VAR_7) {
    VAR_4 += VAR_7;
    VAR_5 = VAR_0;
   }
  } while (0 < VAR_6--);
 }
 *VAR_3 = VAR_5;
 return VAR_4;
}
