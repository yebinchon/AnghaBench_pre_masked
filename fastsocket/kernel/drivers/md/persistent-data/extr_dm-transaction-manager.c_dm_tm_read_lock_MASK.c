
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_transaction_manager {int bm; TYPE_1__* real; scalar_t__ is_clone; } ;
struct dm_block_validator {int dummy; } ;
struct dm_block {int dummy; } ;
typedef int dm_block_t ;
struct TYPE_2__ {int bm; } ;


 int FUNC_0 (int ,int ,struct dm_block_validator*,struct dm_block**) ;
 int FUNC_1 (int ,int ,struct dm_block_validator*,struct dm_block**) ;

int FUNC_2(struct dm_transaction_manager *VAR_0, dm_block_t VAR_1,
      struct dm_block_validator *VAR_2,
      struct dm_block **VAR_3)
{
 if (VAR_0->is_clone)
  return FUNC_1(VAR_0->real->bm, VAR_1, VAR_2, VAR_3);

 return FUNC_0(VAR_0->bm, VAR_1, VAR_2, VAR_3);
}
