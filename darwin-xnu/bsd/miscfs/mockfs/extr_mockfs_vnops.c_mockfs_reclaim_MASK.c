
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
struct vnop_reclaim_args {int a_vp; } ;
typedef scalar_t__ mockfs_fsnode_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(struct vnop_reclaim_args * VAR_0)
{
 int VAR_1;
 vnode_t VAR_2;
 mockfs_fsnode_t VAR_3;

 VAR_2 = VAR_0->a_vp;
 VAR_3 = (mockfs_fsnode_t) FUNC_1(VAR_2);
 VAR_1 = FUNC_0(VAR_3);

 return VAR_1;
}
