
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct gfs2_sbd* s_fs_info; } ;
struct gfs2_sbd {int * sd_master_dir; int * sd_root_dir; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct gfs2_sbd*) ;
 int FUNC_2 (struct gfs2_sbd*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;

__attribute__((used)) static void FUNC_5(struct super_block *VAR_0)
{
 struct gfs2_sbd *VAR_1 = VAR_0->s_fs_info;

 if (VAR_1 == ((void*)0)) {
  FUNC_3(VAR_0);
  return;
 }

 FUNC_2(VAR_1);
 FUNC_0(VAR_1->sd_root_dir);
 FUNC_0(VAR_1->sd_master_dir);
 VAR_1->sd_root_dir = ((void*)0);
 VAR_1->sd_master_dir = ((void*)0);
 FUNC_4(VAR_0);
 FUNC_1(VAR_1);
 FUNC_3(VAR_0);
}
