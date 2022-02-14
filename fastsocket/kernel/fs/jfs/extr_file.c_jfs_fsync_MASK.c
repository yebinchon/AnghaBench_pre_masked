
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_state; int i_sb; } ;
struct file {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct file *VAR_3, struct dentry *VAR_4, int VAR_5)
{
 struct inode *VAR_6 = VAR_4->d_inode;
 int VAR_7 = 0;

 if (!(VAR_6->i_state & VAR_1) ||
     (VAR_5 && !(VAR_6->i_state & VAR_2))) {

  FUNC_2(FUNC_0(VAR_6->i_sb)->log, 1);
  return VAR_7;
 }

 VAR_7 |= FUNC_1(VAR_6, 1);

 return VAR_7 ? -VAR_0 : 0;
}
