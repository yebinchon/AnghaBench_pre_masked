
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_root; struct super_block* mnt_sb; } ;
struct super_block {int s_root; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct vfsmount *VAR_0, struct super_block *VAR_1)
{
 VAR_0->mnt_sb = VAR_1;
 VAR_0->mnt_root = FUNC_0(VAR_1->s_root);
}
