
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* mount_t ;
typedef int caddr_t ;
struct TYPE_4__ {int * tqh_first; } ;
struct TYPE_5__ {int mnt_lflag; TYPE_1__ mnt_vnodelist; int mnt_mlock; scalar_t__ mnt_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,char*,int *) ;
 int FUNC_1 (char*) ;

int
FUNC_2(mount_t VAR_2)
{
 if (VAR_2->mnt_lflag & VAR_0)
  FUNC_1("already in drain");
 VAR_2->mnt_lflag |= VAR_0;

 while (VAR_2->mnt_count)
  FUNC_0((caddr_t)&VAR_2->mnt_lflag, &VAR_2->mnt_mlock, VAR_1, "mount_drain", ((void*)0));

 if (VAR_2->mnt_vnodelist.tqh_first != ((void*)0))
   FUNC_1("mount_refdrain: dangling vnode");

 VAR_2->mnt_lflag &= ~VAR_0;

 return(0);
}
