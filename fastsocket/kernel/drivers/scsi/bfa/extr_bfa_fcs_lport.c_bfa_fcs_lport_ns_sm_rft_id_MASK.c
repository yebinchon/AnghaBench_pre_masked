
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfa_fcs_lport_ns_s {TYPE_3__* port; int fcxp; int timer; } ;
typedef enum vport_ns_event { ____Placeholder_vport_ns_event } vport_ns_event ;
struct TYPE_4__ {int ns_retries; } ;
struct TYPE_5__ {int pwwn; } ;
struct TYPE_6__ {int fcs; TYPE_1__ stats; TYPE_2__ port_cfg; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;



 int FUNC_1 (struct bfa_fcs_lport_ns_s*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct bfa_fcs_lport_ns_s*,int ) ;
 int FUNC_5 (int ,int *,int ,struct bfa_fcs_lport_ns_s*,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcs_lport_ns_s *VAR_5,
   enum vport_ns_event VAR_6)
{
 FUNC_6(VAR_5->port->fcs, VAR_5->port->port_cfg.pwwn);
 FUNC_6(VAR_5->port->fcs, VAR_6);

 switch (VAR_6) {
 case 128:

  FUNC_4(VAR_5, VAR_3);
  FUNC_1(VAR_5, ((void*)0));
  break;

 case 129:



  FUNC_4(VAR_5, VAR_2);
  VAR_5->port->stats.ns_retries++;
  FUNC_5(FUNC_0(VAR_5->port),
        &VAR_5->timer, VAR_4, VAR_5,
        VAR_0);
  break;

 case 130:
  FUNC_4(VAR_5, VAR_1);
  FUNC_2(VAR_5->fcxp);
  break;

 default:
  FUNC_3(VAR_5->port->fcs, VAR_6);
 }
}
