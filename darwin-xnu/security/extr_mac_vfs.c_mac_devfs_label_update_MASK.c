
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_label; } ;
struct mount {int dummy; } ;
struct devnode {int dn_label; } ;


 int FUNC_0 (int ,struct mount*,struct devnode*,int ,struct vnode*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(struct mount *VAR_2, struct devnode *VAR_3,
    struct vnode *VAR_4)
{






 FUNC_0(VAR_0, VAR_2, VAR_3, VAR_3->dn_label, VAR_4,
     VAR_4->v_label);
}
