
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {struct ubc_info* v_ubcinfo; } ;
struct ubc_info {int ui_ucred; } ;
typedef int proc_t ;
typedef int kauth_cred_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*) ;

int
FUNC_5(struct vnode *VAR_0, proc_t VAR_1)
{
 struct ubc_info *VAR_2;
 kauth_cred_t VAR_3;


 if ( !FUNC_1(VAR_0))
  return (0);





 FUNC_3(VAR_0);
 VAR_2 = VAR_0->v_ubcinfo;
 VAR_3 = VAR_2->ui_ucred;
 if (!FUNC_0(VAR_3)) {
  VAR_2->ui_ucred = FUNC_2(VAR_1);
 }
 FUNC_4(VAR_0);

 return (1);
}
