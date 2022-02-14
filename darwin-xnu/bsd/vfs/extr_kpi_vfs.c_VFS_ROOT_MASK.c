
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * vfs_context_t ;
struct vnode {int dummy; } ;
typedef TYPE_2__* mount_t ;
struct TYPE_7__ {TYPE_1__* mnt_op; } ;
struct TYPE_6__ {int (* vfs_root ) (TYPE_2__*,struct vnode**,int *) ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (TYPE_2__*,struct vnode**,int *) ;
 int * FUNC_1 () ;

int
FUNC_2(mount_t VAR_2, struct vnode ** VAR_3, vfs_context_t VAR_4)
{
 int VAR_5;

 if ((VAR_2 == VAR_1) || (VAR_2->mnt_op->vfs_root == 0))
  return(VAR_0);

 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_1();
 }

 VAR_5 = (*VAR_2->mnt_op->vfs_root)(VAR_2, VAR_3, VAR_4);

 return (VAR_5);
}
