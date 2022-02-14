
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_sb_info {int s_dirtyblocks_counter; } ;
typedef int s64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ext4_sb_info*,int ,unsigned int) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(struct ext4_sb_info *VAR_1,
      s64 VAR_2, unsigned int VAR_3)
{
 if (FUNC_0(VAR_1, VAR_2, VAR_3)) {
  FUNC_1(&VAR_1->s_dirtyblocks_counter, VAR_2);
  return 0;
 } else
  return -VAR_0;
}
