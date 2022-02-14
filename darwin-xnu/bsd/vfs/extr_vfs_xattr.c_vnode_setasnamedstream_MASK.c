
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef int errno_t ;
struct TYPE_8__ {TYPE_1__* v_mount; } ;
struct TYPE_7__ {int mnt_kern_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;

errno_t
FUNC_1(vnode_t VAR_2, vnode_t VAR_3)
{
 if ((VAR_2->v_mount->mnt_kern_flag & VAR_1) == 0)
  return (VAR_0);

 FUNC_0(VAR_2, VAR_3);
 return (0);
}
