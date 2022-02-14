
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_sb; } ;
struct seq_file {int dummy; } ;
struct pts_mount_opts {int ptmxmode; int mode; int gid; scalar_t__ setgid; int uid; scalar_t__ setuid; } ;
struct pts_fs_info {struct pts_mount_opts mount_opts; } ;


 struct pts_fs_info* FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, struct vfsmount *VAR_1)
{
 struct pts_fs_info *VAR_2 = FUNC_0(VAR_1->mnt_sb);
 struct pts_mount_opts *VAR_3 = &VAR_2->mount_opts;

 if (VAR_3->setuid)
  FUNC_1(VAR_0, ",uid=%u", VAR_3->uid);
 if (VAR_3->setgid)
  FUNC_1(VAR_0, ",gid=%u", VAR_3->gid);
 FUNC_1(VAR_0, ",mode=%03o", VAR_3->mode);




 return 0;
}
