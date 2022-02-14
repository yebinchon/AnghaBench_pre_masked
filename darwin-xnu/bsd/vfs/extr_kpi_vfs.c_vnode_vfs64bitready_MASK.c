
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
struct TYPE_7__ {TYPE_1__* mnt_vtable; } ;
struct TYPE_6__ {TYPE_4__* v_mount; } ;
struct TYPE_5__ {int vfc_vfsflags; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;

int
FUNC_0(vnode_t VAR_2)
{




 if ((VAR_2->v_mount != VAR_1) && (VAR_2->v_mount->mnt_vtable->vfc_vfsflags & VAR_0))
  return(1);
 else
  return(0);
}
