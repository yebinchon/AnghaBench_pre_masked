
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct mb_cache_entry {int dummy; } ;
struct inode {int i_ctime; struct super_block* i_sb; } ;
struct ext2_xattr_header {scalar_t__ h_refcount; } ;
struct buffer_head {int b_blocknr; int b_bdev; int b_size; int b_data; } ;
typedef int ext2_fsblk_t ;
struct TYPE_2__ {int i_file_acl; int i_block_group; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct ext2_xattr_header* FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct buffer_head*,char*,...) ;
 int FUNC_9 (struct inode*,char*,int) ;
 int FUNC_10 (struct inode*,int,int) ;
 int FUNC_11 (struct super_block*,int ) ;
 int FUNC_12 (struct inode*,int ,int*) ;
 int FUNC_13 (struct inode*) ;
 int VAR_4 ;
 struct buffer_head* FUNC_14 (struct inode*,struct ext2_xattr_header*) ;
 int FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (struct super_block*) ;
 int FUNC_17 (struct buffer_head*) ;
 int FUNC_18 (scalar_t__*,int) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (struct buffer_head*) ;
 int FUNC_21 (struct buffer_head*) ;
 int FUNC_22 (struct inode*) ;
 int FUNC_23 (struct mb_cache_entry*) ;
 struct mb_cache_entry* FUNC_24 (int ,int ,int) ;
 int FUNC_25 (struct mb_cache_entry*) ;
 int FUNC_26 (int ,struct ext2_xattr_header*,int ) ;
 struct buffer_head* FUNC_27 (struct super_block*,int) ;
 int FUNC_28 (struct buffer_head*) ;
 int FUNC_29 (struct buffer_head*) ;
 int FUNC_30 (struct buffer_head*) ;
 scalar_t__ FUNC_31 (struct inode*,int) ;
 int FUNC_32 (struct inode*,int) ;

__attribute__((used)) static int
FUNC_33(struct inode *VAR_5, struct buffer_head *VAR_6,
  struct ext2_xattr_header *VAR_7)
{
 struct super_block *VAR_8 = VAR_5->i_sb;
 struct buffer_head *VAR_9 = ((void*)0);
 int VAR_10;

 if (VAR_7) {
  VAR_9 = FUNC_14(VAR_5, VAR_7);
  if (VAR_9) {

   if (VAR_9 == VAR_6) {
    FUNC_8(VAR_9, "keeping this block");
   } else {


    FUNC_8(VAR_9, "reusing block");

    VAR_10 = -VAR_1;
    if (FUNC_31(VAR_5, 1)) {
     FUNC_30(VAR_9);
     goto cleanup;
    }
    FUNC_18(&FUNC_1(VAR_9)->h_refcount, 1);
    FUNC_8(VAR_9, "refcount now=%d",
     FUNC_19(FUNC_1(VAR_9)->h_refcount));
   }
   FUNC_30(VAR_9);
  } else if (VAR_6 && VAR_7 == FUNC_1(VAR_6)) {


   VAR_9 = VAR_6;
   FUNC_17(VAR_9);
   FUNC_15(VAR_9);
  } else {

   ext2_fsblk_t VAR_11 = FUNC_11(VAR_8,
      FUNC_0(VAR_5)->i_block_group);
   int VAR_12 = FUNC_12(VAR_5, VAR_11, &VAR_10);
   if (VAR_10)
    goto cleanup;
   FUNC_9(VAR_5, "creating block %d", VAR_12);

   VAR_9 = FUNC_27(VAR_8, VAR_12);
   if (!VAR_9) {
    FUNC_10(VAR_5, VAR_12, 1);
    VAR_10 = -VAR_2;
    goto cleanup;
   }
   FUNC_20(VAR_9);
   FUNC_26(VAR_9->b_data, VAR_7, VAR_9->b_size);
   FUNC_28(VAR_9);
   FUNC_30(VAR_9);
   FUNC_15(VAR_9);

   FUNC_16(VAR_8);
  }
  FUNC_21(VAR_9);
  if (FUNC_2(VAR_5)) {
   FUNC_29(VAR_9);
   VAR_10 = -VAR_2;
   if (FUNC_5(VAR_9) && !FUNC_6(VAR_9))
    goto cleanup;
  }
 }


 FUNC_0(VAR_5)->i_file_acl = VAR_9 ? VAR_9->b_blocknr : 0;
 VAR_5->i_ctime = VAR_0;
 if (FUNC_2(VAR_5)) {
  VAR_10 = FUNC_13 (VAR_5);



  if (VAR_10 && VAR_10 != -VAR_3) {
   if (VAR_9 && VAR_9 != VAR_6)
    FUNC_32(VAR_5, 1);
   goto cleanup;
  }
 } else
  FUNC_22(VAR_5);

 VAR_10 = 0;
 if (VAR_6 && VAR_6 != VAR_9) {
  struct mb_cache_entry *VAR_13;





  VAR_13 = FUNC_24(VAR_4, VAR_6->b_bdev,
     VAR_6->b_blocknr);
  FUNC_20(VAR_6);
  if (FUNC_1(VAR_6)->h_refcount == FUNC_7(1)) {

   if (VAR_13)
    FUNC_23(VAR_13);
   FUNC_8(VAR_6, "freeing");
   FUNC_10(VAR_5, VAR_6->b_blocknr, 1);


   FUNC_17(VAR_6);
   FUNC_3(VAR_6);
  } else {

   FUNC_18(&FUNC_1(VAR_6)->h_refcount, -1);
   if (VAR_13)
    FUNC_25(VAR_13);
   FUNC_32(VAR_5, 1);
   FUNC_21(VAR_6);
   FUNC_8(VAR_6, "refcount now=%d",
    FUNC_19(FUNC_1(VAR_6)->h_refcount));
  }
  FUNC_30(VAR_6);
 }

cleanup:
 FUNC_4(VAR_9);

 return VAR_10;
}
