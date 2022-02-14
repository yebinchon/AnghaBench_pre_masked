
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dm_transaction_manager {int dummy; } ;
struct dm_block {int dummy; } ;
struct TYPE_2__ {int nr_entries; } ;
struct btree_node {TYPE_1__ header; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 struct btree_node* FUNC_0 (struct dm_block*) ;
 int FUNC_1 (struct dm_transaction_manager*,int ,int *,struct dm_block**) ;
 int FUNC_2 (struct dm_transaction_manager*,struct dm_block*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct dm_transaction_manager *VAR_1,
     dm_block_t VAR_2, uint32_t *VAR_3)
{
 int VAR_4;
 struct dm_block *VAR_5;
 struct btree_node *VAR_6;

 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_0, &VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_6 = FUNC_0(VAR_5);
 *VAR_3 = FUNC_3(VAR_6->header.nr_entries);

 return FUNC_2(VAR_1, VAR_5);
}
