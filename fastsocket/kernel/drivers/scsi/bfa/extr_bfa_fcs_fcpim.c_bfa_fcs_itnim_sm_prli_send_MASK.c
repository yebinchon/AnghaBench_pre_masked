
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfa_fcs_itnim_s {TYPE_1__* fcs; int fcxp_wqe; TYPE_2__* rport; } ;
typedef enum bfa_fcs_itnim_event { ____Placeholder_bfa_fcs_itnim_event } bfa_fcs_itnim_event ;
struct TYPE_5__ {int pwwn; } ;
struct TYPE_4__ {int bfa; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_fcs_itnim_s*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (struct bfa_fcs_itnim_s*,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_fcs_itnim_s *VAR_5,
   enum bfa_fcs_itnim_event VAR_6)
{
 FUNC_5(VAR_5->fcs, VAR_5->rport->pwwn);
 FUNC_5(VAR_5->fcs, VAR_6);

 switch (VAR_6) {
 case 130:
  FUNC_4(VAR_5, VAR_4);
  break;

 case 129:
  FUNC_4(VAR_5, VAR_2);
  FUNC_1(VAR_5->fcs->bfa, &VAR_5->fcxp_wqe);
  FUNC_3(VAR_5->rport, VAR_0);
  break;

 case 128:
  FUNC_4(VAR_5, VAR_3);
  FUNC_1(VAR_5->fcs->bfa, &VAR_5->fcxp_wqe);
  FUNC_3(VAR_5->rport, VAR_1);
  break;

 case 131:
  FUNC_4(VAR_5, VAR_3);
  FUNC_1(VAR_5->fcs->bfa, &VAR_5->fcxp_wqe);
  FUNC_0(VAR_5);
  break;

 default:
  FUNC_2(VAR_5->fcs, VAR_6);
 }
}
