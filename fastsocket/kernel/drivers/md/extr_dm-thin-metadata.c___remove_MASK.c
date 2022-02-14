
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_thin_device {int changed; int mapped_blocks; int id; struct dm_pool_metadata* pmd; } ;
struct dm_pool_metadata {int root; int info; } ;
typedef int dm_block_t ;


 int FUNC_0 (int *,int ,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct dm_thin_device *VAR_0, dm_block_t VAR_1)
{
 int VAR_2;
 struct dm_pool_metadata *VAR_3 = VAR_0->pmd;
 dm_block_t VAR_4[2] = { VAR_0->id, VAR_1 };

 VAR_2 = FUNC_0(&VAR_3->info, VAR_3->root, VAR_4, &VAR_3->root);
 if (VAR_2)
  return VAR_2;

 VAR_0->mapped_blocks--;
 VAR_0->changed = 1;

 return 0;
}
