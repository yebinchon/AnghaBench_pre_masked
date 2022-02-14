
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_fcs_rport_s {int pwwn; int pid; int fcs; int plogi_retries; int timer; int ns_retries; TYPE_2__* port; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;
struct TYPE_4__ {TYPE_1__* fcs; } ;
struct TYPE_3__ {int bfa; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_fcs_rport_s*) ;
 int FUNC_3 (struct bfa_fcs_rport_s*) ;
 int FUNC_4 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_5 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_6 (struct bfa_fcs_rport_s*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static void
FUNC_11(struct bfa_fcs_rport_s *VAR_6, enum rport_event VAR_7)
{
 FUNC_10(VAR_6->fcs, VAR_6->pwwn);
 FUNC_10(VAR_6->fcs, VAR_6->pid);
 FUNC_10(VAR_6->fcs, VAR_7);

 switch (VAR_7) {
 case 128:
  FUNC_8(VAR_6, VAR_5);
  FUNC_3(VAR_6);
  break;

 case 137:
 case 139:
  FUNC_9(&VAR_6->timer);
  FUNC_0(!(FUNC_1(VAR_6->port->fcs->bfa) !=
     VAR_0));
  FUNC_8(VAR_6, VAR_2);
  VAR_6->ns_retries = 0;
  FUNC_4(VAR_6, ((void*)0));
  break;

 case 138:
  FUNC_8(VAR_6, VAR_5);
  FUNC_9(&VAR_6->timer);
  FUNC_3(VAR_6);
  break;

 case 133:
  FUNC_8(VAR_6, VAR_4);
  FUNC_9(&VAR_6->timer);
  FUNC_6(VAR_6, ((void*)0));
  break;

 case 135:
 case 131:
 case 136:
 case 130:
  break;

 case 134:
  FUNC_8(VAR_6, VAR_1);
  FUNC_9(&VAR_6->timer);
  FUNC_2(VAR_6);
  break;

 case 129:
  FUNC_9(&VAR_6->timer);
  FUNC_8(VAR_6, VAR_3);
  FUNC_5(VAR_6, ((void*)0));
  break;

 case 132:
  FUNC_9(&VAR_6->timer);
  FUNC_8(VAR_6, VAR_3);
  VAR_6->plogi_retries = 0;
  FUNC_5(VAR_6, ((void*)0));
  break;

 default:
  FUNC_7(VAR_6->fcs, VAR_7);
 }
}
