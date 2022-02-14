
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext4_sb_info {int s_dirtyblocks_counter; int s_freeblocks_counter; } ;
typedef int s64 ;


 int VAR_0 ;
 struct ext4_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct super_block*) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_1)
{
 s64 VAR_2, VAR_3;
 struct ext4_sb_info *VAR_4 = FUNC_0(VAR_1);
 VAR_2 = FUNC_1(&VAR_4->s_freeblocks_counter);
 VAR_3 = FUNC_1(&VAR_4->s_dirtyblocks_counter);
 if (2 * VAR_2 < 3 * VAR_3 ||
  VAR_2 < (VAR_3 + VAR_0)) {




  return 1;
 }




 if (VAR_2 < 2 * VAR_3)
  FUNC_2(VAR_1);

 return 0;
}
