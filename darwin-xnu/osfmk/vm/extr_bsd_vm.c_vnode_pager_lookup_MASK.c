
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vnode_pager_t ;
typedef scalar_t__ memory_object_t ;
struct TYPE_4__ {int * mo_pager_ops; } ;
struct TYPE_5__ {TYPE_1__ vn_pgr_hdr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

vnode_pager_t
FUNC_1(
 memory_object_t VAR_1)
{
 vnode_pager_t VAR_2;

 VAR_2 = (vnode_pager_t)VAR_1;
 FUNC_0(VAR_2->vn_pgr_hdr.mo_pager_ops == &VAR_0);
 return (VAR_2);
}
