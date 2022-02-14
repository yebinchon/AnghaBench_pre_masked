
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef TYPE_2__* mount_t ;
struct TYPE_6__ {TYPE_1__* mnt_vnodecovered; } ;
struct TYPE_5__ {scalar_t__ v_type; TYPE_2__* v_mountedhere; } ;


 scalar_t__ VAR_0 ;

mount_t
FUNC_0(vnode_t VAR_1)
{
 mount_t VAR_2;

 if ((VAR_1->v_type == VAR_0) && ((VAR_2 = VAR_1->v_mountedhere) != ((void*)0)) &&
     (VAR_2->mnt_vnodecovered == VAR_1))
  return (VAR_2);
 else
  return (mount_t)((void*)0);
}
