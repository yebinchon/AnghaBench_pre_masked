
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct super_block {int s_blocksize; int s_bdev; } ;
struct ext3_super_block {int s_blocks_count; int s_uuid; int s_feature_incompat; int s_magic; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct block_device {int dummy; } ;
struct TYPE_11__ {TYPE_2__* j_superblock; int j_sb_buffer; struct super_block* j_private; } ;
typedef TYPE_3__ journal_t ;
typedef int ext3_fsblk_t ;
typedef int dev_t ;
struct TYPE_12__ {struct block_device* journal_bdev; TYPE_1__* s_es; } ;
struct TYPE_10__ {int s_nr_users; } ;
struct TYPE_9__ {int s_journal_uuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct buffer_head* FUNC_1 (struct block_device*,int,int) ;
 scalar_t__ FUNC_2 (struct block_device*,struct super_block*) ;
 int FUNC_3 (struct block_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct block_device*,int) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (int ) ;
 struct block_device* FUNC_8 (int ,struct super_block*) ;
 int FUNC_9 (struct block_device*) ;
 int FUNC_10 (struct super_block*,TYPE_3__*) ;
 int FUNC_11 (struct super_block*,int ,char*,...) ;
 int FUNC_12 (TYPE_3__*) ;
 TYPE_3__* FUNC_13 (struct block_device*,int ,int,int,int) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int,int *) ;
 scalar_t__ FUNC_17 (int ,int ,int) ;
 int FUNC_18 (struct block_device*,int) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static journal_t *FUNC_20(struct super_block *VAR_7,
           dev_t VAR_8)
{
 struct buffer_head * VAR_9;
 journal_t *VAR_10;
 ext3_fsblk_t VAR_11;
 ext3_fsblk_t VAR_12;
 int VAR_13, VAR_14;
 ext3_fsblk_t VAR_15;
 unsigned long VAR_16;
 struct ext3_super_block * VAR_17;
 struct block_device *VAR_18;

 VAR_18 = FUNC_8(VAR_8, VAR_7);
 if (VAR_18 == ((void*)0))
  return ((void*)0);

 if (FUNC_2(VAR_18, VAR_7)) {
  FUNC_11(VAR_7, VAR_5,
   "error: failed to claim external journal device");
  FUNC_5(VAR_18, VAR_3|VAR_4);
  return ((void*)0);
 }

 VAR_14 = VAR_7->s_blocksize;
 VAR_13 = FUNC_3(VAR_18);
 if (VAR_14 < VAR_13) {
  FUNC_11(VAR_7, VAR_5,
   "error: blocksize too small for journal device");
  goto out_bdev;
 }

 VAR_15 = VAR_1 / VAR_14;
 VAR_16 = VAR_1 % VAR_14;
 FUNC_18(VAR_18, VAR_14);
 if (!(VAR_9 = FUNC_1(VAR_18, VAR_15, VAR_14))) {
  FUNC_11(VAR_7, VAR_5, "error: couldn't read superblock of "
   "external journal");
  goto out_bdev;
 }

 VAR_17 = (struct ext3_super_block *) (((char *)VAR_9->b_data) + VAR_16);
 if ((FUNC_14(VAR_17->s_magic) != VAR_2) ||
     !(FUNC_15(VAR_17->s_feature_incompat) &
       VAR_0)) {
  FUNC_11(VAR_7, VAR_5, "error: external journal has "
   "bad superblock");
  FUNC_6(VAR_9);
  goto out_bdev;
 }

 if (FUNC_17(FUNC_0(VAR_7)->s_es->s_journal_uuid, VAR_17->s_uuid, 16)) {
  FUNC_11(VAR_7, VAR_5, "error: journal UUID does not match");
  FUNC_6(VAR_9);
  goto out_bdev;
 }

 VAR_12 = FUNC_15(VAR_17->s_blocks_count);
 VAR_11 = VAR_15 + 1;
 FUNC_6(VAR_9);

 VAR_10 = FUNC_13(VAR_18, VAR_7->s_bdev,
     VAR_11, VAR_12, VAR_14);
 if (!VAR_10) {
  FUNC_11(VAR_7, VAR_5,
   "error: failed to create device journal");
  goto out_bdev;
 }
 VAR_10->j_private = VAR_7;
 FUNC_16(VAR_6, 1, &VAR_10->j_sb_buffer);
 FUNC_19(VAR_10->j_sb_buffer);
 if (!FUNC_7(VAR_10->j_sb_buffer)) {
  FUNC_11(VAR_7, VAR_5, "I/O error on journal device");
  goto out_journal;
 }
 if (FUNC_4(VAR_10->j_superblock->s_nr_users) != 1) {
  FUNC_11(VAR_7, VAR_5,
   "error: external journal has more than one "
   "user (unsupported) - %d",
   FUNC_4(VAR_10->j_superblock->s_nr_users));
  goto out_journal;
 }
 FUNC_0(VAR_7)->journal_bdev = VAR_18;
 FUNC_10(VAR_7, VAR_10);
 return VAR_10;
out_journal:
 FUNC_12(VAR_10);
out_bdev:
 FUNC_9(VAR_18);
 return ((void*)0);
}
