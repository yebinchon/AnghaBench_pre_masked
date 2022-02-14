
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_nlink; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_3__ {int i_nlink; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*,TYPE_1__*) ;
 struct dentry* FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (TYPE_1__*,struct dentry*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_0, struct dentry *VAR_1)
{
 struct dentry *VAR_2;
 struct dentry *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_4(VAR_1);
 FUNC_2(VAR_1);
 VAR_3 = FUNC_6(VAR_2);
 FUNC_2(VAR_2);
 VAR_4 = FUNC_8(VAR_3->d_inode, VAR_2);
 FUNC_3(VAR_2);
 if (!VAR_4)
  FUNC_0(VAR_2);
 FUNC_5(VAR_0, VAR_3->d_inode);
 VAR_0->i_nlink = VAR_3->d_inode->i_nlink;
 FUNC_7(VAR_3);
 if (!VAR_4)
  FUNC_1(VAR_1);
 FUNC_3(VAR_1);
 return VAR_4;
}
