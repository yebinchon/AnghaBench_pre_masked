
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_space_info {int lock; int * block_groups; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

u64 FUNC_4(struct btrfs_space_info *VAR_1)
{
 int VAR_2;
 u64 VAR_3 = 0;

 FUNC_2(&VAR_1->lock);

 for(VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (!FUNC_1(&VAR_1->block_groups[VAR_2]))
   VAR_3 += FUNC_0(
      &VAR_1->block_groups[VAR_2]);

 FUNC_3(&VAR_1->lock);

 return VAR_3;
}
