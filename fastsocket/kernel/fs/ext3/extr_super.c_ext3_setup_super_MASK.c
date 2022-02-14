
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct ext3_super_block {int s_mtime; int s_mnt_count; int s_max_mnt_count; int s_state; int s_checkinterval; int s_lastcheck; int s_rev_level; } ;
struct ext3_sb_info {int s_mount_state; TYPE_1__* s_journal; int s_mount_opt; int s_groups_count; } ;
typedef scalar_t__ __s16 ;
struct TYPE_2__ {int j_dev; int * j_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct super_block*) ;
 scalar_t__ VAR_5 ;
 struct ext3_sb_info* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct super_block*,struct ext3_super_block*,int) ;
 int FUNC_8 (struct super_block*,int ,char*,...) ;
 int FUNC_9 (struct super_block*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int *,int) ;
 unsigned short FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_15(struct super_block *VAR_11, struct ext3_super_block *VAR_12,
       int VAR_13)
{
 struct ext3_sb_info *VAR_14 = FUNC_2(VAR_11);
 int VAR_15 = 0;

 if (FUNC_13(VAR_12->s_rev_level) > VAR_5) {
  FUNC_8(VAR_11, VAR_7,
   "error: revision level too high, "
   "forcing read-only mode");
  VAR_15 = VAR_10;
 }
 if (VAR_13)
  return VAR_15;
 if (!(VAR_14->s_mount_state & VAR_6))
  FUNC_8(VAR_11, VAR_9,
   "warning: mounting unchecked fs, "
   "running e2fsck is recommended");
 else if ((VAR_14->s_mount_state & VAR_3))
  FUNC_8(VAR_11, VAR_9,
   "warning: mounting fs with errors, "
   "running e2fsck is recommended");
 else if ((__s16) FUNC_12(VAR_12->s_max_mnt_count) >= 0 &&
   FUNC_12(VAR_12->s_mnt_count) >=
   (unsigned short) (__s16) FUNC_12(VAR_12->s_max_mnt_count))
  FUNC_8(VAR_11, VAR_9,
   "warning: maximal mount count reached, "
   "running e2fsck is recommended");
 else if (FUNC_13(VAR_12->s_checkinterval) &&
  (FUNC_13(VAR_12->s_lastcheck) +
   FUNC_13(VAR_12->s_checkinterval) <= FUNC_10()))
  FUNC_8(VAR_11, VAR_9,
   "warning: checktime reached, "
   "running e2fsck is recommended");







 if (!(__s16) FUNC_12(VAR_12->s_max_mnt_count))
  VAR_12->s_max_mnt_count = FUNC_5(VAR_2);
 FUNC_11(&VAR_12->s_mnt_count, 1);
 VAR_12->s_mtime = FUNC_6(FUNC_10());
 FUNC_9(VAR_11);
 FUNC_3(VAR_11, VAR_4);

 FUNC_7(VAR_11, VAR_12, 1);
 if (FUNC_14(VAR_11, VAR_1))
  FUNC_8(VAR_11, VAR_8, "[bs=%lu, gc=%lu, "
    "bpg=%lu, ipg=%lu, mo=%04lx]",
   VAR_11->s_blocksize,
   VAR_14->s_groups_count,
   FUNC_0(VAR_11),
   FUNC_1(VAR_11),
   VAR_14->s_mount_opt);

 if (FUNC_2(VAR_11)->s_journal->j_inode == ((void*)0)) {
  char VAR_16[VAR_0];
  FUNC_8(VAR_11, VAR_8, "using external journal on %s",
   FUNC_4(FUNC_2(VAR_11)->s_journal->j_dev, VAR_16));
 } else {
  FUNC_8(VAR_11, VAR_8, "using internal journal");
 }
 return VAR_15;
}
