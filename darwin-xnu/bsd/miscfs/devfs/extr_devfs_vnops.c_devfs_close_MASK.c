
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_close_args {struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
typedef int devnode_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int * FUNC_2 (struct vnode*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_5(struct vnop_close_args *VAR_0)





{
     struct vnode * VAR_1 = VAR_0->a_vp;
 devnode_t * VAR_2;

 if (FUNC_4(VAR_1, 1)) {
     FUNC_0();
     VAR_2 = FUNC_2(VAR_1);
     if (VAR_2)
         FUNC_3(VAR_2, 0);
     FUNC_1();
 }
 return (0);
}
