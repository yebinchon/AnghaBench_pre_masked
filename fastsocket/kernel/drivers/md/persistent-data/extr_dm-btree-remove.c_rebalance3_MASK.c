
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shadow_spine {int dummy; } ;
struct dm_btree_value_type {int dummy; } ;
struct dm_btree_info {int dummy; } ;
struct child {int dummy; } ;
struct btree_node {int dummy; } ;


 int FUNC_0 (struct dm_btree_info*,struct btree_node*,struct child*,struct child*,struct child*) ;
 struct btree_node* FUNC_1 (int ) ;
 int FUNC_2 (struct dm_btree_info*,struct child*) ;
 int FUNC_3 (struct dm_btree_info*,struct dm_btree_value_type*,struct btree_node*,unsigned int,struct child*) ;
 int FUNC_4 (struct shadow_spine*) ;

__attribute__((used)) static int FUNC_5(struct shadow_spine *VAR_0, struct dm_btree_info *VAR_1,
        struct dm_btree_value_type *VAR_2, unsigned VAR_3)
{
 int VAR_4;
 struct btree_node *VAR_5 = FUNC_1(FUNC_4(VAR_0));
 struct child VAR_6, VAR_7, VAR_8;




 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_5, VAR_3, &VAR_6);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_5, VAR_3 + 1, &VAR_7);
 if (VAR_4) {
  FUNC_2(VAR_1, &VAR_6);
  return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_5, VAR_3 + 2, &VAR_8);
 if (VAR_4) {
  FUNC_2(VAR_1, &VAR_6);
  FUNC_2(VAR_1, &VAR_7);
  return VAR_4;
 }

 FUNC_0(VAR_1, VAR_5, &VAR_6, &VAR_7, &VAR_8);

 VAR_4 = FUNC_2(VAR_1, &VAR_6);
 if (VAR_4) {
  FUNC_2(VAR_1, &VAR_7);
  FUNC_2(VAR_1, &VAR_8);
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_1, &VAR_7);
 if (VAR_4) {
  FUNC_2(VAR_1, &VAR_8);
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_1, &VAR_8);
 if (VAR_4)
  return VAR_4;

 return 0;
}
