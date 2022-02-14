
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int mnt_flags; } ;
struct timespec {scalar_t__ tv_sec; } ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;
struct inode {TYPE_1__ i_atime; int i_ctime; int i_mtime; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct vfsmount *VAR_1, struct inode *VAR_2,
        struct timespec VAR_3)
{

 if (!(VAR_1->mnt_flags & VAR_0))
  return 1;



 if (FUNC_0(&VAR_2->i_mtime, &VAR_2->i_atime) >= 0)
  return 1;



 if (FUNC_0(&VAR_2->i_ctime, &VAR_2->i_atime) >= 0)
  return 1;





 if ((long)(VAR_3.tv_sec - VAR_2->i_atime.tv_sec) >= 24*60*60)
  return 1;



 return 0;
}
