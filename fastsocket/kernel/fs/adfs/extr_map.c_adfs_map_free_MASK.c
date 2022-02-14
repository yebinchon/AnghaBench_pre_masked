
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct adfs_sb_info {unsigned int s_map_size; int s_map2blk; struct adfs_discmap* s_map; } ;
struct adfs_discmap {int dummy; } ;


 struct adfs_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct adfs_sb_info*,int ) ;
 unsigned int FUNC_2 (unsigned int,int ) ;

unsigned int
FUNC_3(struct super_block *VAR_0)
{
 struct adfs_sb_info *VAR_1 = FUNC_0(VAR_0);
 struct adfs_discmap *VAR_2;
 unsigned int VAR_3 = 0;
 unsigned int VAR_4;

 VAR_2 = VAR_1->s_map;
 VAR_4 = VAR_1->s_map_size;

 do {
  VAR_3 += FUNC_1(VAR_1, VAR_2++);
 } while (--VAR_4 > 0);

 return FUNC_2(VAR_3, VAR_1->s_map2blk);
}
