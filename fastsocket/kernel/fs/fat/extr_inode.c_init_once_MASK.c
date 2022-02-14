
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdos_inode_info {int vfs_inode; int i_fat_hash; int cache_lru; scalar_t__ cache_valid_id; scalar_t__ nr_caches; int cache_lru_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
 struct msdos_inode_info *VAR_2 = (struct msdos_inode_info *)VAR_1;

 FUNC_3(&VAR_2->cache_lru_lock);
 VAR_2->nr_caches = 0;
 VAR_2->cache_valid_id = VAR_0 + 1;
 FUNC_1(&VAR_2->cache_lru);
 FUNC_0(&VAR_2->i_fat_hash);
 FUNC_2(&VAR_2->vfs_inode);
}
