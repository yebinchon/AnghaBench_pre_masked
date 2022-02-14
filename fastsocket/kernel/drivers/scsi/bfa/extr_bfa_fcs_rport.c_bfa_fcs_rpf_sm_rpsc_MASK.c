
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_fcs_rport_s {int pid; TYPE_1__* fcs; int bfa_rport; } ;
struct bfa_fcs_rpf_s {int rpsc_retries; int fcxp; int timer; int assigned_speed; int rpsc_speed; struct bfa_fcs_rport_s* rport; } ;
typedef enum rpf_event { ____Placeholder_rpf_event } rpf_event ;
struct TYPE_3__ {int bfa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (struct bfa_fcs_rpf_s*,int ) ;
 int FUNC_4 (int ,int *,int ,struct bfa_fcs_rpf_s*,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_fcs_rpf_s *VAR_7, enum rpf_event VAR_8)
{
 struct bfa_fcs_rport_s *VAR_9 = VAR_7->rport;

 FUNC_5(VAR_9->fcs, VAR_9->pid);
 FUNC_5(VAR_9->fcs, VAR_8);

 switch (VAR_8) {
 case 130:
  FUNC_3(VAR_7, VAR_4);

  if (VAR_7->rpsc_speed != VAR_2)
   FUNC_1(VAR_9->bfa_rport, VAR_7->rpsc_speed);
  else if (VAR_7->assigned_speed != VAR_2)
   FUNC_1(VAR_9->bfa_rport, VAR_7->assigned_speed);
  break;

 case 128:

  FUNC_3(VAR_7, VAR_4);
  break;

 case 129:

  if (VAR_7->rpsc_retries++ < VAR_0) {
   FUNC_4(VAR_9->fcs->bfa, &VAR_7->timer,
        VAR_6, VAR_7,
        VAR_1);
   FUNC_3(VAR_7, VAR_5);
  } else {
   FUNC_3(VAR_7, VAR_4);
  }
  break;

 case 131:
  FUNC_3(VAR_7, VAR_3);
  FUNC_0(VAR_7->fcxp);
  VAR_7->rpsc_retries = 0;
  break;

 default:
  FUNC_2(VAR_9->fcs, VAR_8);
 }
}
