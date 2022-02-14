
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {TYPE_1__* v_ubcinfo; } ;
typedef int kauth_cred_t ;
struct TYPE_2__ {int ui_ucred; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vnode*) ;

kauth_cred_t
FUNC_1(struct vnode *VAR_1)
{
        if (FUNC_0(VAR_1))
         return (VAR_1->v_ubcinfo->ui_ucred);

 return (VAR_0);
}
