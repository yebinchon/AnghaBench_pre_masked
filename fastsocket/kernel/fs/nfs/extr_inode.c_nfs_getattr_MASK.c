
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int mnt_flags; } ;
struct kstat {int ino; } ;
struct inode {int i_mode; int i_mapping; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int cache_validity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,struct inode*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,struct kstat*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct inode*) ;

int FUNC_10(struct vfsmount *VAR_3, struct dentry *VAR_4, struct kstat *VAR_5)
{
 struct inode *VAR_6 = VAR_4->d_inode;
 int VAR_7 = FUNC_1(VAR_6)->cache_validity & VAR_2;
 int VAR_8;


 if (FUNC_4(VAR_6->i_mode)) {
  VAR_8 = FUNC_6(VAR_6->i_mapping);
  if (VAR_8)
   goto out;
 }
  if ((VAR_3->mnt_flags & VAR_0) ||
      ((VAR_3->mnt_flags & VAR_1) && FUNC_3(VAR_6->i_mode)))
  VAR_7 = 0;

 if (VAR_7)
  VAR_8 = FUNC_5(FUNC_2(VAR_6), VAR_6);
 else
  VAR_8 = FUNC_9(FUNC_2(VAR_6), VAR_6);
 if (!VAR_8) {
  FUNC_7(VAR_6, VAR_5);
  VAR_5->ino = FUNC_8(FUNC_0(VAR_6));
 }
out:
 return VAR_8;
}
