
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vfs_context_t ;
typedef TYPE_2__* proc_t ;
struct TYPE_7__ {int p_lflag; int * p_fd; } ;
struct TYPE_6__ {int * vc_thread; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;

proc_t
FUNC_2(vfs_context_t VAR_1)
{
 proc_t VAR_2 = ((void*)0);

 if (VAR_1 != ((void*)0) && VAR_1->vc_thread != ((void*)0))
  VAR_2 = (proc_t)FUNC_1(VAR_1->vc_thread);
 if (VAR_2 != ((void*)0) && (VAR_2->p_fd == ((void*)0) || (VAR_2->p_lflag & VAR_0)))
  VAR_2 = ((void*)0);

 return(VAR_2 == ((void*)0) ? FUNC_0() : VAR_2);
}
