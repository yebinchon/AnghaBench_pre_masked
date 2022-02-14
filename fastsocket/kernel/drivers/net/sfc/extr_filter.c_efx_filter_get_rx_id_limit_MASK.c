
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct efx_nic {struct efx_filter_state* filter_state; } ;
struct efx_filter_state {TYPE_1__* table; } ;
typedef enum efx_filter_table_id { ____Placeholder_efx_filter_table_id } efx_filter_table_id ;
struct TYPE_2__ {unsigned int size; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

u32 FUNC_0(struct efx_nic *VAR_3)
{
 struct efx_filter_state *VAR_4 = VAR_3->filter_state;
 unsigned int VAR_5 = VAR_1 - 1;
 enum efx_filter_table_id VAR_6;

 do {
  VAR_6 = VAR_2[VAR_5];
  if (VAR_4->table[VAR_6].size != 0)
   return VAR_5 << VAR_0 |
    VAR_4->table[VAR_6].size;
 } while (VAR_5--);

 return 0;
}
