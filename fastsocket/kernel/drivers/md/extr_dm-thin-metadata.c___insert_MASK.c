
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_thin_device {int changed; int mapped_blocks; int id; struct dm_pool_metadata* pmd; } ;
struct dm_pool_metadata {int root; int info; int time; } ;
typedef int dm_block_t ;
typedef int __le64 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *,int *,int *,int*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct dm_thin_device *VAR_0, dm_block_t VAR_1,
      dm_block_t VAR_2)
{
 int VAR_3, VAR_4;
 __le64 VAR_5;
 struct dm_pool_metadata *VAR_6 = VAR_0->pmd;
 dm_block_t VAR_7[2] = { VAR_0->id, VAR_1 };

 VAR_5 = FUNC_1(FUNC_3(VAR_2, VAR_6->time));
 FUNC_0(&VAR_5);

 VAR_3 = FUNC_2(&VAR_6->info, VAR_6->root, VAR_7, &VAR_5,
       &VAR_6->root, &VAR_4);
 if (VAR_3)
  return VAR_3;

 VAR_0->changed = 1;
 if (VAR_4)
  VAR_0->mapped_blocks++;

 return 0;
}
