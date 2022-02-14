
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct inode* driver_data; } ;
struct super_block {struct dentry* s_root; } ;
struct inode {scalar_t__ i_rdev; int i_nlink; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_2__ {int i_mutex; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct super_block* FUNC_8 (struct inode*) ;

void FUNC_9(struct tty_struct *VAR_2)
{
 struct inode *VAR_3 = VAR_2->driver_data;
 struct super_block *VAR_4 = FUNC_8(VAR_3);
 struct dentry *VAR_5 = VAR_4->s_root;
 struct dentry *VAR_6;

 FUNC_0(VAR_3->i_rdev == FUNC_2(VAR_1, VAR_0));

 FUNC_6(&VAR_5->d_inode->i_mutex);

 VAR_6 = FUNC_4(VAR_3);
 if (FUNC_1(VAR_6))
  goto out;

 if (VAR_6) {
  VAR_3->i_nlink--;
  FUNC_3(VAR_6);
  FUNC_5(VAR_6);
 }

 FUNC_5(VAR_6);
out:
 FUNC_7(&VAR_5->d_inode->i_mutex);
}
