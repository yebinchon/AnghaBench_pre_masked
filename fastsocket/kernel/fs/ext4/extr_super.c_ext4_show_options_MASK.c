
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {struct super_block* mnt_sb; } ;
struct super_block {int dummy; } ;
struct seq_file {int dummy; } ;
struct ext4_super_block {int s_def_resgid; int s_def_resuid; int s_errors; int s_default_mount_opts; } ;
struct ext4_sb_info {int s_sb_block; int s_resuid; int s_resgid; int s_commit_interval; scalar_t__ s_min_batch_time; scalar_t__ s_max_batch_time; int s_stripe; unsigned int s_inode_readahead_blks; scalar_t__ s_li_wait_mult; struct ext4_super_block* s_es; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 struct ext4_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_1 (struct seq_file*,struct super_block*) ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (struct seq_file*,char*,unsigned int) ;
 int FUNC_5 (struct seq_file*,char*) ;
 scalar_t__ FUNC_6 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_43, struct vfsmount *VAR_44)
{
 int VAR_45;
 unsigned long VAR_46;
 struct super_block *VAR_47 = VAR_44->mnt_sb;
 struct ext4_sb_info *VAR_48 = FUNC_0(VAR_47);
 struct ext4_super_block *VAR_49 = VAR_48->s_es;

 VAR_46 = FUNC_3(VAR_49->s_default_mount_opts);
 VAR_45 = FUNC_2(VAR_49->s_errors);

 if (VAR_48->s_sb_block != 1)
  FUNC_4(VAR_43, ",sb=%llu", VAR_48->s_sb_block);
 if (FUNC_6(VAR_47, VAR_35))
  FUNC_5(VAR_43, ",minixdf");
 if (FUNC_6(VAR_47, VAR_29) && !(VAR_46 & VAR_12))
  FUNC_5(VAR_43, ",grpid");
 if (!FUNC_6(VAR_47, VAR_29) && (VAR_46 & VAR_12))
  FUNC_5(VAR_43, ",nogrpid");
 if (VAR_48->s_resuid != VAR_23 ||
     FUNC_2(VAR_49->s_def_resuid) != VAR_23) {
  FUNC_4(VAR_43, ",resuid=%u", VAR_48->s_resuid);
 }
 if (VAR_48->s_resgid != VAR_22 ||
     FUNC_2(VAR_49->s_def_resgid) != VAR_22) {
  FUNC_4(VAR_43, ",resgid=%u", VAR_48->s_resgid);
 }
 if (FUNC_6(VAR_47, VAR_9)) {
  if (VAR_45 == VAR_25 ||
      VAR_45 == VAR_24) {
   FUNC_5(VAR_43, ",errors=remount-ro");
  }
 }
 if (FUNC_6(VAR_47, VAR_7) && VAR_45 != VAR_24)
  FUNC_5(VAR_43, ",errors=continue");
 if (FUNC_6(VAR_47, VAR_8) && VAR_45 != VAR_25)
  FUNC_5(VAR_43, ",errors=panic");
 if (FUNC_6(VAR_47, VAR_39) && !(VAR_46 & VAR_16))
  FUNC_5(VAR_43, ",nouid32");
 if (FUNC_6(VAR_47, VAR_4) && !(VAR_46 & VAR_13))
  FUNC_5(VAR_43, ",debug");
 if (FUNC_6(VAR_47, VAR_40))
  FUNC_5(VAR_43, ",oldalloc");
 if (VAR_48->s_commit_interval != VAR_33*VAR_30) {
  FUNC_4(VAR_43, ",commit=%u",
      (unsigned) (VAR_48->s_commit_interval / VAR_30));
 }
 if (VAR_48->s_min_batch_time != VAR_21) {
  FUNC_4(VAR_43, ",min_batch_time=%u",
      (unsigned) VAR_48->s_min_batch_time);
 }
 if (VAR_48->s_max_batch_time != VAR_20) {
  FUNC_4(VAR_43, ",max_batch_time=%u",
      (unsigned) VAR_48->s_min_batch_time);
 }






 FUNC_5(VAR_43, ",barrier=");
 FUNC_5(VAR_43, FUNC_6(VAR_47, VAR_0) ? "1" : "0");
 if (FUNC_6(VAR_47, VAR_34))
  FUNC_5(VAR_43, ",journal_async_commit");
 if (FUNC_6(VAR_47, VAR_36))
  FUNC_5(VAR_43, ",nobh");
 if (FUNC_6(VAR_47, VAR_32))
  FUNC_5(VAR_43, ",i_version");
 if (!FUNC_6(VAR_47, VAR_5) &&
     !(VAR_46 & VAR_15))
  FUNC_5(VAR_43, ",nodelalloc");

 if (VAR_48->s_stripe)
  FUNC_4(VAR_43, ",stripe=%lu", VAR_48->s_stripe);




 if (FUNC_6(VAR_47, VAR_3) == VAR_26)
  FUNC_5(VAR_43, ",data=journal");
 else if (FUNC_6(VAR_47, VAR_3) == VAR_27)
  FUNC_5(VAR_43, ",data=ordered");
 else if (FUNC_6(VAR_47, VAR_3) == VAR_28)
  FUNC_5(VAR_43, ",data=writeback");

 if (VAR_48->s_inode_readahead_blks != VAR_18)
  FUNC_4(VAR_43, ",inode_readahead_blks=%u",
      VAR_48->s_inode_readahead_blks);

 if (FUNC_6(VAR_47, VAR_2))
  FUNC_5(VAR_43, ",data_err=abort");

 if (FUNC_6(VAR_47, VAR_38))
  FUNC_5(VAR_43, ",noauto_da_alloc");

 if (FUNC_6(VAR_47, VAR_6) && !(VAR_46 & VAR_14))
  FUNC_5(VAR_43, ",discard");

 if (FUNC_6(VAR_47, VAR_37))
  FUNC_5(VAR_43, ",norecovery");

 if (FUNC_6(VAR_47, VAR_1) &&
     !(VAR_46 & VAR_11))
  FUNC_5(VAR_43, ",block_validity");

 if (!FUNC_6(VAR_47, VAR_31))
  FUNC_5(VAR_43, ",noinit_itable");
 else if (VAR_48->s_li_wait_mult != VAR_19)
  FUNC_4(VAR_43, ",init_itable=%u",
      (unsigned) VAR_48->s_li_wait_mult);

 FUNC_1(VAR_43, VAR_47);

 return 0;
}
