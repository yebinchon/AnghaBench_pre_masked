
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_group_desc {int dummy; } ;
struct buffer_head {int b_data; } ;
typedef scalar_t__ ext4_grpblk_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_2__ {scalar_t__ s_itb_per_group; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_3 (struct super_block*,char*,unsigned int,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct super_block*,unsigned int) ;
 scalar_t__ FUNC_6 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_7 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_8 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_9(struct super_block *VAR_1,
     struct ext4_group_desc *VAR_2,
     unsigned int VAR_3,
     struct buffer_head *VAR_4)
{
 ext4_grpblk_t VAR_5;
 ext4_grpblk_t VAR_6;
 ext4_fsblk_t VAR_7;
 ext4_fsblk_t VAR_8;

 if (FUNC_0(VAR_1, VAR_0)) {






  return 1;
 }
 VAR_8 = FUNC_5(VAR_1, VAR_3);


 VAR_7 = FUNC_2(VAR_1, VAR_2);
 VAR_5 = VAR_7 - VAR_8;
 if (!FUNC_8(VAR_5, VAR_4->b_data))

  goto err_out;


 VAR_7 = FUNC_6(VAR_1, VAR_2);
 VAR_5 = VAR_7 - VAR_8;
 if (!FUNC_8(VAR_5, VAR_4->b_data))

  goto err_out;


 VAR_7 = FUNC_7(VAR_1, VAR_2);
 VAR_5 = VAR_7 - VAR_8;
 VAR_6 = FUNC_4(VAR_4->b_data,
    VAR_5 + FUNC_1(VAR_1)->s_itb_per_group,
    VAR_5);
 if (VAR_6 >= VAR_5 + FUNC_1(VAR_1)->s_itb_per_group)

  return 1;

err_out:
 FUNC_3(VAR_1, "Invalid block bitmap - block_group = %d, block = %llu",
   VAR_3, VAR_7);
 return 0;
}
