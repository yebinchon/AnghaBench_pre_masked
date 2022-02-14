
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vfs_context_t ;
typedef TYPE_2__* uthread_t ;
struct TYPE_5__ {int * vc_ucred; } ;
struct TYPE_6__ {TYPE_1__ uu_context; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 () ;

vfs_context_t
FUNC_3(void)
{
 vfs_context_t VAR_0 = ((void*)0);
 volatile uthread_t VAR_1 = (uthread_t)FUNC_1(FUNC_0());

 if (VAR_1 != ((void*)0) ) {
  if (VAR_1->uu_context.vc_ucred != ((void*)0)) {
   VAR_0 = &VAR_1->uu_context;
  }
 }

 return(VAR_0 == ((void*)0) ? FUNC_2() : VAR_0);
}
