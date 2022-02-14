
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct affs_sb_info {int * s_bitmap; int s_last_bmap; int * s_bmap_bh; } ;


 struct affs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct super_block *VAR_0)
{
 struct affs_sb_info *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1->s_bitmap)
  return;

 FUNC_1(VAR_1->s_bmap_bh);
 VAR_1->s_bmap_bh = ((void*)0);
 VAR_1->s_last_bmap = ~0;
 FUNC_2(VAR_1->s_bitmap);
 VAR_1->s_bitmap = ((void*)0);
}
