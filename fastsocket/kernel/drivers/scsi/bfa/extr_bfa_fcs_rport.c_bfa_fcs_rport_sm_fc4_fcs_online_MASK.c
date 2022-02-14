
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_fcs_rport_s {int pwwn; int pid; TYPE_1__* fcs; int plogi_pending; int bfa_rport; int scsi_function; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;
struct TYPE_3__ {int bfa; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bfa_fcs_rport_s*) ;
 int FUNC_2 (struct bfa_fcs_rport_s*) ;
 int FUNC_3 (struct bfa_fcs_rport_s*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,struct bfa_fcs_rport_s*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_8(struct bfa_fcs_rport_s *VAR_7,
    enum rport_event VAR_8)
{
 FUNC_7(VAR_7->fcs, VAR_7->pwwn);
 FUNC_7(VAR_7->fcs, VAR_7->pid);
 FUNC_7(VAR_7->fcs, VAR_8);

 switch (VAR_8) {
 case 134:
  if (VAR_7->scsi_function == VAR_0) {
   if (!FUNC_0(VAR_7->pid))
    FUNC_1(VAR_7);
   FUNC_6(VAR_7, VAR_6);
   break;
  }

  if (!VAR_7->bfa_rport)
   VAR_7->bfa_rport =
    FUNC_4(VAR_7->fcs->bfa, VAR_7);

  if (VAR_7->bfa_rport) {
   FUNC_6(VAR_7, VAR_5);
   FUNC_3(VAR_7);
  } else {
   FUNC_6(VAR_7, VAR_3);
   FUNC_2(VAR_7);
  }
  break;

 case 130:
  FUNC_6(VAR_7, VAR_4);
  VAR_7->plogi_pending = VAR_1;
  FUNC_2(VAR_7);
  break;

 case 131:
 case 133:
 case 137:
 case 135:
 case 128:
  FUNC_6(VAR_7, VAR_4);
  FUNC_2(VAR_7);
  break;

 case 132:
 case 129:
  FUNC_6(VAR_7, VAR_2);
  FUNC_2(VAR_7);
  break;

 case 136:
  FUNC_6(VAR_7, VAR_3);
  FUNC_2(VAR_7);
  break;

 default:
  FUNC_5(VAR_7->fcs, VAR_8);
  break;
 }
}
