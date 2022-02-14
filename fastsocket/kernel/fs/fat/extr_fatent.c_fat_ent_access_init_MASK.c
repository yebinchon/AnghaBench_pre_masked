
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct msdos_sb_info {int fat_bits; int fatent_shift; int * fatent_ops; int fat_lock; } ;


 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct super_block *VAR_3)
{
 struct msdos_sb_info *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(&VAR_4->fat_lock);

 switch (VAR_4->fat_bits) {
 case 32:
  VAR_4->fatent_shift = 2;
  VAR_4->fatent_ops = &VAR_2;
  break;
 case 16:
  VAR_4->fatent_shift = 1;
  VAR_4->fatent_ops = &VAR_1;
  break;
 case 12:
  VAR_4->fatent_shift = -1;
  VAR_4->fatent_ops = &VAR_0;
  break;
 }
}
