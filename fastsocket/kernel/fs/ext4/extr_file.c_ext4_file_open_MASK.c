
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int mnt_mountpoint; int mnt_parent; } ;
struct super_block {int s_flags; int s_dirt; } ;
struct path {int dentry; int mnt; } ;
struct inode {struct super_block* i_sb; } ;
struct TYPE_3__ {struct vfsmount* mnt; } ;
struct file {TYPE_1__ f_path; } ;
struct ext4_sb_info {int s_mount_flags; TYPE_2__* s_es; } ;
typedef int buf ;
struct TYPE_4__ {int s_last_mounted; } ;


 int VAR_0 ;
 struct ext4_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 char* FUNC_2 (struct path*,char*,int) ;
 int FUNC_3 (struct inode*,struct file*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (struct path*) ;
 int FUNC_7 (struct path*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct inode * VAR_2, struct file * VAR_3)
{
 struct super_block *VAR_4 = VAR_2->i_sb;
 struct ext4_sb_info *VAR_5 = FUNC_0(VAR_2->i_sb);
 struct vfsmount *VAR_6 = VAR_3->f_path.mnt;
 struct path VAR_7;
 char VAR_8[64], *VAR_9;

 if (FUNC_8(!(VAR_5->s_mount_flags & VAR_0) &&
       !(VAR_4->s_flags & VAR_1))) {
  VAR_5->s_mount_flags |= VAR_0;






  FUNC_5(VAR_8, 0, sizeof(VAR_8));
  VAR_7.mnt = VAR_6->mnt_parent;
  VAR_7.dentry = VAR_6->mnt_mountpoint;
  FUNC_6(&VAR_7);
  VAR_9 = FUNC_2(&VAR_7, VAR_8, sizeof(VAR_8));
  FUNC_7(&VAR_7);
  if (!FUNC_1(VAR_9)) {
   FUNC_4(VAR_5->s_es->s_last_mounted, VAR_9,
          sizeof(VAR_5->s_es->s_last_mounted));
   VAR_4->s_dirt = 1;
  }
 }
 return FUNC_3(VAR_2, VAR_3);
}
