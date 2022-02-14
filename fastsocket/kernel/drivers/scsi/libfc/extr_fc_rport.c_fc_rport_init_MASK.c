
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rport_destroy; scalar_t__ rport_flush_queue; scalar_t__ rport_recv_req; scalar_t__ rport_logoff; scalar_t__ rport_login; scalar_t__ rport_create; scalar_t__ rport_lookup; } ;
struct fc_lport {TYPE_1__ tt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

int FUNC_0(struct fc_lport *VAR_7)
{
 if (!VAR_7->tt.rport_lookup)
  VAR_7->tt.rport_lookup = VAR_5;

 if (!VAR_7->tt.rport_create)
  VAR_7->tt.rport_create = VAR_0;

 if (!VAR_7->tt.rport_login)
  VAR_7->tt.rport_login = VAR_3;

 if (!VAR_7->tt.rport_logoff)
  VAR_7->tt.rport_logoff = VAR_4;

 if (!VAR_7->tt.rport_recv_req)
  VAR_7->tt.rport_recv_req = VAR_6;

 if (!VAR_7->tt.rport_flush_queue)
  VAR_7->tt.rport_flush_queue = VAR_2;

 if (!VAR_7->tt.rport_destroy)
  VAR_7->tt.rport_destroy = VAR_1;

 return 0;
}
