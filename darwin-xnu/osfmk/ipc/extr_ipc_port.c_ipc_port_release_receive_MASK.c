
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* ipc_port_t ;
struct TYPE_10__ {scalar_t__ ip_receiver_name; struct TYPE_10__* ip_destination; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

void
FUNC_7(
 ipc_port_t VAR_2)
{
 ipc_port_t VAR_3;

 if (!FUNC_0(VAR_2))
  return;

 FUNC_3(VAR_2);
 FUNC_1(FUNC_2(VAR_2));
 FUNC_1(VAR_2->ip_receiver_name == VAR_1);
 VAR_3 = VAR_2->ip_destination;

 FUNC_5(VAR_2);

 if (VAR_3 != VAR_0) {
  FUNC_6(VAR_3);
  FUNC_4(VAR_3);
 }
}
