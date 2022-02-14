
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_ino; scalar_t__ i_size; int i_sb; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {scalar_t__ sb_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct iattr*) ;
 int FUNC_3 (struct inode*,struct iattr*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6(struct dentry *VAR_2, struct iattr *VAR_3)
{
 struct inode *VAR_4 = VAR_2->d_inode;
 int VAR_5 = -VAR_1;

 FUNC_4();
 if (VAR_4->i_ino == FUNC_0(VAR_4->i_sb)->sb_root)
  goto out_unlock;
 if ((VAR_3->ia_valid & VAR_0) && VAR_3->ia_size > VAR_4->i_size)
  goto out_unlock;

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (VAR_5)
  goto out_unlock;

 VAR_5 = FUNC_3(VAR_4, VAR_3);
 if (VAR_5)
  goto out_unlock;

 FUNC_1(VAR_4);

 out_unlock:
 FUNC_5();
 return VAR_5;
}
