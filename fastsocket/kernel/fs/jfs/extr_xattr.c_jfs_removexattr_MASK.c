
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tid_t ;
struct jfs_inode_info {int commit_mutex; } ;
struct inode {int i_sb; } ;
struct dentry {struct inode* d_inode; } ;


 struct jfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct inode*,char const*,int *,int ,int ) ;
 int FUNC_2 (struct inode*,char const*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int,struct inode**,int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct dentry *VAR_1, const char *VAR_2)
{
 struct inode *VAR_3 = VAR_1->d_inode;
 struct jfs_inode_info *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;
 tid_t VAR_6;

 if ((VAR_5 = FUNC_2(VAR_3, VAR_2, ((void*)0), 0)))
  return VAR_5;

 VAR_6 = FUNC_5(VAR_3->i_sb, 0);
 FUNC_3(&VAR_4->commit_mutex);
 VAR_5 = FUNC_1(VAR_6, VAR_1->d_inode, VAR_2, ((void*)0), 0, VAR_0);
 if (!VAR_5)
  VAR_5 = FUNC_6(VAR_6, 1, &VAR_3, 0);
 FUNC_7(VAR_6);
 FUNC_4(&VAR_4->commit_mutex);

 return VAR_5;
}
