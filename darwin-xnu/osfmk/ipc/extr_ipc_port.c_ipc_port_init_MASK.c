
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef int ipc_space_t ;
typedef TYPE_1__* ipc_port_t ;
struct TYPE_4__ {int ip_messages; int ip_send_turnstile; int ip_sync_link_state; scalar_t__ ip_specialreply; scalar_t__ ip_impcount; scalar_t__ ip_strict_guard; scalar_t__ ip_guarded; scalar_t__ ip_tempowner; scalar_t__ ip_impdonation; scalar_t__ ip_spimportant; scalar_t__ ip_sprequests; scalar_t__ ip_context; int ip_premsg; int ip_requests; void* ip_pdrequest; void* ip_nsrequest; scalar_t__ ip_sorights; scalar_t__ ip_srights; scalar_t__ ip_mscount; int ip_receiver_name; int ip_receiver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(
 ipc_port_t VAR_6,
 ipc_space_t VAR_7,
 mach_port_name_t VAR_8)
{


 VAR_6->ip_receiver = VAR_7;
 VAR_6->ip_receiver_name = VAR_8;

 VAR_6->ip_mscount = 0;
 VAR_6->ip_srights = 0;
 VAR_6->ip_sorights = 0;

 VAR_6->ip_nsrequest = VAR_3;
 VAR_6->ip_pdrequest = VAR_3;
 VAR_6->ip_requests = VAR_2;

 VAR_6->ip_premsg = VAR_1;
 VAR_6->ip_context = 0;

 VAR_6->ip_sprequests = 0;
 VAR_6->ip_spimportant = 0;
 VAR_6->ip_impdonation = 0;
 VAR_6->ip_tempowner = 0;

 VAR_6->ip_guarded = 0;
 VAR_6->ip_strict_guard = 0;
 VAR_6->ip_impcount = 0;

 VAR_6->ip_specialreply = 0;
 VAR_6->ip_sync_link_state = VAR_4;

 FUNC_1(VAR_6);

 VAR_6->ip_send_turnstile = VAR_5;

 FUNC_0(&VAR_6->ip_messages,
   VAR_0 );
}
