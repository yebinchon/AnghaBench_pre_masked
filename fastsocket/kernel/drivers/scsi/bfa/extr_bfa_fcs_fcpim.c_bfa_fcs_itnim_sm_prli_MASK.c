
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfa_fcs_itnim_s {TYPE_1__* fcs; int fcxp; TYPE_2__* rport; int timer; } ;
typedef enum bfa_fcs_itnim_event { ____Placeholder_bfa_fcs_itnim_event } bfa_fcs_itnim_event ;
struct TYPE_5__ {int pwwn; int scsi_function; } ;
struct TYPE_4__ {int bfa; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bfa_fcs_itnim_s*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (struct bfa_fcs_itnim_s*,int ) ;
 int FUNC_5 (int ,int *,int ,struct bfa_fcs_itnim_s*,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcs_itnim_s *VAR_9,
   enum bfa_fcs_itnim_event VAR_10)
{
 FUNC_6(VAR_9->fcs, VAR_9->rport->pwwn);
 FUNC_6(VAR_9->fcs, VAR_10);

 switch (VAR_10) {
 case 128:
  if (VAR_9->rport->scsi_function == VAR_1)
   FUNC_4(VAR_9, VAR_5);
  else
   FUNC_4(VAR_9,
    VAR_4);

  FUNC_3(VAR_9->rport, VAR_2);
  break;

 case 130:
  FUNC_4(VAR_9, VAR_7);
  FUNC_5(VAR_9->fcs->bfa, &VAR_9->timer,
    VAR_8, VAR_9,
    VAR_0);
  break;

 case 129:
  FUNC_4(VAR_9, VAR_6);
  break;

 case 131:
  FUNC_4(VAR_9, VAR_6);
  FUNC_1(VAR_9->fcxp);
  FUNC_3(VAR_9->rport, VAR_3);
  break;

 case 132:
  FUNC_4(VAR_9, VAR_5);
  FUNC_1(VAR_9->fcxp);
  FUNC_3(VAR_9->rport, VAR_2);
  break;

 case 133:
  FUNC_4(VAR_9, VAR_6);
  FUNC_1(VAR_9->fcxp);
  FUNC_0(VAR_9);
  break;

 default:
  FUNC_2(VAR_9->fcs, VAR_10);
 }
}
