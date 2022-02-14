
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_sb_info {int s_itb_per_group; } ;
struct ext4_group_desc {int dummy; } ;
typedef int ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 struct ext4_sb_info* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_3 (struct super_block*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_5 (struct super_block*,struct ext4_group_desc*) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_1,
           ext4_group_t VAR_2,
           struct ext4_group_desc *VAR_3)
{
 ext4_fsblk_t VAR_4;
 struct ext4_sb_info *VAR_5 = FUNC_1(VAR_1);

 int VAR_6 = VAR_5->s_itb_per_group + 2;

 if (FUNC_0(VAR_1, VAR_0)) {
  if (!FUNC_3(VAR_1, FUNC_2(VAR_1, VAR_3),
     VAR_2))
   VAR_6--;

  if (!FUNC_3(VAR_1, FUNC_4(VAR_1, VAR_3),
     VAR_2))
   VAR_6--;

  VAR_4 = FUNC_5(VAR_1, VAR_3);
  for (; VAR_4 < FUNC_5(VAR_1, VAR_3) +
    VAR_5->s_itb_per_group; VAR_4++) {
   if (!FUNC_3(VAR_1, VAR_4, VAR_2))
    VAR_6 -= 1;
  }
 }
 return VAR_6;
}
