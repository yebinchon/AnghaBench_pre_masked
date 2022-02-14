
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_close_args {struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
typedef int devnode_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,struct vnop_close_args*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (struct vnode*) ;
 int FUNC_5 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (struct vnode*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_7(struct vnop_close_args *VAR_2)





{
     struct vnode * VAR_3 = VAR_2->a_vp;
 devnode_t * VAR_4;

 if (FUNC_6(VAR_3, 0)) {
     FUNC_0();
     VAR_4 = FUNC_4(VAR_3);
     if (VAR_4)
         FUNC_5(VAR_4, 0);
     FUNC_1();
 }

 return (FUNC_2 (VAR_0, FUNC_3(VAR_1), VAR_2));
}
