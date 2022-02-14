
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxfs_sb_info {int vsi_bp; int vsi_stilist; int vsi_ilist; int vsi_fship; } ;
struct super_block {int dummy; } ;


 struct vxfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vxfs_sb_info*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct super_block *VAR_0)
{
 struct vxfs_sb_info *VAR_1 = FUNC_0(VAR_0);

 FUNC_3();

 FUNC_5(VAR_1->vsi_fship);
 FUNC_5(VAR_1->vsi_ilist);
 FUNC_5(VAR_1->vsi_stilist);

 FUNC_1(VAR_1->vsi_bp);
 FUNC_2(VAR_1);

 FUNC_4();
}
