
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct vnode_pager* vnode_pager_t ;
struct TYPE_2__ {int mo_control; int * mo_pager_ops; int mo_ikot; } ;
struct vnode_pager {int ref_count; struct vnode* vnode_handle; TYPE_1__ vn_pgr_hdr; } ;
struct vnode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vnode_pager* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;

vnode_pager_t
FUNC_1(
        struct vnode *VAR_5)
{
 vnode_pager_t VAR_6;

 VAR_6 = (struct vnode_pager *) FUNC_0(VAR_4);
 if (VAR_6 == VAR_2)
  return(VAR_2);
 VAR_6->vn_pgr_hdr.mo_ikot = VAR_0;
 VAR_6->vn_pgr_hdr.mo_pager_ops = &VAR_3;
 VAR_6->vn_pgr_hdr.mo_control = VAR_1;

 VAR_6->ref_count = 1;
 VAR_6->vnode_handle = VAR_5;

 return(VAR_6);
}
