
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msdos_sb_info {int inode_hash_lock; struct hlist_head* inode_hashtable; } ;
struct inode {int i_sb; } ;
struct hlist_head {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int i_fat_hash; int i_pos; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct msdos_sb_info* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct hlist_head*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct inode *VAR_0, loff_t VAR_1)
{
 struct msdos_sb_info *VAR_2 = FUNC_1(VAR_0->i_sb);
 struct hlist_head *VAR_3 = VAR_2->inode_hashtable + FUNC_2(VAR_1);

 FUNC_4(&VAR_2->inode_hash_lock);
 FUNC_0(VAR_0)->i_pos = VAR_1;
 FUNC_3(&FUNC_0(VAR_0)->i_fat_hash, VAR_3);
 FUNC_5(&VAR_2->inode_hash_lock);
}
