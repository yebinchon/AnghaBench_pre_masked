
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_nlink; int i_count; int i_ctime; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_3, struct inode *VAR_4,
  struct dentry *VAR_5)
{
 struct inode *VAR_6 = VAR_3->d_inode;

 if (VAR_6->i_nlink >= VAR_2)
  return -VAR_1;

 VAR_6->i_ctime = VAR_0;
 FUNC_2(VAR_6);
 FUNC_0(&VAR_6->i_count);

 return FUNC_1(VAR_5, VAR_6);
}
