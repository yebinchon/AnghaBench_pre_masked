
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_expire; struct vfsmount* mnt_master; int mnt_slave; int mnt_share; int mnt_slave_list; struct vfsmount* mnt_parent; int mnt_root; int mnt_mountpoint; struct super_block* mnt_sb; int mnt_flags; scalar_t__ mnt_group_id; int mnt_devname; } ;
struct super_block {int s_active; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct vfsmount*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct vfsmount*) ;
 scalar_t__ FUNC_2 (struct vfsmount*) ;
 struct vfsmount* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct vfsmount*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct vfsmount*) ;
 int FUNC_10 (struct vfsmount*) ;

__attribute__((used)) static struct vfsmount *FUNC_11(struct vfsmount *VAR_5, struct dentry *VAR_6,
     int VAR_7)
{
 struct super_block *VAR_8 = VAR_5->mnt_sb;
 struct vfsmount *VAR_9 = FUNC_3(VAR_5->mnt_devname);

 if (VAR_9) {
  if (VAR_7 & (VAR_4 | VAR_2))
   VAR_9->mnt_group_id = 0;
  else
   VAR_9->mnt_group_id = VAR_5->mnt_group_id;

  if ((VAR_7 & VAR_1) && !VAR_9->mnt_group_id) {
   int VAR_10 = FUNC_9(VAR_9);
   if (VAR_10)
    goto out_free;
  }

  VAR_9->mnt_flags = VAR_5->mnt_flags;
  FUNC_4(&VAR_8->s_active);
  VAR_9->mnt_sb = VAR_8;
  VAR_9->mnt_root = FUNC_5(VAR_6);
  VAR_9->mnt_mountpoint = VAR_9->mnt_root;
  VAR_9->mnt_parent = VAR_9;

  if (VAR_7 & VAR_4) {
   FUNC_7(&VAR_9->mnt_slave, &VAR_5->mnt_slave_list);
   VAR_9->mnt_master = VAR_5;
   FUNC_0(VAR_9);
  } else if (!(VAR_7 & VAR_2)) {
   if ((VAR_7 & VAR_3) || FUNC_1(VAR_5))
    FUNC_7(&VAR_9->mnt_share, &VAR_5->mnt_share);
   if (FUNC_2(VAR_5))
    FUNC_7(&VAR_9->mnt_slave, &VAR_5->mnt_slave);
   VAR_9->mnt_master = VAR_5->mnt_master;
  }
  if (VAR_7 & VAR_1)
   FUNC_10(VAR_9);



  if (VAR_7 & VAR_0) {
   if (!FUNC_8(&VAR_5->mnt_expire))
    FUNC_7(&VAR_9->mnt_expire, &VAR_5->mnt_expire);
  }
 }
 return VAR_9;

 out_free:
 FUNC_6(VAR_9);
 return ((void*)0);
}
