
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct vfsmount *VAR_2)
{
 VAR_2->mnt_flags &= ~VAR_0;
 VAR_2->mnt_flags |= VAR_1;
}
