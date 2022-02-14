
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_transaction_manager {int sm; int bm; scalar_t__ is_clone; } ;
struct dm_block_validator {int dummy; } ;
struct dm_block {int dummy; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct dm_block_validator*,struct dm_block**) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct dm_transaction_manager*,int ) ;

int FUNC_4(struct dm_transaction_manager *VAR_1,
      struct dm_block_validator *VAR_2,
      struct dm_block **VAR_3)
{
 int VAR_4;
 dm_block_t VAR_5;

 if (VAR_1->is_clone)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_1->sm, &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_1->bm, VAR_5, VAR_2, VAR_3);
 if (VAR_4 < 0) {
  FUNC_1(VAR_1->sm, VAR_5);
  return VAR_4;
 }





 FUNC_3(VAR_1, VAR_5);

 return 0;
}
