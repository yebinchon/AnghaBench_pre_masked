
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfa_fcs_rport_s {int pwwn; int pid; TYPE_2__* fcs; int plogi_retries; int timer; int scn_online; TYPE_4__* port; int ns_retries; int plogi_pending; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;
struct TYPE_7__ {TYPE_1__* fcs; int fabric; } ;
struct TYPE_6__ {int bfa; } ;
struct TYPE_5__ {int bfa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_3 (struct bfa_fcs_rport_s*) ;
 int FUNC_4 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_5 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_6 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_7 (struct bfa_fcs_rport_s*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_10 (int ,int *,int ,struct bfa_fcs_rport_s*,int ) ;
 int FUNC_11 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_12(struct bfa_fcs_rport_s *VAR_10,
    enum rport_event VAR_11)
{
 FUNC_11(VAR_10->fcs, VAR_10->pwwn);
 FUNC_11(VAR_10->fcs, VAR_10->pid);
 FUNC_11(VAR_10->fcs, VAR_11);

 switch (VAR_11) {
 case 134:
  if (FUNC_2(VAR_10->port) &&
      (VAR_10->plogi_pending)) {
   VAR_10->plogi_pending = VAR_0;
   FUNC_9(VAR_10,
    VAR_7);
   FUNC_7(VAR_10, ((void*)0));
   break;
  }




 case 137:
  if (!FUNC_2(VAR_10->port)) {
   VAR_10->pid = 0;
   FUNC_9(VAR_10, VAR_5);
   FUNC_10(VAR_10->fcs->bfa, &VAR_10->timer,
     VAR_9, VAR_10,
     VAR_2);
   break;
  }
  if (FUNC_1(VAR_10->port->fabric)) {
   FUNC_9(VAR_10,
    VAR_4);
   VAR_10->ns_retries = 0;
   FUNC_5(VAR_10, ((void*)0));
  } else if (FUNC_0(VAR_10->port->fcs->bfa) ==
     VAR_1) {
   if (VAR_10->scn_online) {
    FUNC_9(VAR_10,
     VAR_3);
    FUNC_4(VAR_10, ((void*)0));
   } else {
    FUNC_9(VAR_10,
     VAR_5);
    FUNC_10(VAR_10->fcs->bfa, &VAR_10->timer,
     VAR_9, VAR_10,
     VAR_2);
   }
  } else {
   FUNC_9(VAR_10, VAR_6);
   VAR_10->plogi_retries = 0;
   FUNC_6(VAR_10, ((void*)0));
  }
  break;

 case 136:
  FUNC_9(VAR_10, VAR_8);
  FUNC_3(VAR_10);
  break;

 case 128:
 case 129:
 case 135:
 case 132:
 case 130:
 case 131:
 case 133:



  break;

 default:
  FUNC_8(VAR_10->fcs, VAR_11);
 }
}
