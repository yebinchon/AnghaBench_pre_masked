
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct msdos_sb_info {int * inode_hashtable; int inode_hash_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct msdos_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_1)
{
 struct msdos_sb_info *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 FUNC_2(&VAR_2->inode_hash_lock);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(&VAR_2->inode_hashtable[VAR_3]);
}
