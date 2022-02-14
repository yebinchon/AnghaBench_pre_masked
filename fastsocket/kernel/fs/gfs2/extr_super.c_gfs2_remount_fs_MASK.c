
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; struct gfs2_sbd* s_fs_info; } ;
struct gfs2_tune {int gt_statfs_slow; int gt_statfs_quantum; int gt_spin; int gt_quota_quantum; int gt_log_flush_secs; } ;
struct gfs2_args {int ar_statfs_quantum; int ar_quota_quantum; int ar_commit; scalar_t__ ar_nobarrier; scalar_t__ ar_posix_acl; scalar_t__ ar_spectator; int ar_hostdata; int ar_locktable; int ar_lockproto; } ;
struct gfs2_sbd {int sd_flags; struct gfs2_args sd_args; struct gfs2_tune sd_tune; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct gfs2_args*,struct gfs2_args*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct gfs2_sbd*) ;
 int FUNC_3 (struct gfs2_sbd*) ;
 int FUNC_4 (struct gfs2_args*,char*) ;
 int FUNC_5 (struct gfs2_sbd*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int *) ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_9, int *VAR_10, char *VAR_11)
{
 struct gfs2_sbd *VAR_12 = VAR_9->s_fs_info;
 struct gfs2_args VAR_13 = VAR_12->sd_args;
 struct gfs2_tune *VAR_14 = &VAR_12->sd_tune;
 int VAR_15;

 FUNC_7(&VAR_14->gt_spin);
 VAR_13.ar_commit = VAR_14->gt_log_flush_secs;
 VAR_13.ar_quota_quantum = VAR_14->gt_quota_quantum;
 if (VAR_14->gt_statfs_slow)
  VAR_13.ar_statfs_quantum = 0;
 else
  VAR_13.ar_statfs_quantum = VAR_14->gt_statfs_quantum;
 FUNC_8(&VAR_14->gt_spin);
 VAR_15 = FUNC_4(&VAR_13, VAR_11);
 if (VAR_15)
  return VAR_15;


 if (FUNC_9(VAR_13.ar_lockproto, VAR_12->sd_args.ar_lockproto) ||
     FUNC_9(VAR_13.ar_locktable, VAR_12->sd_args.ar_locktable) ||
     FUNC_9(VAR_13.ar_hostdata, VAR_12->sd_args.ar_hostdata))
  return -VAR_0;


 if (FUNC_0(&VAR_13, &VAR_12->sd_args, VAR_8) ||
     FUNC_0(&VAR_13, &VAR_12->sd_args, VAR_4) ||
     FUNC_0(&VAR_13, &VAR_12->sd_args, VAR_6) ||
     FUNC_0(&VAR_13, &VAR_12->sd_args, VAR_5) ||
     FUNC_0(&VAR_13, &VAR_12->sd_args, VAR_7))
  return -VAR_0;

 if (VAR_12->sd_args.ar_spectator)
  *VAR_10 |= VAR_2;

 if ((VAR_9->s_flags ^ *VAR_10) & VAR_2) {
  if (*VAR_10 & VAR_2)
   VAR_15 = FUNC_2(VAR_12);
  else
   VAR_15 = FUNC_3(VAR_12);
  if (VAR_15)
   return VAR_15;
 }

 VAR_12->sd_args = VAR_13;
 if (VAR_12->sd_args.ar_posix_acl)
  VAR_9->s_flags |= VAR_1;
 else
  VAR_9->s_flags &= ~VAR_1;
 if (VAR_12->sd_args.ar_nobarrier)
  FUNC_6(VAR_3, &VAR_12->sd_flags);
 else
  FUNC_1(VAR_3, &VAR_12->sd_flags);
 FUNC_7(&VAR_14->gt_spin);
 VAR_14->gt_log_flush_secs = VAR_13.ar_commit;
 VAR_14->gt_quota_quantum = VAR_13.ar_quota_quantum;
 if (VAR_13.ar_statfs_quantum) {
  VAR_14->gt_statfs_slow = 0;
  VAR_14->gt_statfs_quantum = VAR_13.ar_statfs_quantum;
 }
 else {
  VAR_14->gt_statfs_slow = 1;
  VAR_14->gt_statfs_quantum = 30;
 }
 FUNC_8(&VAR_14->gt_spin);

 FUNC_5(VAR_12);
 return 0;
}
