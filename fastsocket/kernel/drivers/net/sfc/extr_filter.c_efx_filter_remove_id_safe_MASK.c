
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct efx_nic {struct efx_filter_state* filter_state; } ;
struct efx_filter_table {unsigned int size; scalar_t__ used; int used_bitmap; struct efx_filter_spec* spec; } ;
struct efx_filter_state {int lock; struct efx_filter_table* table; } ;
struct efx_filter_spec {int priority; } ;
typedef enum efx_filter_table_id { ____Placeholder_efx_filter_table_id } efx_filter_table_id ;
typedef enum efx_filter_priority { ____Placeholder_efx_filter_priority } efx_filter_priority ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct efx_nic*,struct efx_filter_table*,unsigned int) ;
 int FUNC_4 (struct efx_filter_table*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (unsigned int,int ) ;

int FUNC_8(struct efx_nic *VAR_2,
         enum efx_filter_priority VAR_3,
         u32 VAR_4)
{
 struct efx_filter_state *VAR_5 = VAR_2->filter_state;
 enum efx_filter_table_id VAR_6;
 struct efx_filter_table *VAR_7;
 unsigned int VAR_8;
 struct efx_filter_spec *VAR_9;
 u8 VAR_10;
 int VAR_11;

 VAR_6 = FUNC_2(VAR_4);
 if ((unsigned int)VAR_6 >= VAR_0)
  return -VAR_1;
 VAR_7 = &VAR_5->table[VAR_6];

 VAR_8 = FUNC_1(VAR_4);
 if (VAR_8 >= VAR_7->size)
  return -VAR_1;
 VAR_9 = &VAR_7->spec[VAR_8];

 VAR_10 = FUNC_0(VAR_4);

 FUNC_5(&VAR_5->lock);

 if (FUNC_7(VAR_8, VAR_7->used_bitmap) &&
     VAR_9->priority == VAR_3) {
  FUNC_3(VAR_2, VAR_7, VAR_8);
  if (VAR_7->used == 0)
   FUNC_4(VAR_7);
  VAR_11 = 0;
 } else {
  VAR_11 = -VAR_1;
 }

 FUNC_6(&VAR_5->lock);

 return VAR_11;
}
