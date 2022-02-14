
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfa_fcs_rport_s {int pwwn; int pid; TYPE_3__* fcs; int timer; int fcxp_wqe; int ns_retries; TYPE_2__* port; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;
struct TYPE_7__ {int bfa; } ;
struct TYPE_6__ {TYPE_1__* fcs; } ;
struct TYPE_5__ {int bfa; } ;


 int VAR_0 ;







 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct bfa_fcs_rport_s*) ;
 int FUNC_3 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_4 (struct bfa_fcs_rport_s*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_8 (int ,int *,int ,struct bfa_fcs_rport_s*,int ) ;
 int FUNC_9 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_10(struct bfa_fcs_rport_s *VAR_8,
  enum rport_event VAR_9)
{
 FUNC_9(VAR_8->fcs, VAR_8->pwwn);
 FUNC_9(VAR_8->fcs, VAR_8->pid);
 FUNC_9(VAR_8->fcs, VAR_9);

 switch (VAR_9) {
 case 131:
  FUNC_7(VAR_8, VAR_4);
  break;

 case 133:
  FUNC_7(VAR_8, VAR_6);
  FUNC_5(VAR_8->fcs->bfa, &VAR_8->fcxp_wqe);
  FUNC_2(VAR_8);
  break;

 case 129:
  FUNC_7(VAR_8, VAR_5);
  FUNC_5(VAR_8->fcs->bfa, &VAR_8->fcxp_wqe);
  FUNC_4(VAR_8, ((void*)0));
  break;

 case 128:
  FUNC_7(VAR_8, VAR_3);
  FUNC_5(VAR_8->fcs->bfa, &VAR_8->fcxp_wqe);
  FUNC_8(VAR_8->fcs->bfa, &VAR_8->timer,
    VAR_7, VAR_8,
    VAR_1);
  break;
 case 134:
 case 132:

  FUNC_5(VAR_8->fcs->bfa, &VAR_8->fcxp_wqe);
  FUNC_0(!(FUNC_1(VAR_8->port->fcs->bfa) !=
     VAR_0));
  FUNC_7(VAR_8, VAR_2);
  VAR_8->ns_retries = 0;
  FUNC_3(VAR_8, ((void*)0));
  break;

 case 130:
  VAR_8->pid = 0;
  FUNC_7(VAR_8, VAR_3);
  FUNC_5(VAR_8->fcs->bfa, &VAR_8->fcxp_wqe);
  FUNC_8(VAR_8->fcs->bfa, &VAR_8->timer,
    VAR_7, VAR_8,
    VAR_1);
  break;


 default:
  FUNC_6(VAR_8->fcs, VAR_9);
 }
}
