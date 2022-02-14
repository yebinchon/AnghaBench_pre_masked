
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_fcs_rport_s {int pwwn; int pid; TYPE_1__* fcs; int fcxp_wqe; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;
struct TYPE_3__ {int bfa; } ;
 int FUNC_0 (struct bfa_fcs_rport_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_fcs_rport_s *VAR_4,
  enum rport_event VAR_5)
{
 FUNC_4(VAR_4->fcs, VAR_4->pwwn);
 FUNC_4(VAR_4->fcs, VAR_4->pid);
 FUNC_4(VAR_4->fcs, VAR_5);

 switch (VAR_5) {
 case 132:
  FUNC_3(VAR_4, VAR_0);
  break;

 case 134:
  FUNC_3(VAR_4, VAR_2);
  FUNC_1(VAR_4->fcs->bfa, &VAR_4->fcxp_wqe);
  FUNC_0(VAR_4);
  break;

 case 131:
 case 135:
  FUNC_3(VAR_4, VAR_3);
  FUNC_1(VAR_4->fcs->bfa, &VAR_4->fcxp_wqe);
  FUNC_0(VAR_4);
  break;

 case 130:
 case 128:
  FUNC_3(VAR_4, VAR_1);
  FUNC_1(VAR_4->fcs->bfa, &VAR_4->fcxp_wqe);
  FUNC_0(VAR_4);
  break;

 case 133:
  break;

 case 129:
  FUNC_3(VAR_4, VAR_3);
  FUNC_1(VAR_4->fcs->bfa, &VAR_4->fcxp_wqe);
  FUNC_0(VAR_4);
  break;

 default:
  FUNC_2(VAR_4->fcs, VAR_5);
 }
}
