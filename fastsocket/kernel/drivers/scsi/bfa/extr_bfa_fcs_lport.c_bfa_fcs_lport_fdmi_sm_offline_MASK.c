
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pwwn; } ;
struct bfa_fcs_lport_s {int fcs; int vport; TYPE_2__ port_cfg; } ;
struct bfa_fcs_lport_fdmi_s {scalar_t__ retry_cnt; TYPE_1__* ms; } ;
typedef enum port_fdmi_event { ____Placeholder_port_fdmi_event } port_fdmi_event ;
struct TYPE_3__ {struct bfa_fcs_lport_s* port; } ;




 int FUNC_0 (struct bfa_fcs_lport_fdmi_s*,int *) ;
 int FUNC_1 (struct bfa_fcs_lport_fdmi_s*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct bfa_fcs_lport_fdmi_s*,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_fcs_lport_fdmi_s *VAR_2,
        enum port_fdmi_event VAR_3)
{
 struct bfa_fcs_lport_s *VAR_4 = VAR_2->ms->port;

 FUNC_4(VAR_4->fcs, VAR_4->port_cfg.pwwn);
 FUNC_4(VAR_4->fcs, VAR_3);

 VAR_2->retry_cnt = 0;

 switch (VAR_3) {
 case 128:
  if (VAR_4->vport) {



   FUNC_3(VAR_2,
      VAR_1);
   FUNC_1(VAR_2, ((void*)0));
  } else {





   FUNC_3(VAR_2,
      VAR_0);
   FUNC_0(VAR_2, ((void*)0));
  }
  break;

 case 129:
  break;

 default:
  FUNC_2(VAR_4->fcs, VAR_3);
 }
}
