
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vnode_t ;
typedef int vfs_context_t ;
struct vnode_attr {int dummy; } ;
struct nameidata {int ni_cnd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__*,struct nameidata*,struct vnode_attr*,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int *,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

int
FUNC_4(vnode_t VAR_1, vnode_t *VAR_2, struct nameidata *VAR_3, struct vnode_attr *VAR_4, vfs_context_t VAR_5)
{
 if (FUNC_3(VAR_1)) {
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 } else {
  if (*VAR_2 == VAR_0) {
   FUNC_2("NULL vp, but not a compound VNOP?");
  }
  if (VAR_4 != ((void*)0)) {
   FUNC_2("Non-NULL vap, but not a compound VNOP?");
  }
  return FUNC_1(VAR_1, *VAR_2, &VAR_3->ni_cnd, VAR_5);
 }
}
