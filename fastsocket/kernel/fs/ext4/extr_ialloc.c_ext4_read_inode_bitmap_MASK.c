
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
 int FUNC_4 (struct super_block*,char*,int ,int ) ;
 struct ext4_group_desc* FUNC_5 (struct super_block*,int ,int *) ;
 int FUNC_6 (struct super_block*,struct buffer_head*,int ,struct ext4_group_desc*) ;
 int FUNC_7 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_8 (struct super_block*,int ) ;
 int FUNC_9 (struct super_block*,int ) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 struct buffer_head* FUNC_12 (struct super_block*,int ) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (struct buffer_head*) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (struct buffer_head*) ;

__attribute__((used)) static struct buffer_head *
FUNC_17(struct super_block *VAR_1, ext4_group_t VAR_2)
{
 struct ext4_group_desc *VAR_3;
 struct buffer_head *VAR_4 = ((void*)0);
 ext4_fsblk_t VAR_5;

 VAR_3 = FUNC_5(VAR_1, VAR_2, ((void*)0));
 if (!VAR_3)
  return ((void*)0);

 VAR_5 = FUNC_7(VAR_1, VAR_3);
 VAR_4 = FUNC_12(VAR_1, VAR_5);
 if (FUNC_15(!VAR_4)) {
  FUNC_4(VAR_1, "Cannot read inode bitmap - "
       "block_group = %u, inode_bitmap = %llu",
       VAR_2, VAR_5);
  return ((void*)0);
 }
 if (FUNC_1(VAR_4))
  return VAR_4;

 FUNC_10(VAR_4);
 if (FUNC_1(VAR_4)) {
  FUNC_16(VAR_4);
  return VAR_4;
 }

 FUNC_8(VAR_1, VAR_2);
 if (VAR_3->bg_flags & FUNC_3(VAR_0)) {
  FUNC_6(VAR_1, VAR_4, VAR_2, VAR_3);
  FUNC_13(VAR_4);
  FUNC_14(VAR_4);
  FUNC_9(VAR_1, VAR_2);
  FUNC_16(VAR_4);
  return VAR_4;
 }
 FUNC_9(VAR_1, VAR_2);

 if (FUNC_2(VAR_4)) {




  FUNC_13(VAR_4);
  FUNC_16(VAR_4);
  return VAR_4;
 }






 FUNC_13(VAR_4);
 if (FUNC_0(VAR_4) < 0) {
  FUNC_11(VAR_4);
  FUNC_4(VAR_1, "Cannot read inode bitmap - "
       "block_group = %u, inode_bitmap = %llu",
       VAR_2, VAR_5);
  return ((void*)0);
 }
 return VAR_4;
}
