
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_ghosts; int mnt_count; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct vfsmount *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_0(&VAR_0->mnt_count) - VAR_0->mnt_ghosts;
 return (VAR_2 > VAR_1);
}
