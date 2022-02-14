
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int * s_fs_info; } ;
struct adfs_sb_info {int s_map_size; struct adfs_sb_info* s_map; int dm_bh; } ;


 struct adfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct adfs_sb_info*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct super_block *VAR_0)
{
 int VAR_1;
 struct adfs_sb_info *VAR_2 = FUNC_0(VAR_0);

 FUNC_3();

 for (VAR_1 = 0; VAR_1 < VAR_2->s_map_size; VAR_1++)
  FUNC_1(VAR_2->s_map[VAR_1].dm_bh);
 FUNC_2(VAR_2->s_map);
 FUNC_2(VAR_2);
 VAR_0->s_fs_info = ((void*)0);

 FUNC_4();
}
