
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vnode_t ;
typedef TYPE_2__* vfs_context_t ;
typedef TYPE_3__* uthread_t ;
typedef TYPE_4__* proc_t ;
struct TYPE_10__ {TYPE_1__* p_fd; } ;
struct TYPE_9__ {int uu_cdir; } ;
struct TYPE_8__ {int * vc_thread; } ;
struct TYPE_7__ {int fd_cdir; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

vnode_t
FUNC_2(vfs_context_t VAR_1)
{
 vnode_t VAR_2 = VAR_0;

 if(VAR_1 != ((void*)0) && VAR_1->vc_thread != ((void*)0)) {
  uthread_t VAR_3 = FUNC_0(VAR_1->vc_thread);
  proc_t VAR_4;





  if ((VAR_2 = VAR_3->uu_cdir) == VAR_0 &&
      (VAR_4 = (proc_t)FUNC_1(VAR_1->vc_thread)) != ((void*)0) &&
      VAR_4->p_fd != ((void*)0))
   VAR_2 = VAR_4->p_fd->fd_cdir;
 }

 return(VAR_2);
}
