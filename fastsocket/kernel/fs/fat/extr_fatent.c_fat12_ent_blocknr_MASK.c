
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; int s_blocksize_bits; } ;
struct msdos_sb_info {int max_cluster; scalar_t__ fat_start; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct super_block *VAR_1, int VAR_2,
         int *VAR_3, sector_t *VAR_4)
{
 struct msdos_sb_info *VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = VAR_2 + (VAR_2 >> 1);
 FUNC_1(VAR_2 < VAR_0 || VAR_5->max_cluster <= VAR_2);
 *VAR_3 = VAR_6 & (VAR_1->s_blocksize - 1);
 *VAR_4 = VAR_5->fat_start + (VAR_6 >> VAR_1->s_blocksize_bits);
}
