
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
struct vnode_attr {int dummy; } ;
struct nameidata {int ni_cnd; } ;
typedef int int32_t ;


 int FUNC_0 (int ,int *,struct nameidata*,int ,struct vnode_attr*,int ) ;
 int FUNC_1 (int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(vnode_t VAR_0, vnode_t *VAR_1, struct nameidata *VAR_2, int32_t VAR_3, struct vnode_attr *VAR_4, vfs_context_t VAR_5)
{
 if (FUNC_2(VAR_0)) {
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 } else {
  return FUNC_1(VAR_0, *VAR_1, &VAR_2->ni_cnd, VAR_3, VAR_5);
 }
}
