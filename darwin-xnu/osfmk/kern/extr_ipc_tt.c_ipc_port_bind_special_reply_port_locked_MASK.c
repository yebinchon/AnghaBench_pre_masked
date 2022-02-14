
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* ipc_port_t ;
struct TYPE_8__ {int ip_specialreply; int ip_sync_link_state; } ;
struct TYPE_7__ {TYPE_2__* ith_special_reply_port; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(
 ipc_port_t VAR_1)
{
 thread_t VAR_2 = FUNC_1();
 FUNC_0(VAR_2->ith_special_reply_port == ((void*)0));

 FUNC_2(VAR_1);
 VAR_2->ith_special_reply_port = VAR_1;
 VAR_1->ip_specialreply = 1;
 VAR_1->ip_sync_link_state = VAR_0;

 FUNC_3(VAR_1);
}
