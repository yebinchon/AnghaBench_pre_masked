
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shadow_spine {int count; int * nodes; int root; int info; } ;
struct dm_btree_value_type {int dummy; } ;
typedef int dm_block_t ;


 int FUNC_0 (int ,int ,struct dm_btree_value_type*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct shadow_spine *VAR_0, dm_block_t VAR_1,
  struct dm_btree_value_type *VAR_2)
{
 int VAR_3;

 if (VAR_0->count == 2) {
  VAR_3 = FUNC_2(VAR_0->info, VAR_0->nodes[0]);
  if (VAR_3 < 0)
   return VAR_3;
  VAR_0->nodes[0] = VAR_0->nodes[1];
  VAR_0->count--;
 }

 VAR_3 = FUNC_0(VAR_0->info, VAR_1, VAR_2, VAR_0->nodes + VAR_0->count);
 if (!VAR_3) {
  if (!VAR_0->count)
   VAR_0->root = FUNC_1(VAR_0->nodes[0]);

  VAR_0->count++;
 }

 return VAR_3;
}
