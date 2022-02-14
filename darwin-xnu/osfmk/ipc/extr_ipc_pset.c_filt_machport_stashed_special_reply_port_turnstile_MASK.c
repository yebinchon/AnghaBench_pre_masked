
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct turnstile {int dummy; } ;
struct knote {scalar_t__* kn_ext; struct turnstile* kn_hook; } ;
typedef TYPE_1__* ipc_port_t ;
struct TYPE_3__ {int ip_specialreply; scalar_t__ ip_sync_link_state; struct knote* ip_sync_inheritor_knote; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct knote*) ;
 struct turnstile* FUNC_2 (int ) ;

struct turnstile *
FUNC_3(ipc_port_t VAR_1)
{
 struct knote *VAR_2 = VAR_1->ip_sync_inheritor_knote;

 FUNC_0(VAR_1->ip_specialreply);
 FUNC_0(VAR_1->ip_sync_link_state == VAR_0);
 if (VAR_2->kn_ext[3] == (uint64_t)VAR_1) {
  return FUNC_2(FUNC_1(VAR_2));
 }
 return VAR_2->kn_hook;
}
