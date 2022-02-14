
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_fcs_lport_scn_s {TYPE_1__* port; } ;
typedef enum port_scn_event { ____Placeholder_port_scn_event } port_scn_event ;
struct TYPE_2__ {int fcs; } ;



 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct bfa_fcs_lport_scn_s*,int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_fcs_lport_scn_s *VAR_1,
   enum port_scn_event VAR_2)
{
 switch (VAR_2) {
 case 128:
  FUNC_1(VAR_1, VAR_0);
  break;

 default:
  FUNC_0(VAR_1->port->fcs, VAR_2);
 }
}
