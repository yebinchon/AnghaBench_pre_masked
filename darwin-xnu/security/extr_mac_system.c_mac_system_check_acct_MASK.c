
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int * v_label; } ;
typedef int kauth_cred_t ;


 int FUNC_0 (int ,int ,struct vnode*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_1(kauth_cred_t VAR_2, struct vnode *VAR_3)
{
 int VAR_4;







 FUNC_0(VAR_1, VAR_2, VAR_3,
     VAR_3 != ((void*)0) ? VAR_3->v_label : ((void*)0));

 return (VAR_4);
}
