
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vfs_context_t ;
struct vfs_context {int dummy; } ;
typedef int kauth_cred_t ;
struct TYPE_4__ {int vc_ucred; int vc_thread; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

vfs_context_t
FUNC_5(vfs_context_t VAR_0)
{
 vfs_context_t VAR_1;

 VAR_1 = (vfs_context_t)FUNC_2(sizeof(struct vfs_context));

 if (VAR_1) {
  kauth_cred_t VAR_2;
  if (VAR_0) {
   VAR_1->vc_thread = VAR_0->vc_thread;
   VAR_2 = VAR_0->vc_ucred;
  } else {
   VAR_1->vc_thread = FUNC_1();
   VAR_2 = FUNC_3();
  }
  if (FUNC_0(VAR_2))
   FUNC_4(VAR_2);
  VAR_1->vc_ucred = VAR_2;
  return(VAR_1);
 }
 return(((void*)0));
}
