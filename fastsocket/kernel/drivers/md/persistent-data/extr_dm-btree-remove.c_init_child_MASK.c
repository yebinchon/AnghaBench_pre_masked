
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_btree_value_type {int dummy; } ;
struct dm_btree_info {int tm; } ;
struct child {unsigned int index; int block; int n; } ;
struct btree_node {int dummy; } ;
typedef int dm_block_t ;
typedef int __le64 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,int *,int*) ;
 int FUNC_4 (int ,int ,struct dm_btree_value_type*) ;
 int FUNC_5 (struct btree_node*,unsigned int) ;
 scalar_t__ FUNC_6 (struct btree_node*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct dm_btree_info *VAR_1, struct dm_btree_value_type *VAR_2,
        struct btree_node *VAR_3,
        unsigned VAR_4, struct child *VAR_5)
{
 int VAR_6, VAR_7;
 dm_block_t VAR_8;

 VAR_5->index = VAR_4;
 VAR_8 = FUNC_5(VAR_3, VAR_4);

 VAR_6 = FUNC_3(VAR_1->tm, VAR_8, &VAR_0,
          &VAR_5->block, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_5->n = FUNC_1(VAR_5->block);

 if (VAR_7)
  FUNC_4(VAR_1->tm, VAR_5->n, VAR_2);

 *((__le64 *) FUNC_6(VAR_3, VAR_4)) =
  FUNC_0(FUNC_2(VAR_5->block));

 return 0;
}
