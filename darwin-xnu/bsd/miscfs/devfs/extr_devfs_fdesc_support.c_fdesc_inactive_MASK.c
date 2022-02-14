
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_inactive_args {struct vnode* a_vp; } ;
struct vnode {int v_type; } ;


 int VAR_0 ;

int
FUNC_0(struct vnop_inactive_args *VAR_1)
{
 struct vnode *VAR_2 = VAR_1->a_vp;





 VAR_2->v_type = VAR_0;

 return (0);
}
