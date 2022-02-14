
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ro_spine {int dummy; } ;
struct dm_btree_info {int levels; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 int FUNC_0 (struct ro_spine*) ;
 int FUNC_1 (struct ro_spine*,int ,int *,int *) ;
 int FUNC_2 (struct ro_spine*,struct dm_btree_info*) ;

int FUNC_3(struct dm_btree_info *VAR_1, dm_block_t VAR_2,
         uint64_t *VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0, VAR_6;
 struct ro_spine VAR_7;

 FUNC_2(&VAR_7, VAR_1);
 for (VAR_6 = 0; VAR_6 < VAR_1->levels; VAR_6++) {
  VAR_4 = FUNC_1(&VAR_7, VAR_2, VAR_3 + VAR_6,
         VAR_6 == VAR_1->levels - 1 ? ((void*)0) : &VAR_2);
  if (VAR_4 == -VAR_0) {
   VAR_4 = 0;
   break;

  } else if (VAR_4)
   break;

  VAR_5++;
 }
 FUNC_0(&VAR_7);

 return VAR_4 ? VAR_4 : VAR_5;
}
