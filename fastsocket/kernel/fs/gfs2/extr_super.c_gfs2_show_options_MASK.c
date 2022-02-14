
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int mnt_root; TYPE_1__* mnt_sb; } ;
struct seq_file {int dummy; } ;
struct TYPE_4__ {int gt_log_flush_secs; int gt_statfs_quantum; int gt_quota_quantum; } ;
struct gfs2_args {int ar_quota; int ar_data; int ar_errors; int ar_statfs_percent; scalar_t__ ar_discard; scalar_t__ ar_suiddir; scalar_t__ ar_posix_acl; scalar_t__ ar_upgrade; scalar_t__ ar_debug; scalar_t__ ar_localcaching; scalar_t__ ar_localflocks; scalar_t__ ar_ignore_local_fs; scalar_t__ ar_spectator; scalar_t__* ar_hostdata; scalar_t__* ar_locktable; scalar_t__* ar_lockproto; } ;
struct gfs2_sbd {int sd_flags; TYPE_2__ sd_tune; int sd_master_dir; struct gfs2_args sd_args; } ;
struct TYPE_3__ {struct gfs2_sbd* s_fs_info; } ;


 int VAR_0 ;


 int VAR_1 ;



 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_5, struct vfsmount *VAR_6)
{
 struct gfs2_sbd *VAR_7 = VAR_6->mnt_sb->s_fs_info;
 struct gfs2_args *VAR_8 = &VAR_7->sd_args;
 int VAR_9;

 if (FUNC_0(VAR_6->mnt_root, VAR_7->sd_master_dir))
  FUNC_1(VAR_5, ",meta");
 if (VAR_8->ar_lockproto[0])
  FUNC_1(VAR_5, ",lockproto=%s", VAR_8->ar_lockproto);
 if (VAR_8->ar_locktable[0])
  FUNC_1(VAR_5, ",locktable=%s", VAR_8->ar_locktable);
 if (VAR_8->ar_hostdata[0])
  FUNC_1(VAR_5, ",hostdata=%s", VAR_8->ar_hostdata);
 if (VAR_8->ar_spectator)
  FUNC_1(VAR_5, ",spectator");
 if (VAR_8->ar_ignore_local_fs)
  FUNC_1(VAR_5, ",ignore_local_fs");
 if (VAR_8->ar_localflocks)
  FUNC_1(VAR_5, ",localflocks");
 if (VAR_8->ar_localcaching)
  FUNC_1(VAR_5, ",localcaching");
 if (VAR_8->ar_debug)
  FUNC_1(VAR_5, ",debug");
 if (VAR_8->ar_upgrade)
  FUNC_1(VAR_5, ",upgrade");
 if (VAR_8->ar_posix_acl)
  FUNC_1(VAR_5, ",acl");
 if (VAR_8->ar_quota != VAR_2) {
  char *VAR_10;
  switch (VAR_8->ar_quota) {
  case 129:
   VAR_10 = "off";
   break;
  case 130:
   VAR_10 = "account";
   break;
  case 128:
   VAR_10 = "on";
   break;
  default:
   VAR_10 = "unknown";
   break;
  }
  FUNC_1(VAR_5, ",quota=%s", VAR_10);
 }
 if (VAR_8->ar_suiddir)
  FUNC_1(VAR_5, ",suiddir");
 if (VAR_8->ar_data != VAR_0) {
  char *VAR_11;
  switch (VAR_8->ar_data) {
  case 133:
   VAR_11 = "writeback";
   break;
  case 134:
   VAR_11 = "ordered";
   break;
  default:
   VAR_11 = "unknown";
   break;
  }
  FUNC_1(VAR_5, ",data=%s", VAR_11);
 }
 if (VAR_8->ar_discard)
  FUNC_1(VAR_5, ",discard");
 VAR_9 = VAR_7->sd_tune.gt_log_flush_secs;
 if (VAR_9 != 60)
  FUNC_1(VAR_5, ",commit=%d", VAR_9);
 VAR_9 = VAR_7->sd_tune.gt_statfs_quantum;
 if (VAR_9 != 30)
  FUNC_1(VAR_5, ",statfs_quantum=%d", VAR_9);
 VAR_9 = VAR_7->sd_tune.gt_quota_quantum;
 if (VAR_9 != 60)
  FUNC_1(VAR_5, ",quota_quantum=%d", VAR_9);
 if (VAR_8->ar_statfs_percent)
  FUNC_1(VAR_5, ",statfs_percent=%d", VAR_8->ar_statfs_percent);
 if (VAR_8->ar_errors != VAR_1) {
  const char *VAR_12;

  switch (VAR_8->ar_errors) {
  case 131:
   VAR_12 = "withdraw";
   break;
  case 132:
   VAR_12 = "panic";
   break;
  default:
   VAR_12 = "unknown";
   break;
  }
  FUNC_1(VAR_5, ",errors=%s", VAR_12);
 }
 if (FUNC_2(VAR_4, &VAR_7->sd_flags))
  FUNC_1(VAR_5, ",nobarrier");
 if (FUNC_2(VAR_3, &VAR_7->sd_flags))
  FUNC_1(VAR_5, ",demote_interface_used");
 return 0;
}
