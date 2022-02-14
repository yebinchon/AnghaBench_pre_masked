
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int mnt_sb; } ;
struct seq_file {int dummy; } ;
struct hfs_sb_info {scalar_t__ s_creator; scalar_t__ s_type; int s_file_umask; int s_dir_umask; scalar_t__ s_quiet; TYPE_2__* nls_io; TYPE_1__* nls_disk; int session; int part; int s_gid; int s_uid; } ;
struct TYPE_4__ {int charset; } ;
struct TYPE_3__ {int charset; } ;


 struct hfs_sb_info* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, struct vfsmount *VAR_1)
{
 struct hfs_sb_info *VAR_2 = FUNC_0(VAR_1->mnt_sb);

 if (VAR_2->s_creator != FUNC_1(0x3f3f3f3f))
  FUNC_2(VAR_0, ",creator=%.4s", (char *)&VAR_2->s_creator);
 if (VAR_2->s_type != FUNC_1(0x3f3f3f3f))
  FUNC_2(VAR_0, ",type=%.4s", (char *)&VAR_2->s_type);
 FUNC_2(VAR_0, ",uid=%u,gid=%u", VAR_2->s_uid, VAR_2->s_gid);
 if (VAR_2->s_file_umask != 0133)
  FUNC_2(VAR_0, ",file_umask=%o", VAR_2->s_file_umask);
 if (VAR_2->s_dir_umask != 0022)
  FUNC_2(VAR_0, ",dir_umask=%o", VAR_2->s_dir_umask);
 if (VAR_2->part >= 0)
  FUNC_2(VAR_0, ",part=%u", VAR_2->part);
 if (VAR_2->session >= 0)
  FUNC_2(VAR_0, ",session=%u", VAR_2->session);
 if (VAR_2->nls_disk)
  FUNC_2(VAR_0, ",codepage=%s", VAR_2->nls_disk->charset);
 if (VAR_2->nls_io)
  FUNC_2(VAR_0, ",iocharset=%s", VAR_2->nls_io->charset);
 if (VAR_2->s_quiet)
  FUNC_2(VAR_0, ",quiet");
 return 0;
}
