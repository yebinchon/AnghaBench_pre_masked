
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {struct dentry* d_parent; int d_inode; } ;


 int FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*,int ,int *) ;
 int FUNC_5 (struct dentry*,struct dentry*) ;
 int FUNC_6 (struct dentry*,struct dentry*) ;
 int FUNC_7 (int ,struct dentry*,int ,struct dentry*) ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_0, struct dentry *VAR_1,
  struct inode *VAR_2, struct dentry *VAR_3)
{
 int VAR_4;
 struct dentry *VAR_5;
 struct dentry *VAR_6;
 struct dentry *VAR_7;
 struct dentry *VAR_8;

 VAR_5 = FUNC_3(VAR_1);
 VAR_6 = FUNC_3(VAR_3);
 FUNC_0(VAR_5);
 FUNC_0(VAR_6);
 VAR_7 = FUNC_1(VAR_5);
 VAR_8 = FUNC_1(VAR_6);
 FUNC_5(VAR_7, VAR_8);
 VAR_4 = FUNC_7(VAR_7->d_inode, VAR_5,
   VAR_8->d_inode, VAR_6);
 if (VAR_4)
  goto out_lock;
 FUNC_4(VAR_2, VAR_8->d_inode, ((void*)0));
 if (VAR_2 != VAR_0)
  FUNC_4(VAR_0, VAR_7->d_inode, ((void*)0));
out_lock:
 FUNC_6(VAR_7, VAR_8);
 FUNC_2(VAR_6->d_parent);
 FUNC_2(VAR_5->d_parent);
 FUNC_2(VAR_6);
 FUNC_2(VAR_5);
 return VAR_4;
}
