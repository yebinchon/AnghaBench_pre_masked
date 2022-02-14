
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_disk_superblock {int held_root; } ;
struct dm_pool_metadata {int bm; } ;
struct dm_block {int dummy; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 struct thin_disk_superblock* FUNC_0 (struct dm_block*) ;
 int FUNC_1 (int ,int ,int *,struct dm_block**) ;
 int FUNC_2 (struct dm_block*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct dm_pool_metadata *VAR_2,
          dm_block_t *VAR_3)
{
 int VAR_4;
 struct thin_disk_superblock *VAR_5;
 struct dm_block *VAR_6;

 VAR_4 = FUNC_1(VAR_2->bm, VAR_0,
       &VAR_1, &VAR_6);
 if (VAR_4)
  return VAR_4;

 VAR_5 = FUNC_0(VAR_6);
 *VAR_3 = FUNC_3(VAR_5->held_root);

 return FUNC_2(VAR_6);
}
