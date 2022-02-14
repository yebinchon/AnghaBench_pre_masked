
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_state; int i_mapping; } ;
struct file {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,int) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct file *VAR_2, struct dentry *VAR_3, int VAR_4)
{
 struct inode *VAR_5 = VAR_3->d_inode;
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5->i_mapping);
 if (!(VAR_5->i_state & VAR_0))
  return VAR_7;
 if (VAR_4 && !(VAR_5->i_state & VAR_1))
  return VAR_7;

 VAR_6 = FUNC_0(VAR_5, 1);
 if (VAR_7 == 0)
  VAR_7 = VAR_6;
 return VAR_7;
}
