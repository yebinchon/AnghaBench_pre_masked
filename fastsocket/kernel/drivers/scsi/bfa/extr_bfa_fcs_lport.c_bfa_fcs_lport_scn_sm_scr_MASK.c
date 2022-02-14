
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_fcs_lport_scn_s {int fcxp; int timer; struct bfa_fcs_lport_s* port; } ;
struct bfa_fcs_lport_s {TYPE_1__* fcs; } ;
typedef enum port_scn_event { ____Placeholder_port_scn_event } port_scn_event ;
struct TYPE_2__ {int bfa; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct bfa_fcs_lport_scn_s*,int ) ;
 int FUNC_3 (int ,int *,int ,struct bfa_fcs_lport_scn_s*,int ) ;

__attribute__((used)) static void
FUNC_4(struct bfa_fcs_lport_scn_s *VAR_5,
   enum port_scn_event VAR_6)
{
 struct bfa_fcs_lport_s *VAR_7 = VAR_5->port;

 switch (VAR_6) {
 case 128:
  FUNC_2(VAR_5, VAR_2);
  break;

 case 129:
  FUNC_2(VAR_5, VAR_3);
  FUNC_3(VAR_7->fcs->bfa, &VAR_5->timer,
        VAR_4, VAR_5,
        VAR_0);
  break;

 case 130:
  FUNC_2(VAR_5, VAR_1);
  FUNC_0(VAR_5->fcxp);
  break;

 default:
  FUNC_1(VAR_7->fcs, VAR_6);
 }
}
