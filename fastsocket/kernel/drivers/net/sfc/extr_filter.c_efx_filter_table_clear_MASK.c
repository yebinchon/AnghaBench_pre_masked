
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {struct efx_filter_state* filter_state; } ;
struct efx_filter_table {unsigned int size; scalar_t__ used; TYPE_1__* spec; } ;
struct efx_filter_state {int lock; struct efx_filter_table* table; } ;
typedef enum efx_filter_table_id { ____Placeholder_efx_filter_table_id } efx_filter_table_id ;
typedef enum efx_filter_priority { ____Placeholder_efx_filter_priority } efx_filter_priority ;
struct TYPE_2__ {int priority; } ;


 int FUNC_0 (struct efx_nic*,struct efx_filter_table*,unsigned int) ;
 int FUNC_1 (struct efx_filter_table*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct efx_nic *VAR_0,
       enum efx_filter_table_id VAR_1,
       enum efx_filter_priority VAR_2)
{
 struct efx_filter_state *VAR_3 = VAR_0->filter_state;
 struct efx_filter_table *VAR_4 = &VAR_3->table[VAR_1];
 unsigned int VAR_5;

 FUNC_2(&VAR_3->lock);

 for (VAR_5 = 0; VAR_5 < VAR_4->size; ++VAR_5)
  if (VAR_4->spec[VAR_5].priority <= VAR_2)
   FUNC_0(VAR_0, VAR_4, VAR_5);
 if (VAR_4->used == 0)
  FUNC_1(VAR_4);

 FUNC_3(&VAR_3->lock);
}
