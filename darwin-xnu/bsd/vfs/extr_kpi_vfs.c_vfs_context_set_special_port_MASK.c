
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vfs_context_t ;
typedef int * task_t ;
typedef int kern_return_t ;
typedef int ipc_port_t ;
struct TYPE_3__ {int * vc_thread; } ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ) ;

kern_return_t
FUNC_2(vfs_context_t VAR_0, int VAR_1, ipc_port_t VAR_2)
{
 task_t VAR_3 = ((void*)0);

 if (VAR_0 != ((void*)0) && VAR_0->vc_thread != ((void*)0))
  VAR_3 = FUNC_0(VAR_0->vc_thread);

 return FUNC_1(VAR_3, VAR_1, VAR_2);
}
