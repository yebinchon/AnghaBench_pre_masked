
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_sb_info {int s_resv_blocks; int s_es; } ;
typedef scalar_t__ ext4_fsblk_t ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ext4_sb_info *VAR_1, ext4_fsblk_t VAR_2)
{
 ext4_fsblk_t VAR_3 = FUNC_1(VAR_1->s_es);

 if (VAR_2 >= VAR_3)
  return -VAR_0;

 FUNC_0(&VAR_1->s_resv_blocks, VAR_2);
 return 0;
}
