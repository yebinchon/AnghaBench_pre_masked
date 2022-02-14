
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int port_id; } ;
struct fc_rport_priv {TYPE_2__ ids; } ;
struct TYPE_3__ {int (* rport_logoff ) (struct fc_rport_priv*) ;} ;
struct fc_lport {int state; int lp_mutex; struct fc_rport_priv* ms_rdata; struct fc_rport_priv* dns_rdata; TYPE_1__ tt; } ;
typedef enum fc_rport_event { ____Placeholder_fc_rport_event } fc_rport_event ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fc_lport*,char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_1 (struct fc_lport*,int ) ;
 int FUNC_2 (struct fc_lport*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct fc_rport_priv*) ;

__attribute__((used)) static void FUNC_6(struct fc_lport *VAR_6,
        struct fc_rport_priv *VAR_7,
        enum fc_rport_event VAR_8)
{
 FUNC_0(VAR_6, "Received a %d event for port (%6.6x)\n", VAR_8,
       VAR_7->ids.port_id);

 FUNC_3(&VAR_6->lp_mutex);
 switch (VAR_8) {
 case 129:
  if (VAR_6->state == VAR_3) {
   VAR_6->dns_rdata = VAR_7;
   FUNC_2(VAR_6, VAR_5);
  } else if (VAR_6->state == VAR_4) {
   VAR_6->ms_rdata = VAR_7;
   FUNC_1(VAR_6, VAR_2);
  } else {
   FUNC_0(VAR_6, "Received an READY event "
         "on port (%6.6x) for the directory "
         "server, but the lport is not "
         "in the DNS or FDMI state, it's in the "
         "%d state", VAR_7->ids.port_id,
         VAR_6->state);
   VAR_6->tt.rport_logoff(VAR_7);
  }
  break;
 case 131:
 case 132:
 case 128:
  if (VAR_7->ids.port_id == VAR_0)
   VAR_6->dns_rdata = ((void*)0);
  else if (VAR_7->ids.port_id == VAR_1)
   VAR_6->ms_rdata = ((void*)0);
  break;
 case 130:
  break;
 }
 FUNC_4(&VAR_6->lp_mutex);
}
