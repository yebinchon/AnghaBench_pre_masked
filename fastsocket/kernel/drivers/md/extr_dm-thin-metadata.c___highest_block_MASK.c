
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_thin_device {int id; struct dm_pool_metadata* pmd; } ;
struct dm_pool_metadata {int bl_info; int root; int tl_info; } ;
typedef int dm_block_t ;
typedef int __le64 ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int *,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct dm_thin_device *VAR_0, dm_block_t *VAR_1)
{
 int VAR_2;
 __le64 VAR_3;
 dm_block_t VAR_4;
 struct dm_pool_metadata *VAR_5 = VAR_0->pmd;

 VAR_2 = FUNC_1(&VAR_5->tl_info, VAR_5->root, &VAR_0->id, &VAR_3);
 if (VAR_2)
  return VAR_2;

 VAR_4 = FUNC_2(VAR_3);

 return FUNC_0(&VAR_5->bl_info, VAR_4, VAR_1);
}
