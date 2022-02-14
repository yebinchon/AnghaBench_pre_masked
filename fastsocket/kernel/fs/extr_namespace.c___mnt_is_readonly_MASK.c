
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int mnt_flags; TYPE_1__* mnt_sb; } ;
struct TYPE_2__ {int s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct vfsmount *VAR_2)
{
 if (VAR_2->mnt_flags & VAR_0)
  return 1;
 if (VAR_2->mnt_sb->s_flags & VAR_1)
  return 1;
 return 0;
}
