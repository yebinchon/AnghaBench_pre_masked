
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mb_cache_entry {int dummy; } ;
struct inode {int i_ino; int i_sb; } ;
struct buffer_head {int b_blocknr; int b_bdev; int b_count; } ;
struct TYPE_4__ {int xattr_sem; scalar_t__ i_file_acl; } ;
struct TYPE_3__ {scalar_t__ h_magic; scalar_t__ h_blocks; scalar_t__ h_refcount; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct buffer_head*,char*,int ) ;
 int FUNC_9 (int ,char*,char*,int ,scalar_t__) ;
 int FUNC_10 (struct inode*,scalar_t__,int) ;
 int VAR_1 ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (scalar_t__*,int) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (struct mb_cache_entry*) ;
 struct mb_cache_entry* FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (struct mb_cache_entry*) ;
 struct buffer_head* FUNC_19 (int ,scalar_t__) ;
 int FUNC_20 (struct buffer_head*) ;
 int FUNC_21 (struct buffer_head*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct inode*,int) ;

void
FUNC_24(struct inode *VAR_2)
{
 struct buffer_head *VAR_3 = ((void*)0);
 struct mb_cache_entry *VAR_4;

 FUNC_7(&FUNC_0(VAR_2)->xattr_sem);
 if (!FUNC_0(VAR_2)->i_file_acl)
  goto cleanup;
 VAR_3 = FUNC_19(VAR_2->i_sb, FUNC_0(VAR_2)->i_file_acl);
 if (!VAR_3) {
  FUNC_9(VAR_2->i_sb, "ext2_xattr_delete_inode",
   "inode %ld: block %d read error", VAR_2->i_ino,
   FUNC_0(VAR_2)->i_file_acl);
  goto cleanup;
 }
 FUNC_8(VAR_3, "b_count=%d", FUNC_3(&(VAR_3->b_count)));
 if (FUNC_1(VAR_3)->h_magic != FUNC_6(VAR_0) ||
     FUNC_1(VAR_3)->h_blocks != FUNC_6(1)) {
  FUNC_9(VAR_2->i_sb, "ext2_xattr_delete_inode",
   "inode %ld: bad block %d", VAR_2->i_ino,
   FUNC_0(VAR_2)->i_file_acl);
  goto cleanup;
 }
 VAR_4 = FUNC_17(VAR_1, VAR_3->b_bdev, VAR_3->b_blocknr);
 FUNC_14(VAR_3);
 if (FUNC_1(VAR_3)->h_refcount == FUNC_6(1)) {
  if (VAR_4)
   FUNC_16(VAR_4);
  FUNC_10(VAR_2, FUNC_0(VAR_2)->i_file_acl, 1);
  FUNC_11(VAR_3);
  FUNC_4(VAR_3);
  FUNC_21(VAR_3);
 } else {
  FUNC_12(&FUNC_1(VAR_3)->h_refcount, -1);
  if (VAR_4)
   FUNC_18(VAR_4);
  FUNC_8(VAR_3, "refcount now=%d",
   FUNC_13(FUNC_1(VAR_3)->h_refcount));
  FUNC_21(VAR_3);
  FUNC_15(VAR_3);
  if (FUNC_2(VAR_2))
   FUNC_20(VAR_3);
  FUNC_23(VAR_2, 1);
 }
 FUNC_0(VAR_2)->i_file_acl = 0;

cleanup:
 FUNC_5(VAR_3);
 FUNC_22(&FUNC_0(VAR_2)->xattr_sem);
}
