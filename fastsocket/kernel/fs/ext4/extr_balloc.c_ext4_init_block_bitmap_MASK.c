
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct ext4_sb_info {int s_desc_per_block; scalar_t__ s_itb_per_group; TYPE_1__* s_es; } ;
struct ext4_group_desc {int dummy; } ;
struct buffer_head {int b_data; } ;
typedef int ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_2__ {int s_first_data_block; int s_reserved_gdt_blocks; int s_first_meta_bg; } ;


 int FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct super_block*,int ) ;
 struct ext4_sb_info* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct buffer_head*,int ) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct super_block*,int) ;
 scalar_t__ FUNC_6 (struct super_block*,int) ;
 scalar_t__ FUNC_7 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_8 (struct super_block*,scalar_t__,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct super_block*,char*,int) ;
 int FUNC_11 (struct super_block*,struct ext4_group_desc*,int ) ;
 int FUNC_12 (struct super_block*,struct ext4_group_desc*,int ) ;
 int FUNC_13 (struct super_block*) ;
 int FUNC_14 (struct ext4_sb_info*,int,struct ext4_group_desc*) ;
 scalar_t__ FUNC_15 (struct super_block*,int) ;
 int FUNC_16 (struct super_block*,int,struct ext4_group_desc*) ;
 scalar_t__ FUNC_17 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_18 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_19 (struct super_block*,struct ext4_group_desc*,int ) ;
 int FUNC_20 (scalar_t__,int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (unsigned int,int,int ) ;
 int FUNC_24 (int ,int,int) ;

unsigned FUNC_25(struct super_block *VAR_2, struct buffer_head *VAR_3,
   ext4_group_t VAR_4, struct ext4_group_desc *VAR_5)
{
 int VAR_6, VAR_7;
 ext4_group_t VAR_8 = FUNC_13(VAR_2);
 unsigned VAR_9, VAR_10;
 struct ext4_sb_info *VAR_11 = FUNC_2(VAR_2);

 if (VAR_3) {
  FUNC_3(VAR_3, FUNC_4(VAR_3));



  if (!FUNC_14(VAR_11, VAR_4, VAR_5)) {
   FUNC_10(VAR_2, "Checksum bad for group %u",
     VAR_4);
   FUNC_11(VAR_2, VAR_5, 0);
   FUNC_12(VAR_2, VAR_5, 0);
   FUNC_19(VAR_2, VAR_5, 0);
   FUNC_24(VAR_3->b_data, 0xff, VAR_2->s_blocksize);
   return 0;
  }
  FUNC_24(VAR_3->b_data, 0, VAR_2->s_blocksize);
 }


 VAR_7 = FUNC_5(VAR_2, VAR_4);

 if (!FUNC_1(VAR_2, VAR_1) ||
     VAR_4 < FUNC_22(VAR_11->s_es->s_first_meta_bg) *
     VAR_11->s_desc_per_block) {
  if (VAR_7) {
   VAR_7 += FUNC_6(VAR_2, VAR_4);
   VAR_7 +=
    FUNC_21(VAR_11->s_es->s_reserved_gdt_blocks);
  }
 } else {
  VAR_7 += FUNC_6(VAR_2, VAR_4);
 }

 if (VAR_4 == VAR_8 - 1) {





  VAR_10 = FUNC_9(VAR_11->s_es) -
   FUNC_22(VAR_11->s_es->s_first_data_block) -
   (FUNC_0(VAR_2) * (VAR_8 - 1));
 } else {
  VAR_10 = FUNC_0(VAR_2);
 }

 VAR_9 = VAR_10 - VAR_7;

 if (VAR_3) {
  ext4_fsblk_t VAR_12, VAR_13;
  int VAR_14 = 0;

  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
   FUNC_20(VAR_6, VAR_3->b_data);

  VAR_12 = FUNC_15(VAR_2, VAR_4);

  if (FUNC_1(VAR_2,
           VAR_0))
   VAR_14 = 1;


  VAR_13 = FUNC_7(VAR_2, VAR_5);
  if (!VAR_14 || FUNC_8(VAR_2, VAR_13, VAR_4))
   FUNC_20(VAR_13 - VAR_12, VAR_3->b_data);

  VAR_13 = FUNC_17(VAR_2, VAR_5);
  if (!VAR_14 || FUNC_8(VAR_2, VAR_13, VAR_4))
   FUNC_20(VAR_13 - VAR_12, VAR_3->b_data);

  VAR_13 = FUNC_18(VAR_2, VAR_5);
  for (; VAR_13 < FUNC_18(VAR_2, VAR_5) +
    VAR_11->s_itb_per_group; VAR_13++) {
   if (!VAR_14 ||
    FUNC_8(VAR_2, VAR_13, VAR_4))
    FUNC_20(VAR_13 - VAR_12, VAR_3->b_data);
  }





  FUNC_23(VAR_10, VAR_2->s_blocksize * 8, VAR_3->b_data);
 }
 return VAR_9 - FUNC_16(VAR_2, VAR_4, VAR_5);
}
