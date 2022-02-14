
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_fcs_rport_s {int pwwn; int pid; TYPE_1__* fcs; int fcxp_wqe; int prlo; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;
struct TYPE_3__ {int bfa; } ;


 int VAR_0 ;







 int FUNC_0 (struct bfa_fcs_rport_s*) ;
 int FUNC_1 (struct bfa_fcs_rport_s*) ;
 int FUNC_2 (struct bfa_fcs_rport_s*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcs_rport_s *VAR_2,
  enum rport_event VAR_3)
{
 FUNC_6(VAR_2->fcs, VAR_2->pwwn);
 FUNC_6(VAR_2->fcs, VAR_2->pid);
 FUNC_6(VAR_2->fcs, VAR_3);

 switch (VAR_3) {
 case 132:

  FUNC_5(VAR_2, VAR_1);
  FUNC_0(VAR_2);
  break;

 case 128:
 case 129:
 case 133:
 case 134:
  break;

 case 131:
  FUNC_1(VAR_2);
 case 130:
  if (VAR_2->prlo == VAR_0)
   FUNC_2(VAR_2);

  FUNC_5(VAR_2, VAR_1);
  FUNC_3(VAR_2->fcs->bfa, &VAR_2->fcxp_wqe);
  FUNC_0(VAR_2);
  break;

 default:
  FUNC_4(VAR_2->fcs, VAR_3);
 }
}
