
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_reclaim_args {struct vnode* a_vp; } ;
struct vnode {int * v_data; } ;
struct fdescnode {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct fdescnode*,int ) ;
 int VAR_0 ;
 struct fdescnode* FUNC_2 (struct vnode*) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int
FUNC_5(struct vnop_reclaim_args *VAR_2)
{
 struct vnode *VAR_3 = VAR_2->a_vp;
 struct fdescnode *VAR_4 = FUNC_2(VAR_3);

 FUNC_3();

 FUNC_1(VAR_4, VAR_1);
 FUNC_0(VAR_3->v_data, VAR_0);
 VAR_3->v_data = ((void*)0);

 FUNC_4();

 return (0);
}
