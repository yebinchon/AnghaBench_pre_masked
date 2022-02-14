
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int wait_interrupt_t ;
typedef TYPE_2__* thread_t ;
struct task {scalar_t__ itk_space; } ;
typedef int mach_exception_data_type_t ;
typedef int kern_return_t ;
typedef TYPE_3__* ipc_port_t ;
typedef TYPE_4__* host_priv_t ;
struct TYPE_15__ {TYPE_3__* port; } ;
struct TYPE_14__ {int lock; TYPE_9__* exc_actions; } ;
struct TYPE_11__ {scalar_t__ receiver; } ;
struct TYPE_13__ {TYPE_1__ data; } ;
struct TYPE_12__ {struct task* task; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,size_t,int*,int,TYPE_9__*,int *) ;
 TYPE_4__* FUNC_2 () ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;

kern_return_t FUNC_5(thread_t VAR_4, int VAR_5)
{
 host_priv_t VAR_6;
 ipc_port_t VAR_7;
 wait_interrupt_t VAR_8;
 kern_return_t VAR_9;

 VAR_6 = FUNC_2();
 mach_exception_data_type_t VAR_10[VAR_0];
 VAR_10[0] = 0xFF000001;
 VAR_10[1] = VAR_5;

 struct task *VAR_11 = VAR_4->task;
 VAR_7 = VAR_6->exc_actions[VAR_1].port;


 if (!FUNC_0(VAR_7) ||
   !FUNC_3(VAR_7) ||
   VAR_11->itk_space == VAR_7->data.receiver) {

  return(VAR_2);
 }

 VAR_8 = FUNC_4(VAR_3);
 VAR_9 = FUNC_1(
   VAR_4,
   VAR_1,
   VAR_10,
   2,
   VAR_6->exc_actions,
   &VAR_6->lock);
 (void)FUNC_4(VAR_8);

 return(VAR_9);
}
