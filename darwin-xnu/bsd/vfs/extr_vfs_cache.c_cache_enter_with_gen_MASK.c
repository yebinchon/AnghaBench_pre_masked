
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_nc_generation; } ;
struct componentname {scalar_t__ cn_hash; int cn_namelen; int cn_nameptr; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct vnode*,struct vnode*,struct componentname*,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;

void
FUNC_4(struct vnode *VAR_0, struct vnode *VAR_1, struct componentname *VAR_2, int VAR_3)
{

        if (VAR_2->cn_hash == 0)
         VAR_2->cn_hash = FUNC_3(VAR_2->cn_nameptr, VAR_2->cn_namelen);

 FUNC_0();

 if (VAR_0->v_nc_generation == VAR_3)
         (void)FUNC_2(VAR_0, VAR_1, VAR_2, ((void*)0));

 FUNC_1();
}
