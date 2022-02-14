
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_2__* vnode_pager_t ;
struct vnode {int dummy; } ;
typedef scalar_t__ memory_object_t ;
struct TYPE_3__ {int * mo_pager_ops; } ;
struct TYPE_4__ {struct vnode* vnode_handle; TYPE_1__ vn_pgr_hdr; } ;


 int VAR_0 ;

struct vnode *
FUNC_0(
 memory_object_t VAR_1)
{
 vnode_pager_t VAR_2;
 VAR_2 = (vnode_pager_t)VAR_1;
 if(VAR_2->vn_pgr_hdr.mo_pager_ops == &VAR_0)
  return (VAR_2->vnode_handle);
 else
  return ((void*)0);
}
