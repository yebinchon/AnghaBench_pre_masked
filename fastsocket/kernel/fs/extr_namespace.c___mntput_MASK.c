
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_root; struct super_block* mnt_sb; } ;
struct super_block {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vfsmount*) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vfsmount*) ;

__attribute__((used)) static inline void FUNC_5(struct vfsmount *VAR_0)
{
 struct super_block *VAR_1 = VAR_0->mnt_sb;
 FUNC_0(FUNC_1(VAR_0));
 FUNC_3(VAR_0->mnt_root);
 FUNC_4(VAR_0);
 FUNC_2(VAR_1);
}
