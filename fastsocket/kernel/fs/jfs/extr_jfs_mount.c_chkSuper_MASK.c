
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; } ;
struct jfs_superblock {int s_version; int s_bsize; int s_flag; int s_state; int s_logdev; int s_ait2; int s_fsckpxd; int s_loguuid; int s_uuid; int s_logpxd; int s_l2bsize; int s_aim2; int s_size; int s_magic; } ;
struct jfs_sb_info {int mntflag; int bsize; int l2bsize; int nbperpage; int ait2; int fsckpxd; int loguuid; int uuid; int logdev; int logpxd; scalar_t__ l2niperblk; scalar_t__ l2nbperpage; scalar_t__ state; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int s64 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct jfs_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,scalar_t__,scalar_t__,unsigned long long) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct super_block*,struct buffer_head**) ;
 scalar_t__ FUNC_13 (int ,int ,int) ;

__attribute__((used)) static int FUNC_14(struct super_block *VAR_11)
{
 int VAR_12 = 0;
 struct jfs_sb_info *VAR_13 = FUNC_0(VAR_11);
 struct jfs_superblock *VAR_14;
 struct buffer_head *VAR_15;
 int VAR_16, VAR_17;
 int VAR_18, VAR_19;
 s64 VAR_20, VAR_21, VAR_22;
 s64 VAR_23, VAR_24;
 s32 VAR_25;

 if ((VAR_12 = FUNC_12(VAR_11, &VAR_15)))
  return VAR_12;
 VAR_14 = (struct jfs_superblock *)VAR_15->b_data;





 if (FUNC_13(VAR_14->s_magic, VAR_5, 4) ||
     FUNC_7(VAR_14->s_version) > VAR_6) {
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_25 = FUNC_7(VAR_14->s_bsize);
 FUNC_5("superblock: flag:0x%08x state:0x%08x size:0x%Lx",
   FUNC_7(VAR_14->s_flag), FUNC_7(VAR_14->s_state),
   (unsigned long long) FUNC_8(VAR_14->s_size));


 if ((VAR_14->s_flag & FUNC_3(VAR_2)) !=
     FUNC_3(VAR_2)) {
  VAR_18 = 2 * VAR_10;
  VAR_16 = FUNC_9(&(VAR_14->s_aim2)) * VAR_25;
  VAR_19 = 4 * VAR_10;
  VAR_17 = FUNC_9(&(VAR_14->s_ait2)) * VAR_25;
  VAR_20 = FUNC_1(&(VAR_14->s_aim2)) * VAR_25;
  VAR_21 = FUNC_1(&(VAR_14->s_ait2)) * VAR_25;
  VAR_23 = VAR_21 - VAR_20;
  VAR_22 = FUNC_1(&(VAR_14->s_fsckpxd)) * VAR_25;
  VAR_24 = VAR_22 - VAR_21;
  if ((VAR_16 != VAR_18) ||
      (VAR_17 != VAR_19) ||
      (VAR_23 != VAR_16) ||
      (VAR_24 <= VAR_17))
   VAR_14->s_flag |= FUNC_3(VAR_2);
 }

 if ((VAR_14->s_flag & FUNC_3(VAR_3)) !=
     FUNC_3(VAR_3))
  VAR_14->s_flag |= FUNC_3(VAR_3);


 if (VAR_14->s_state != FUNC_3(VAR_1) &&
     !(VAR_11->s_flags & VAR_9)) {
  FUNC_4("jfs_mount: Mount Failure: File System Dirty.");
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_13->state = FUNC_7(VAR_14->s_state);
 VAR_13->mntflag = FUNC_7(VAR_14->s_flag);





 VAR_13->bsize = VAR_25;
 VAR_13->l2bsize = FUNC_6(VAR_14->s_l2bsize);





 VAR_13->nbperpage = VAR_10 >> VAR_13->l2bsize;
 VAR_13->l2nbperpage = VAR_8 - VAR_13->l2bsize;
 VAR_13->l2niperblk = VAR_13->l2bsize - VAR_7;
 if (VAR_13->mntflag & VAR_4)
  VAR_13->logpxd = VAR_14->s_logpxd;
 else {
  VAR_13->logdev = FUNC_11(FUNC_7(VAR_14->s_logdev));
  FUNC_10(VAR_13->uuid, VAR_14->s_uuid, sizeof(VAR_13->uuid));
  FUNC_10(VAR_13->loguuid, VAR_14->s_loguuid, sizeof(VAR_13->uuid));
 }
 VAR_13->fsckpxd = VAR_14->s_fsckpxd;
 VAR_13->ait2 = VAR_14->s_ait2;

      out:
 FUNC_2(VAR_15);
 return VAR_12;
}
