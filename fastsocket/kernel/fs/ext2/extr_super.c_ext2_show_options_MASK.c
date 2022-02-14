
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {struct super_block* mnt_sb; } ;
struct super_block {int dummy; } ;
struct seq_file {int dummy; } ;
struct ext2_super_block {int s_errors; int s_def_resgid; int s_def_resuid; int s_default_mount_opts; } ;
struct ext2_sb_info {int s_sb_block; int s_resuid; int s_resgid; int s_mount_opt; struct ext2_super_block* s_es; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct ext2_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,int) ;
 int FUNC_4 (struct seq_file*,char*) ;
 scalar_t__ FUNC_5 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_22, struct vfsmount *VAR_23)
{
 struct super_block *VAR_24 = VAR_23->mnt_sb;
 struct ext2_sb_info *VAR_25 = FUNC_0(VAR_24);
 struct ext2_super_block *VAR_26 = VAR_25->s_es;
 unsigned long VAR_27;

 VAR_27 = FUNC_2(VAR_26->s_default_mount_opts);

 if (VAR_25->s_sb_block != 1)
  FUNC_3(VAR_22, ",sb=%lu", VAR_25->s_sb_block);
 if (FUNC_5(VAR_24, VAR_15))
  FUNC_4(VAR_22, ",minixdf");
 if (FUNC_5(VAR_24, VAR_14))
  FUNC_4(VAR_22, ",grpid");
 if (!FUNC_5(VAR_24, VAR_14) && (VAR_27 & VAR_5))
  FUNC_4(VAR_22, ",nogrpid");
 if (VAR_25->s_resuid != VAR_8 ||
     FUNC_1(VAR_26->s_def_resuid) != VAR_8) {
  FUNC_3(VAR_22, ",resuid=%u", VAR_25->s_resuid);
 }
 if (VAR_25->s_resgid != VAR_7 ||
     FUNC_1(VAR_26->s_def_resgid) != VAR_7) {
  FUNC_3(VAR_22, ",resgid=%u", VAR_25->s_resgid);
 }
 if (FUNC_5(VAR_24, VAR_3)) {
  int VAR_28 = FUNC_1(VAR_26->s_errors);

  if (VAR_28 == VAR_10 ||
      VAR_28 == VAR_9) {
   FUNC_4(VAR_22, ",errors=remount-ro");
  }
 }
 if (FUNC_5(VAR_24, VAR_1))
  FUNC_4(VAR_22, ",errors=continue");
 if (FUNC_5(VAR_24, VAR_2))
  FUNC_4(VAR_22, ",errors=panic");
 if (FUNC_5(VAR_24, VAR_17))
  FUNC_4(VAR_22, ",nouid32");
 if (FUNC_5(VAR_24, VAR_0))
  FUNC_4(VAR_22, ",debug");
 if (FUNC_5(VAR_24, VAR_18))
  FUNC_4(VAR_22, ",oldalloc");
 if (FUNC_5(VAR_24, VAR_16))
  FUNC_4(VAR_22, ",nobh");
 if (!FUNC_5(VAR_24, VAR_20))
  FUNC_4(VAR_22, ",noreservation");

 return 0;
}
