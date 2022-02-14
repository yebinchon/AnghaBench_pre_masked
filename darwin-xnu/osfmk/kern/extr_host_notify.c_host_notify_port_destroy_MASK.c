
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int queue_entry_t ;
typedef TYPE_1__* ipc_port_t ;
typedef TYPE_2__* host_notify_t ;
struct TYPE_11__ {TYPE_1__* port; } ;
struct TYPE_10__ {scalar_t__ ip_kobject; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,TYPE_2__*) ;

void
FUNC_10(
 ipc_port_t VAR_5)
{
 host_notify_t VAR_6;

 FUNC_6(&VAR_3);

 FUNC_2(VAR_5);
 if (FUNC_1(VAR_5) == VAR_0) {
  VAR_6 = (host_notify_t)VAR_5->ip_kobject;
  FUNC_0(VAR_6 != ((void*)0));
  FUNC_4(VAR_5, VAR_2, VAR_1);
  FUNC_3(VAR_5);

  FUNC_0(VAR_6->port == VAR_5);
  FUNC_8((queue_entry_t)VAR_6);
  FUNC_7(&VAR_3);
  FUNC_9(VAR_4, VAR_6);

  FUNC_5(VAR_5);
  return;
 }
 FUNC_3(VAR_5);

 FUNC_7(&VAR_3);
}
