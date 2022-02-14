
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tid_t ;
struct jfs_inode_info {int commit_mutex; } ;
struct inode {int i_sb; } ;
struct dentry {struct inode* d_inode; } ;


 struct jfs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,struct inode*,char const*,void const*,size_t,int) ;
 int FUNC_2 (struct inode*,char const*,void const*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int,struct inode**,int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct dentry *VAR_0, const char *VAR_1, const void *VAR_2,
   size_t VAR_3, int VAR_4)
{
 struct inode *VAR_5 = VAR_0->d_inode;
 struct jfs_inode_info *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;
 tid_t VAR_8;

 if ((VAR_7 = FUNC_2(VAR_5, VAR_1, VAR_2, VAR_3)))
  return VAR_7;

 if (VAR_2 == ((void*)0)) {
  VAR_2 = "";
  VAR_3 = 0;
 }

 VAR_8 = FUNC_5(VAR_5->i_sb, 0);
 FUNC_3(&VAR_6->commit_mutex);
 VAR_7 = FUNC_1(VAR_8, VAR_0->d_inode, VAR_1, VAR_2, VAR_3,
       VAR_4);
 if (!VAR_7)
  VAR_7 = FUNC_6(VAR_8, 1, &VAR_5, 0);
 FUNC_7(VAR_8);
 FUNC_4(&VAR_6->commit_mutex);

 return VAR_7;
}
