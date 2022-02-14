
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_transaction_manager {int dummy; } ;
struct dm_space_map {int dummy; } ;
struct dm_block_manager {int dummy; } ;
typedef int dm_block_t ;


 int FUNC_0 (struct dm_block_manager*,int ,struct dm_transaction_manager**,struct dm_space_map**,int ,void*,size_t) ;

int FUNC_1(struct dm_block_manager *VAR_0, dm_block_t VAR_1,
         void *VAR_2, size_t VAR_3,
         struct dm_transaction_manager **VAR_4,
         struct dm_space_map **VAR_5)
{
 return FUNC_0(VAR_0, VAR_1, VAR_4, VAR_5, 0, VAR_2, VAR_3);
}
