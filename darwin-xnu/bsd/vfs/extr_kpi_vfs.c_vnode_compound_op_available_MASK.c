
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef int compound_vnop_id_t ;
struct TYPE_5__ {TYPE_1__* v_mount; } ;
struct TYPE_4__ {int mnt_compound_ops; } ;



int
FUNC_0(vnode_t VAR_0, compound_vnop_id_t VAR_1)
{
 return ((VAR_0->v_mount->mnt_compound_ops & VAR_1) != 0);
}
