
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct efx_nic {struct efx_filter_state* filter_state; } ;
struct efx_filter_table {unsigned int size; int used_bitmap; struct efx_filter_spec* spec; } ;
struct efx_filter_state {int lock; struct efx_filter_table* table; } ;
struct efx_filter_spec {int priority; } ;
typedef enum efx_filter_table_id { ____Placeholder_efx_filter_table_id } efx_filter_table_id ;
typedef enum efx_filter_priority { ____Placeholder_efx_filter_priority } efx_filter_priority ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (unsigned int,int ) ;

int FUNC_6(struct efx_nic *VAR_2,
          enum efx_filter_priority VAR_3,
          u32 VAR_4, struct efx_filter_spec *VAR_5)
{
 struct efx_filter_state *VAR_6 = VAR_2->filter_state;
 enum efx_filter_table_id VAR_7;
 struct efx_filter_table *VAR_8;
 struct efx_filter_spec *VAR_9;
 unsigned int VAR_10;
 u8 VAR_11;
 int VAR_12;

 VAR_7 = FUNC_2(VAR_4);
 if ((unsigned int)VAR_7 >= VAR_0)
  return -VAR_1;
 VAR_8 = &VAR_6->table[VAR_7];

 VAR_10 = FUNC_1(VAR_4);
 if (VAR_10 >= VAR_8->size)
  return -VAR_1;
 VAR_9 = &VAR_8->spec[VAR_10];

 VAR_11 = FUNC_0(VAR_4);

 FUNC_3(&VAR_6->lock);

 if (FUNC_5(VAR_10, VAR_8->used_bitmap) &&
     VAR_9->priority == VAR_3) {
  *VAR_5 = *VAR_9;
  VAR_12 = 0;
 } else {
  VAR_12 = -VAR_1;
 }

 FUNC_4(&VAR_6->lock);

 return VAR_12;
}
