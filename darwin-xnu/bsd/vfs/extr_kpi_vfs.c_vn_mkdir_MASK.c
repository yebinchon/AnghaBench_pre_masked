
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vfs_context_t ;
struct vnode_attr {int dummy; } ;
struct vnode {int dummy; } ;
struct TYPE_2__ {scalar_t__ cn_nameiop; } ;
struct nameidata {TYPE_1__ ni_cnd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vnode*,struct vnode**,struct nameidata*,struct vnode_attr*,int ) ;
 int FUNC_1 (struct vnode*,struct vnode**,TYPE_1__*,struct vnode_attr*,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct vnode*) ;

int
FUNC_4(struct vnode *VAR_1, struct vnode **VAR_2, struct nameidata *VAR_3,
           struct vnode_attr *VAR_4, vfs_context_t VAR_5)
{
 if (VAR_3->ni_cnd.cn_nameiop != VAR_0) {
  FUNC_2("Non-CREATE nameiop in vn_mkdir()?");
 }

 if (FUNC_3(VAR_1)) {
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 } else {
  return FUNC_1(VAR_1, VAR_2, &VAR_3->ni_cnd, VAR_4, VAR_5);
 }
}
