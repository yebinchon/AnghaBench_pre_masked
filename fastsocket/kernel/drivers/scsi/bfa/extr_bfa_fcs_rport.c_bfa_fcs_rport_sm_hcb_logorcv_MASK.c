
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfa_fcs_rport_s {int pwwn; int pid; TYPE_1__* fcs; int prlo; int timer; int plogi_retries; int ns_retries; TYPE_3__* port; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;
struct TYPE_5__ {int fabric; } ;
struct TYPE_4__ {int bfa; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_3 (struct bfa_fcs_rport_s*) ;
 int FUNC_4 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_5 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_6 (struct bfa_fcs_rport_s*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_9 (int ,int *,int ,struct bfa_fcs_rport_s*,int ) ;
 int FUNC_10 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_11(struct bfa_fcs_rport_s *VAR_9,
   enum rport_event VAR_10)
{
 FUNC_10(VAR_9->fcs, VAR_9->pwwn);
 FUNC_10(VAR_9->fcs, VAR_9->pid);
 FUNC_10(VAR_9->fcs, VAR_10);

 switch (VAR_10) {
 case 133:
 case 135:
  if (VAR_9->pid && (VAR_9->prlo == VAR_1))
   FUNC_6(VAR_9);
  if (VAR_9->pid && (VAR_9->prlo == VAR_0))
   FUNC_3(VAR_9);





  if (FUNC_2(VAR_9->port) &&
   (!FUNC_0(VAR_9->pid))) {
   if (FUNC_1(VAR_9->port->fabric)) {
    FUNC_8(VAR_9,
     VAR_5);
    VAR_9->ns_retries = 0;
    FUNC_4(VAR_9, ((void*)0));
   } else {

    FUNC_8(VAR_9,
     VAR_7);
    VAR_9->plogi_retries = 0;
    FUNC_5(VAR_9, ((void*)0));
   }
  } else {




   if (!FUNC_0(VAR_9->pid))
    VAR_9->pid = 0;
   FUNC_8(VAR_9, VAR_6);
   FUNC_9(VAR_9->fcs->bfa, &VAR_9->timer,
     VAR_8, VAR_9,
     VAR_2);
  }
  break;

 case 134:
  FUNC_8(VAR_9, VAR_3);
  if (VAR_9->pid && (VAR_9->prlo == VAR_1))
   FUNC_6(VAR_9);
  if (VAR_9->pid && (VAR_9->prlo == VAR_0))
   FUNC_3(VAR_9);
  break;

 case 132:
  FUNC_8(VAR_9, VAR_4);
  break;

 case 128:
 case 129:
 case 131:
 case 130:



  break;

 default:
  FUNC_7(VAR_9->fcs, VAR_10);
 }
}
