
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {TYPE_1__* mnt_sb; } ;
struct seq_file {int dummy; } ;
struct hypfs_sb_info {int gid; int uid; } ;
struct TYPE_2__ {struct hypfs_sb_info* s_fs_info; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, struct vfsmount *VAR_1)
{
 struct hypfs_sb_info *VAR_2 = VAR_1->mnt_sb->s_fs_info;

 FUNC_0(VAR_0, ",uid=%u", VAR_2->uid);
 FUNC_0(VAR_0, ",gid=%u", VAR_2->gid);
 return 0;
}
