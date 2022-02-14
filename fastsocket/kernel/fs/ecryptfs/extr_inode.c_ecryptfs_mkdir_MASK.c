
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_nlink; int i_sb; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_4__ {int i_nlink; } ;


 int FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*,struct dentry*,int ,int ) ;
 int FUNC_3 (struct inode*,TYPE_1__*) ;
 int FUNC_4 (struct inode*,TYPE_1__*) ;
 struct dentry* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (TYPE_1__*,struct dentry*,int) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_0, struct dentry *VAR_1, int VAR_2)
{
 int VAR_3;
 struct dentry *VAR_4;
 struct dentry *VAR_5;

 VAR_4 = FUNC_1(VAR_1);
 VAR_5 = FUNC_5(VAR_4);
 VAR_3 = FUNC_7(VAR_5->d_inode, VAR_4, VAR_2);
 if (VAR_3 || !VAR_4->d_inode)
  goto out;
 VAR_3 = FUNC_2(VAR_4, VAR_1, VAR_0->i_sb, 0);
 if (VAR_3)
  goto out;
 FUNC_3(VAR_0, VAR_5->d_inode);
 FUNC_4(VAR_0, VAR_5->d_inode);
 VAR_0->i_nlink = VAR_5->d_inode->i_nlink;
out:
 FUNC_6(VAR_5);
 if (!VAR_1->d_inode)
  FUNC_0(VAR_1);
 return VAR_3;
}
