
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct vnode {int v_tag; } ;
struct mount {int dummy; } ;
struct fdescnode {int dummy; } ;
struct devnode {int dummy; } ;


 struct devnode* FUNC_0 (struct vnode*) ;
 struct fdescnode* FUNC_1 (struct vnode*) ;


 int VAR_0 ;
 int FUNC_2 (struct mount*,struct devnode*,struct vnode*) ;
 int FUNC_3 (struct mount*,struct vnode*) ;
 int FUNC_4 (struct mount*,struct fdescnode*,struct vnode*,int ) ;

int
FUNC_5(struct mount *VAR_1, struct vnode *VAR_2, vfs_context_t VAR_3)
{
 struct devnode *VAR_4;
 struct fdescnode *VAR_5;
 int VAR_6 = 0;
 switch (VAR_2->v_tag) {
 case 129:
  VAR_4 = FUNC_0(VAR_2);
  FUNC_2(VAR_1, VAR_4, VAR_2);
  break;
 case 128:
  VAR_5 = FUNC_1(VAR_2);
  VAR_6 = FUNC_4(VAR_1, VAR_5, VAR_2, VAR_3);
  break;
 default:
  VAR_6 = FUNC_3(VAR_1, VAR_2);
  break;
 }

 return (VAR_6);
}
