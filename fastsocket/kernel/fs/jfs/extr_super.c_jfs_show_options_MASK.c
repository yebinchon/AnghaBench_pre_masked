
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int mnt_sb; } ;
struct seq_file {int dummy; } ;
struct jfs_sb_info {int uid; int gid; int umask; int flag; TYPE_1__* nls_tab; } ;
struct TYPE_2__ {int charset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct jfs_sb_info* FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_5, struct vfsmount *VAR_6)
{
 struct jfs_sb_info *VAR_7 = FUNC_0(VAR_6->mnt_sb);

 if (VAR_7->uid != -1)
  FUNC_1(VAR_5, ",uid=%d", VAR_7->uid);
 if (VAR_7->gid != -1)
  FUNC_1(VAR_5, ",gid=%d", VAR_7->gid);
 if (VAR_7->umask != -1)
  FUNC_1(VAR_5, ",umask=%03o", VAR_7->umask);
 if (VAR_7->flag & VAR_3)
  FUNC_2(VAR_5, ",nointegrity");
 if (VAR_7->nls_tab)
  FUNC_1(VAR_5, ",iocharset=%s", VAR_7->nls_tab->charset);
 if (VAR_7->flag & VAR_0)
  FUNC_1(VAR_5, ",errors=continue");
 if (VAR_7->flag & VAR_1)
  FUNC_1(VAR_5, ",errors=panic");
 return 0;
}
