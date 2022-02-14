
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_disk_superblock {int flags; } ;
struct dm_pool_metadata {int root_lock; int flags; } ;
struct dm_block {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct thin_disk_superblock* FUNC_2 (struct dm_block*) ;
 int FUNC_3 (struct dm_block*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dm_pool_metadata*,struct dm_block**) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct dm_pool_metadata *VAR_1)
{
 int VAR_2;
 struct dm_block *VAR_3;
 struct thin_disk_superblock *VAR_4;

 FUNC_4(&VAR_1->root_lock);
 VAR_1->flags |= VAR_0;

 VAR_2 = FUNC_5(VAR_1, &VAR_3);
 if (VAR_2) {
  FUNC_0("couldn't read superblock");
  goto out;
 }

 VAR_4 = FUNC_2(VAR_3);
 VAR_4->flags = FUNC_1(VAR_1->flags);

 FUNC_3(VAR_3);
out:
 FUNC_6(&VAR_1->root_lock);
 return VAR_2;
}
