
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* ipc_port_t ;
typedef TYPE_2__* ipc_kmsg_t ;
struct TYPE_9__ {int ikm_turnstile; } ;
struct TYPE_8__ {int ip_messages; } ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void
FUNC_4(
 ipc_kmsg_t VAR_0,
 ipc_port_t VAR_1)
{

 FUNC_1(&VAR_1->ip_messages);

 FUNC_0(VAR_1, VAR_0);
 FUNC_3(VAR_1, VAR_0->ikm_turnstile);
 FUNC_2(&VAR_1->ip_messages);
}
