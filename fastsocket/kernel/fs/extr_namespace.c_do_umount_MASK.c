
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vfsmount {int mnt_list; int mnt_expiry_mark; int mnt_count; struct super_block* mnt_sb; } ;
struct super_block {int s_flags; int s_umount; TYPE_1__* s_op; } ;
struct TYPE_8__ {TYPE_3__* fs; } ;
struct TYPE_6__ {struct vfsmount* mnt; } ;
struct TYPE_7__ {TYPE_2__ root; } ;
struct TYPE_5__ {int (* umount_begin ) (struct super_block*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 TYPE_4__* VAR_7 ;
 int FUNC_2 (struct super_block*,int,int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 int VAR_9 ;
 int FUNC_5 (struct vfsmount*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vfsmount*,int) ;
 int FUNC_8 (struct vfsmount*) ;
 int FUNC_9 (struct vfsmount*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct super_block*) ;
 int VAR_10 ;
 int FUNC_13 (struct vfsmount*,int,int *) ;
 int FUNC_14 (int *) ;
 int VAR_11 ;
 int FUNC_15 (int *,int) ;

__attribute__((used)) static int FUNC_16(struct vfsmount *VAR_12, int VAR_13)
{
 struct super_block *VAR_14 = VAR_12->mnt_sb;
 int VAR_15;
 FUNC_0(VAR_10);

 VAR_15 = FUNC_7(VAR_12, VAR_13);
 if (VAR_15)
  return VAR_15;







 if (VAR_13 & VAR_4) {
  if (VAR_12 == VAR_7->fs->root.mnt ||
      VAR_13 & (VAR_5 | VAR_3))
   return -VAR_2;

  if (FUNC_1(&VAR_12->mnt_count) != 2)
   return -VAR_1;

  if (!FUNC_15(&VAR_12->mnt_expiry_mark, 1))
   return -VAR_0;
 }
 if (VAR_13 & VAR_5 && VAR_14->s_op->umount_begin) {
  VAR_14->s_op->umount_begin(VAR_14);
 }
 if (VAR_12 == VAR_7->fs->root.mnt && !(VAR_13 & VAR_3)) {




  FUNC_3(&VAR_14->s_umount);
  if (!(VAR_14->s_flags & VAR_6))
   VAR_15 = FUNC_2(VAR_14, VAR_6, ((void*)0), 0);
  FUNC_14(&VAR_14->s_umount);
  return VAR_15;
 }

 FUNC_3(&VAR_9);
 FUNC_10(&VAR_11);
 VAR_8++;

 if (!(VAR_13 & VAR_3))
  FUNC_9(VAR_12, &VAR_10);

 VAR_15 = -VAR_1;
 if (VAR_13 & VAR_3 || !FUNC_5(VAR_12, 2)) {
  if (!FUNC_4(&VAR_12->mnt_list))
   FUNC_13(VAR_12, 1, &VAR_10);
  VAR_15 = 0;
 }
 FUNC_11(&VAR_11);
 if (VAR_15)
  FUNC_8(VAR_12);
 FUNC_14(&VAR_9);
 FUNC_6(&VAR_10);
 return VAR_15;
}
