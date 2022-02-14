
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct dentry {int d_inode; } ;
typedef int dev_t ;


 int FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*,struct dentry*,int ,int ) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,int ) ;
 struct dentry* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (int ,struct dentry*,int,int ) ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_0, struct dentry *VAR_1, int VAR_2, dev_t VAR_3)
{
 int VAR_4;
 struct dentry *VAR_5;
 struct dentry *VAR_6;

 VAR_5 = FUNC_1(VAR_1);
 VAR_6 = FUNC_5(VAR_5);
 VAR_4 = FUNC_7(VAR_6->d_inode, VAR_5, VAR_2, VAR_3);
 if (VAR_4 || !VAR_5->d_inode)
  goto out;
 VAR_4 = FUNC_2(VAR_5, VAR_1, VAR_0->i_sb, 0);
 if (VAR_4)
  goto out;
 FUNC_3(VAR_0, VAR_6->d_inode);
 FUNC_4(VAR_0, VAR_6->d_inode);
out:
 FUNC_6(VAR_6);
 if (!VAR_1->d_inode)
  FUNC_0(VAR_1);
 return VAR_4;
}
