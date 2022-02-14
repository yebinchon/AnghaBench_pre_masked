
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct shadow_spine {int dummy; } ;
struct dm_btree_value_type {int dummy; } ;
struct dm_btree_info {int tm; } ;
struct dm_block {int dummy; } ;
struct TYPE_2__ {int nr_entries; } ;
struct btree_node {TYPE_1__ header; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct btree_node* FUNC_0 (struct dm_block*) ;
 int FUNC_1 (struct dm_block*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *,struct dm_block**) ;
 int FUNC_6 (int ,struct dm_block*) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct btree_node*,int ) ;
 int FUNC_10 (struct btree_node*,struct btree_node*,int ) ;
 int FUNC_11 (struct shadow_spine*,struct dm_btree_info*,struct dm_btree_value_type*,int) ;
 int FUNC_12 (struct shadow_spine*,struct dm_btree_info*,struct dm_btree_value_type*,int) ;
 struct dm_block* FUNC_13 (struct shadow_spine*) ;
 int FUNC_14 (struct btree_node*,int) ;

__attribute__((used)) static int FUNC_15(struct shadow_spine *VAR_2,
         struct dm_btree_info *VAR_3,
         struct dm_btree_value_type *VAR_4, uint64_t VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;
 uint32_t VAR_10;
 struct btree_node *VAR_11;

 VAR_11 = FUNC_0(FUNC_13(VAR_2));

 if (FUNC_8(VAR_11->header.nr_entries) == 1) {
  struct dm_block *VAR_12;
  dm_block_t VAR_13 = FUNC_14(VAR_11, 0);

  VAR_7 = FUNC_5(VAR_3->tm, VAR_13, &VAR_1, &VAR_12);
  if (VAR_7)
   return VAR_7;

  FUNC_10(VAR_11, FUNC_0(VAR_12),
         FUNC_2(FUNC_4(VAR_3->tm)));
  VAR_7 = FUNC_6(VAR_3->tm, VAR_12);
  if (VAR_7)
   return VAR_7;

  FUNC_3(VAR_3->tm, FUNC_1(VAR_12));
  return 0;
 }

 VAR_6 = FUNC_9(VAR_11, VAR_5);
 if (VAR_6 < 0)
  return -VAR_0;

 VAR_7 = FUNC_7(VAR_3->tm, FUNC_14(VAR_11, VAR_6), &VAR_10);
 if (VAR_7)
  return VAR_7;

 VAR_8 = VAR_6 > 0;
 VAR_9 = VAR_6 < (FUNC_8(VAR_11->header.nr_entries) - 1);

 if (!VAR_8)
  VAR_7 = FUNC_11(VAR_2, VAR_3, VAR_4, VAR_6);

 else if (!VAR_9)
  VAR_7 = FUNC_11(VAR_2, VAR_3, VAR_4, VAR_6 - 1);

 else
  VAR_7 = FUNC_12(VAR_2, VAR_3, VAR_4, VAR_6 - 1);

 return VAR_7;
}
