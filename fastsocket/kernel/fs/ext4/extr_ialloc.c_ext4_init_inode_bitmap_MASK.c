
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;
struct ext4_sb_info {int dummy; } ;
struct ext4_group_desc {int dummy; } ;
struct buffer_head {int b_data; } ;
typedef int ext4_group_t ;


 int FUNC_0 (struct super_block*) ;
 struct ext4_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct buffer_head*,int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct super_block*,char*,int ) ;
 int FUNC_5 (struct super_block*,struct ext4_group_desc*,int ) ;
 int FUNC_6 (struct super_block*,struct ext4_group_desc*,int ) ;
 int FUNC_7 (struct ext4_sb_info*,int ,struct ext4_group_desc*) ;
 int FUNC_8 (struct super_block*,struct ext4_group_desc*,int ) ;
 int FUNC_9 (int,int,int ) ;
 int FUNC_10 (int ,int,int) ;

unsigned FUNC_11(struct super_block *VAR_0, struct buffer_head *VAR_1,
    ext4_group_t VAR_2,
    struct ext4_group_desc *VAR_3)
{
 struct ext4_sb_info *VAR_4 = FUNC_1(VAR_0);

 FUNC_2(VAR_1, FUNC_3(VAR_1));



 if (!FUNC_7(VAR_4, VAR_2, VAR_3)) {
  FUNC_4(VAR_0, "Checksum bad for group %u", VAR_2);
  FUNC_5(VAR_0, VAR_3, 0);
  FUNC_6(VAR_0, VAR_3, 0);
  FUNC_8(VAR_0, VAR_3, 0);
  FUNC_10(VAR_1->b_data, 0xff, VAR_0->s_blocksize);
  return 0;
 }

 FUNC_10(VAR_1->b_data, 0, (FUNC_0(VAR_0) + 7) / 8);
 FUNC_9(FUNC_0(VAR_0), VAR_0->s_blocksize * 8,
   VAR_1->b_data);

 return FUNC_0(VAR_0);
}
