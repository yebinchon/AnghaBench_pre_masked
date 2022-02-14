
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * vfs_context_t ;
struct vnode {TYPE_2__* v_mount; } ;
struct TYPE_4__ {TYPE_1__* mnt_op; } ;
struct TYPE_3__ {int (* vfs_vptofh ) (struct vnode*,int*,unsigned char*,int *) ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct vnode*,int*,unsigned char*,int *) ;
 int * FUNC_1 () ;

int
FUNC_2(struct vnode *VAR_2, int *VAR_3, unsigned char *VAR_4, vfs_context_t VAR_5)
{
 int VAR_6;

 if ((VAR_2->v_mount == VAR_1) || (VAR_2->v_mount->mnt_op->vfs_vptofh == 0))
  return(VAR_0);

 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_1();
 }

 VAR_6 = (*VAR_2->v_mount->mnt_op->vfs_vptofh)(VAR_2, VAR_3, VAR_4, VAR_5);

 return(VAR_6);
}
