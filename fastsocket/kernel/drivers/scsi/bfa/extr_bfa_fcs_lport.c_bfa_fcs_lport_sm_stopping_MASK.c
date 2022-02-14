
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pwwn; } ;
struct bfa_fcs_lport_s {int fcs; TYPE_2__* fabric; int vport; int num_rports; TYPE_1__ port_cfg; } ;
typedef enum bfa_fcs_lport_event { ____Placeholder_bfa_fcs_lport_event } bfa_fcs_lport_event ;
struct TYPE_4__ {int stop_wc; } ;



 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct bfa_fcs_lport_s *VAR_1,
     enum bfa_fcs_lport_event VAR_2)
{
 FUNC_3(VAR_1->fcs, VAR_1->port_cfg.pwwn);
 FUNC_3(VAR_1->fcs, VAR_2);

 switch (VAR_2) {
 case 128:
  if (VAR_1->num_rports == 0) {
   FUNC_2(VAR_1, VAR_0);

   if (VAR_1->vport)
    FUNC_0(VAR_1->vport);
   else
    FUNC_4(&(VAR_1->fabric->stop_wc));
  }
  break;

 default:
  FUNC_1(VAR_1->fcs, VAR_2);
 }
}
