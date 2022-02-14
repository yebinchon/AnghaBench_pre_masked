
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {TYPE_3__* i_sb; int i_mutex; int i_flags; TYPE_1__* i_op; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_6__ {TYPE_2__* s_type; } ;
struct TYPE_5__ {int fs_flags; } ;
struct TYPE_4__ {int (* rename ) (struct inode*,struct dentry*,struct inode*,struct dentry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*,struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*,struct dentry*,struct inode*,struct dentry*) ;
 int FUNC_10 (struct inode*,struct dentry*,struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_4, struct dentry *VAR_5,
     struct inode *VAR_6, struct dentry *VAR_7)
{
 int VAR_8 = 0;
 struct inode *VAR_9;





 if (VAR_6 != VAR_4) {
  VAR_8 = FUNC_6(VAR_5->d_inode, VAR_2);
  if (VAR_8)
   return VAR_8;
 }

 VAR_8 = FUNC_9(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_9 = VAR_7->d_inode;
 if (VAR_9) {
  FUNC_7(&VAR_9->i_mutex);
  FUNC_4(VAR_7);
 }
 if (FUNC_0(VAR_5)||FUNC_0(VAR_7))
  VAR_8 = -VAR_0;
 else
  VAR_8 = VAR_4->i_op->rename(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_9) {
  if (!VAR_8)
   VAR_9->i_flags |= VAR_3;
  FUNC_8(&VAR_9->i_mutex);
  if (FUNC_3(VAR_7))
   FUNC_2(VAR_7);
  FUNC_5(VAR_7);
 }
 if (!VAR_8)
  if (!(VAR_4->i_sb->s_type->fs_flags & VAR_1))
   FUNC_1(VAR_5,VAR_7);
 return VAR_8;
}
