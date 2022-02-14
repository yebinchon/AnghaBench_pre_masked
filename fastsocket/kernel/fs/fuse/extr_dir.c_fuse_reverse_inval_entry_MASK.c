
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int dummy; } ;
struct qstr {int dummy; } ;
struct inode {int i_mutex; int i_mode; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct dentry* FUNC_1 (struct inode*) ;
 struct dentry* FUNC_2 (struct dentry*,struct qstr*) ;
 int FUNC_3 (struct dentry*) ;
 int VAR_2 ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*) ;
 struct inode* FUNC_6 (struct super_block*,int ,int ,int *) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct super_block *VAR_3, u64 VAR_4,
        struct qstr *VAR_5)
{
 int VAR_6 = -VAR_1;
 struct inode *VAR_7;
 struct dentry *VAR_8;
 struct dentry *VAR_9;

 VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_2, &VAR_4);
 if (!VAR_7)
  return -VAR_0;

 FUNC_8(&VAR_7->i_mutex);
 if (!FUNC_0(VAR_7->i_mode))
  goto unlock;

 VAR_6 = -VAR_0;
 VAR_8 = FUNC_1(VAR_7);
 if (!VAR_8)
  goto unlock;

 VAR_9 = FUNC_2(VAR_8, VAR_5);
 FUNC_3(VAR_8);
 if (!VAR_9)
  goto unlock;

 FUNC_4(VAR_7);
 FUNC_5(VAR_9);
 FUNC_3(VAR_9);
 VAR_6 = 0;

 unlock:
 FUNC_9(&VAR_7->i_mutex);
 FUNC_7(VAR_7);
 return VAR_6;
}
