
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_mutex; TYPE_3__* i_sb; TYPE_1__* i_op; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_6__ {TYPE_2__* s_type; } ;
struct TYPE_5__ {int fs_flags; } ;
struct TYPE_4__ {int (* rename ) (struct inode*,struct dentry*,struct inode*,struct dentry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*,struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,struct dentry*,struct inode*,struct dentry*) ;
 int FUNC_7 (struct inode*,struct dentry*,struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_2, struct dentry *VAR_3,
       struct inode *VAR_4, struct dentry *VAR_5)
{
 struct inode *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_2(VAR_5);
 VAR_6 = VAR_5->d_inode;
 if (VAR_6)
  FUNC_4(&VAR_6->i_mutex);
 if (FUNC_0(VAR_3)||FUNC_0(VAR_5))
  VAR_7 = -VAR_0;
 else
  VAR_7 = VAR_2->i_op->rename(VAR_2, VAR_3, VAR_4, VAR_5);
 if (!VAR_7) {
  if (!(VAR_2->i_sb->s_type->fs_flags & VAR_1))
   FUNC_1(VAR_3, VAR_5);
 }
 if (VAR_6)
  FUNC_5(&VAR_6->i_mutex);
 FUNC_3(VAR_5);
 return VAR_7;
}
