
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {struct super_block* mnt_sb; } ;
struct super_block {int dummy; } ;
struct seq_file {int dummy; } ;
struct ext3_super_block {int s_errors; int s_def_resgid; int s_def_resuid; int s_default_mount_opts; } ;
struct ext3_sb_info {int s_sb_block; int s_resuid; int s_resgid; int s_commit_interval; int s_mount_opt; struct ext3_super_block* s_es; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct ext3_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (struct seq_file*,struct super_block*) ;
 int FUNC_3 (int ) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (struct seq_file*,char*,unsigned int) ;
 int FUNC_6 (struct seq_file*,char*) ;
 scalar_t__ FUNC_7 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_23, struct vfsmount *VAR_24)
{
 struct super_block *VAR_25 = VAR_24->mnt_sb;
 struct ext3_sb_info *VAR_26 = FUNC_0(VAR_25);
 struct ext3_super_block *VAR_27 = VAR_26->s_es;
 unsigned long VAR_28;

 VAR_28 = FUNC_4(VAR_27->s_default_mount_opts);

 if (VAR_26->s_sb_block != 1)
  FUNC_5(VAR_23, ",sb=%lu", VAR_26->s_sb_block);
 if (FUNC_7(VAR_25, VAR_16))
  FUNC_6(VAR_23, ",minixdf");
 if (FUNC_7(VAR_25, VAR_14))
  FUNC_6(VAR_23, ",grpid");
 if (!FUNC_7(VAR_25, VAR_14) && (VAR_28 & VAR_7))
  FUNC_6(VAR_23, ",nogrpid");
 if (VAR_26->s_resuid != VAR_10 ||
     FUNC_3(VAR_27->s_def_resuid) != VAR_10) {
  FUNC_5(VAR_23, ",resuid=%u", VAR_26->s_resuid);
 }
 if (VAR_26->s_resgid != VAR_9 ||
     FUNC_3(VAR_27->s_def_resgid) != VAR_9) {
  FUNC_5(VAR_23, ",resgid=%u", VAR_26->s_resgid);
 }
 if (FUNC_7(VAR_25, VAR_5)) {
  int VAR_29 = FUNC_3(VAR_27->s_errors);

  if (VAR_29 == VAR_12 ||
      VAR_29 == VAR_11) {
   FUNC_6(VAR_23, ",errors=remount-ro");
  }
 }
 if (FUNC_7(VAR_25, VAR_3))
  FUNC_6(VAR_23, ",errors=continue");
 if (FUNC_7(VAR_25, VAR_4))
  FUNC_6(VAR_23, ",errors=panic");
 if (FUNC_7(VAR_25, VAR_18))
  FUNC_6(VAR_23, ",nouid32");
 if (FUNC_7(VAR_25, VAR_2))
  FUNC_6(VAR_23, ",debug");
 if (FUNC_7(VAR_25, VAR_19))
  FUNC_6(VAR_23, ",oldalloc");
 if (!FUNC_7(VAR_25, VAR_21))
  FUNC_6(VAR_23, ",noreservation");
 if (VAR_26->s_commit_interval) {
  FUNC_5(VAR_23, ",commit=%u",
      (unsigned) (VAR_26->s_commit_interval / VAR_15));
 }






 FUNC_6(VAR_23, ",barrier=");
 FUNC_6(VAR_23, FUNC_7(VAR_25, VAR_0) ? "1" : "0");
 if (FUNC_7(VAR_25, VAR_17))
  FUNC_6(VAR_23, ",nobh");

 FUNC_5(VAR_23, ",data=%s", FUNC_1(VAR_26->s_mount_opt &
           VAR_13));
 if (FUNC_7(VAR_25, VAR_1))
  FUNC_6(VAR_23, ",data_err=abort");

 FUNC_2(VAR_23, VAR_25);

 return 0;
}
