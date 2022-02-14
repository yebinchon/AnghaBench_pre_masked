
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int s_flags; } ;
struct affs_bm_info {scalar_t__ bm_free; } ;
struct TYPE_2__ {int s_bmap_count; int s_bmlock; struct affs_bm_info* s_bitmap; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

u32
FUNC_4(struct super_block *VAR_1)
{
 struct affs_bm_info *VAR_2;
 u32 VAR_3;
 int VAR_4;

 FUNC_3("AFFS: count_free_blocks()\n");

 if (VAR_1->s_flags & VAR_0)
  return 0;

 FUNC_1(&FUNC_0(VAR_1)->s_bmlock);

 VAR_2 = FUNC_0(VAR_1)->s_bitmap;
 VAR_3 = 0;
 for (VAR_4 = FUNC_0(VAR_1)->s_bmap_count; VAR_4 > 0; VAR_2++, VAR_4--)
  VAR_3 += VAR_2->bm_free;

 FUNC_2(&FUNC_0(VAR_1)->s_bmlock);

 return VAR_3;
}
