
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_group_desc {int bg_flags; } ;
struct buffer_head {int dummy; } ;
typedef int ext4_group_t ;
typedef int ext4_fsblk_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_5 (struct super_block*,char*,int ,int ) ;
 struct ext4_group_desc* FUNC_6 (struct super_block*,int ,int *) ;
 int FUNC_7 (struct super_block*,struct buffer_head*,int ,struct ext4_group_desc*) ;
 int FUNC_8 (struct super_block*,int ) ;
 int FUNC_9 (struct super_block*,int ) ;
 int FUNC_10 (struct super_block*,struct ext4_group_desc*,int ,struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;
 struct buffer_head* FUNC_13 (struct super_block*,int ) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct buffer_head*) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (struct buffer_head*) ;

struct buffer_head *
FUNC_18(struct super_block *VAR_1, ext4_group_t VAR_2)
{
 struct ext4_group_desc *VAR_3;
 struct buffer_head *VAR_4 = ((void*)0);
 ext4_fsblk_t VAR_5;

 VAR_3 = FUNC_6(VAR_1, VAR_2, ((void*)0));
 if (!VAR_3)
  return ((void*)0);
 VAR_5 = FUNC_4(VAR_1, VAR_3);
 VAR_4 = FUNC_13(VAR_1, VAR_5);
 if (FUNC_16(!VAR_4)) {
  FUNC_5(VAR_1, "Cannot read block bitmap - "
       "block_group = %u, block_bitmap = %llu",
       VAR_2, VAR_5);
  return ((void*)0);
 }

 if (FUNC_1(VAR_4))
  return VAR_4;

 FUNC_11(VAR_4);
 if (FUNC_1(VAR_4)) {
  FUNC_17(VAR_4);
  return VAR_4;
 }
 FUNC_8(VAR_1, VAR_2);
 if (VAR_3->bg_flags & FUNC_3(VAR_0)) {
  FUNC_7(VAR_1, VAR_4, VAR_2, VAR_3);
  FUNC_14(VAR_4);
  FUNC_15(VAR_4);
  FUNC_9(VAR_1, VAR_2);
  FUNC_17(VAR_4);
  return VAR_4;
 }
 FUNC_9(VAR_1, VAR_2);
 if (FUNC_2(VAR_4)) {




  FUNC_14(VAR_4);
  FUNC_17(VAR_4);
  return VAR_4;
 }






 FUNC_14(VAR_4);
 if (FUNC_0(VAR_4) < 0) {
  FUNC_12(VAR_4);
  FUNC_5(VAR_1, "Cannot read block bitmap - "
       "block_group = %u, block_bitmap = %llu",
       VAR_2, VAR_5);
  return ((void*)0);
 }
 FUNC_10(VAR_1, VAR_3, VAR_2, VAR_4);




 return VAR_4;
}
