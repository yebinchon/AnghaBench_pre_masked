
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_sb {int ino_lock; } ;
struct pohmelfs_inode {int inode_entry; } ;
struct inode {int i_sb; } ;


 struct pohmelfs_inode* FUNC_0 (struct inode*) ;
 struct pohmelfs_sb* FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_0)
{
 struct pohmelfs_sb *VAR_1 = FUNC_1(VAR_0->i_sb);
 struct pohmelfs_inode *VAR_2 = FUNC_0(VAR_0);

 FUNC_4(&VAR_1->ino_lock);
 FUNC_3(&VAR_2->inode_entry);
 FUNC_5(&VAR_1->ino_lock);

 FUNC_2(VAR_0);
}
