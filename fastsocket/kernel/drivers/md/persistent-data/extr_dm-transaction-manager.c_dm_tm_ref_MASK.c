
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dm_transaction_manager {int sm; scalar_t__ is_clone; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;

int FUNC_1(struct dm_transaction_manager *VAR_1, dm_block_t VAR_2,
       uint32_t *VAR_3)
{
 if (VAR_1->is_clone)
  return -VAR_0;

 return FUNC_0(VAR_1->sm, VAR_2, VAR_3);
}
