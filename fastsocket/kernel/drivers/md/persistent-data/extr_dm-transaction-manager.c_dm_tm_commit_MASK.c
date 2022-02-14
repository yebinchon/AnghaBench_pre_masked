
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_transaction_manager {int bm; scalar_t__ is_clone; } ;
struct dm_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dm_block*) ;
 int FUNC_2 (struct dm_transaction_manager*) ;

int FUNC_3(struct dm_transaction_manager *VAR_1, struct dm_block *VAR_2)
{
 if (VAR_1->is_clone)
  return -VAR_0;

 FUNC_2(VAR_1);
 FUNC_1(VAR_2);

 return FUNC_0(VAR_1->bm);
}
