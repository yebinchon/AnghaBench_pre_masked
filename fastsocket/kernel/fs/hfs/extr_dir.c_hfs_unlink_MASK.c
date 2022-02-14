
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ctime; int i_ino; } ;
struct dentry {int d_name; struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,struct inode*,int *) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct inode *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->d_inode;
 VAR_4 = FUNC_1(VAR_3->i_ino, VAR_1, &VAR_2->d_name);
 if (VAR_4)
  return VAR_4;

 FUNC_0(VAR_3);
 FUNC_2(VAR_3);
 VAR_3->i_ctime = VAR_0;
 FUNC_3(VAR_3);

 return VAR_4;
}
