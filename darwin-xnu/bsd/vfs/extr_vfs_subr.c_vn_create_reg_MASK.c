
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int uint32_t ;
struct vnode_attr {int dummy; } ;
struct nameidata {int ni_cnd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,struct nameidata*,int ,int,int*,struct vnode_attr*,int ) ;
 int FUNC_1 (int ,int *,int *,struct vnode_attr*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(vnode_t VAR_3, vnode_t *VAR_4, struct nameidata *VAR_5, struct vnode_attr *VAR_6, uint32_t VAR_7, int VAR_8, uint32_t *VAR_9, vfs_context_t VAR_10)
{

 if (FUNC_2(VAR_3) && ((VAR_7 & VAR_2) != 0)) {
  *VAR_4 = VAR_0;
  return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_1, VAR_8, VAR_9, VAR_6, VAR_10);
 } else {
  return FUNC_1(VAR_3, VAR_4, &VAR_5->ni_cnd, VAR_6, VAR_10);
 }
}
