
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vnop_reclaim_args {struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct TYPE_4__ {int * dn_vn; } ;
typedef TYPE_1__ devnode_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (struct vnode*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct vnode*) ;

__attribute__((used)) static int
FUNC_5(struct vnop_reclaim_args *VAR_0)



{
    struct vnode * VAR_1 = VAR_0->a_vp;
    devnode_t * VAR_2;

    FUNC_0();

    VAR_2 = FUNC_2(VAR_1);

    if (VAR_2) {

 VAR_2->dn_vn = ((void*)0);
 FUNC_4(VAR_1);


 FUNC_3(VAR_2);
    }
    FUNC_1();

    return(0);
}
