
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct mk_timer_cancel_trap_args {scalar_t__ result_time; int name; } ;
typedef TYPE_2__* mk_timer_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_space_t ;
typedef TYPE_3__* ipc_port_t ;
typedef int armed_time ;
struct TYPE_8__ {scalar_t__ deadline; } ;
struct TYPE_11__ {TYPE_1__ tc_call; } ;
struct TYPE_10__ {scalar_t__ ip_kobject; } ;
struct TYPE_9__ {int lock; scalar_t__ is_armed; int active; TYPE_4__ call_entry; TYPE_3__* port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*,scalar_t__,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ,int ,TYPE_3__**) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;

kern_return_t
FUNC_9(
 struct mk_timer_cancel_trap_args *VAR_5)
{
 mach_port_name_t VAR_6 = VAR_5->name;
 mach_vm_address_t VAR_7 = VAR_5->result_time;
 uint64_t VAR_8 = 0;
 mk_timer_t VAR_9;
 ipc_space_t VAR_10 = FUNC_2();
 ipc_port_t VAR_11;
 kern_return_t VAR_12;

 VAR_12 = FUNC_5(VAR_10, VAR_6, &VAR_11);
 if (VAR_12 != VAR_4)
  return (VAR_12);

 if (FUNC_3(VAR_11) == VAR_1) {
  VAR_9 = (mk_timer_t)VAR_11->ip_kobject;
  FUNC_0(VAR_9 != ((void*)0));
  FUNC_6(&VAR_9->lock);
  FUNC_0(VAR_9->port == VAR_11);
  FUNC_4(VAR_11);

  if (VAR_9->is_armed) {
   VAR_8 = VAR_9->call_entry.tc_call.deadline;
   if (FUNC_8(&VAR_9->call_entry))
    VAR_9->active--;
   VAR_9->is_armed = VAR_0;
  }

  FUNC_7(&VAR_9->lock);
 }
 else {
  FUNC_4(VAR_11);
  VAR_12 = VAR_3;
 }

 if (VAR_12 == VAR_4)
  if ( VAR_7 != 0 &&
    FUNC_1((void *)&VAR_8, VAR_7,
        sizeof (VAR_8)) != 0 )
   VAR_12 = VAR_2;

 return (VAR_12);
}
