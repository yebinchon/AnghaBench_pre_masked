
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
struct vnode {struct ubc_info* v_ubcinfo; } ;
struct uthread {int uu_flag; int uu_ucred; } ;
struct ubc_info {int ui_ucred; } ;
typedef int proc_t ;
typedef int kauth_cred_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vnode*) ;
 int VAR_0 ;
 struct uthread* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*) ;

int
FUNC_7(struct vnode *VAR_1, proc_t VAR_2, thread_t VAR_3)
{
 struct ubc_info *VAR_4;
 kauth_cred_t VAR_5;
 struct uthread *VAR_6 = FUNC_2(VAR_3);

 if (!FUNC_1(VAR_1))
  return (1);

 FUNC_5(VAR_1);

 VAR_4 = VAR_1->v_ubcinfo;
 VAR_5 = VAR_4->ui_ucred;

 if (!FUNC_0(VAR_5)) {

  if (VAR_6 == ((void*)0) || (VAR_6->uu_flag & VAR_0) == 0) {
   VAR_4->ui_ucred = FUNC_3(VAR_2);
  } else {
   VAR_4->ui_ucred = VAR_6->uu_ucred;
   FUNC_4(VAR_4->ui_ucred);
  }
 }
 FUNC_6(VAR_1);

 return (0);
}
