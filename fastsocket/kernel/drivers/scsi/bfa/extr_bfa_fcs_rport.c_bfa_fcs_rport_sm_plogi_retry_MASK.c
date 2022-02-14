
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfa_fcs_rport_s {int pwwn; int pid; TYPE_3__* fcs; int timer; int ns_retries; TYPE_2__* port; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;
struct TYPE_7__ {int bfa; } ;
struct TYPE_6__ {TYPE_1__* fcs; } ;
struct TYPE_5__ {int bfa; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct bfa_fcs_rport_s*) ;
 int FUNC_3 (struct bfa_fcs_rport_s*) ;
 int FUNC_4 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_5 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_6 (struct bfa_fcs_rport_s*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_9 (int ,int *,int ,struct bfa_fcs_rport_s*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_12(struct bfa_fcs_rport_s *VAR_9,
   enum rport_event VAR_10)
{
 FUNC_11(VAR_9->fcs, VAR_9->pwwn);
 FUNC_11(VAR_9->fcs, VAR_9->pid);
 FUNC_11(VAR_9->fcs, VAR_10);

 switch (VAR_10) {
 case 128:
  FUNC_8(VAR_9, VAR_5);
  FUNC_5(VAR_9, ((void*)0));
  break;

 case 136:
  FUNC_8(VAR_9, VAR_7);
  FUNC_10(&VAR_9->timer);
  FUNC_3(VAR_9);
  break;

 case 130:
 case 133:
  break;

 case 131:
  FUNC_8(VAR_9, VAR_6);
  FUNC_10(&VAR_9->timer);
  FUNC_6(VAR_9, ((void*)0));
  break;

 case 129:
  FUNC_8(VAR_9, VAR_4);
  FUNC_10(&VAR_9->timer);
  FUNC_9(VAR_9->fcs->bfa, &VAR_9->timer,
    VAR_8, VAR_9,
    VAR_1);
  break;

 case 137:
 case 135:
  FUNC_10(&VAR_9->timer);
  FUNC_0(!(FUNC_1(VAR_9->port->fcs->bfa) !=
     VAR_0));
  FUNC_8(VAR_9, VAR_3);
  VAR_9->ns_retries = 0;
  FUNC_4(VAR_9, ((void*)0));
  break;

 case 134:
  VAR_9->pid = 0;
  FUNC_8(VAR_9, VAR_4);
  FUNC_10(&VAR_9->timer);
  FUNC_9(VAR_9->fcs->bfa, &VAR_9->timer,
    VAR_8, VAR_9,
    VAR_1);
  break;

 case 132:
  FUNC_8(VAR_9, VAR_2);
  FUNC_10(&VAR_9->timer);
  FUNC_2(VAR_9);
  break;

 default:
  FUNC_7(VAR_9->fcs, VAR_10);
 }
}
