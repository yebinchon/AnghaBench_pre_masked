
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int queue_entry_t ;
typedef int kern_return_t ;
typedef TYPE_1__* ipc_port_t ;
typedef int ipc_kobject_t ;
typedef scalar_t__ host_t ;
typedef TYPE_2__* host_notify_t ;
typedef size_t host_flavor_t ;
struct TYPE_12__ {TYPE_1__* port; } ;
struct TYPE_11__ {scalar_t__ ip_tempowner; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,TYPE_2__*) ;

kern_return_t
FUNC_11(
 host_t VAR_12,
 host_flavor_t VAR_13,
 ipc_port_t VAR_14)
{
 host_notify_t VAR_15;

 if (VAR_12 == VAR_1)
  return (VAR_5);

 if (!FUNC_0(VAR_14))
  return (VAR_6);

 if (VAR_13 > VAR_0 || VAR_13 < 0)
  return (VAR_5);

 VAR_15 = (host_notify_t)FUNC_9(VAR_11);
 if (VAR_15 == ((void*)0))
  return (VAR_7);

 FUNC_7(&VAR_9);

 FUNC_4(VAR_14);
 if (!FUNC_2(VAR_14) || VAR_14->ip_tempowner || FUNC_3(VAR_14) != VAR_3) {
  FUNC_5(VAR_14);

  FUNC_8(&VAR_9);
  FUNC_10(VAR_11, VAR_15);

  return (VAR_4);
 }

 VAR_15->port = VAR_14;
 FUNC_6(VAR_14, (ipc_kobject_t)VAR_15, VAR_2);
 FUNC_5(VAR_14);

 FUNC_1(&VAR_10[VAR_13], (queue_entry_t)VAR_15);
 FUNC_8(&VAR_9);

 return (VAR_8);
}
