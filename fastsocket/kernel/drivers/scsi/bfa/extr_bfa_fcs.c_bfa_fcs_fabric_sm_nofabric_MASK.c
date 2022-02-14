
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pwwn; } ;
struct TYPE_6__ {TYPE_1__ port_cfg; } ;
struct bfa_fcs_fabric_s {int bb_credit; TYPE_3__* fcs; int lps; TYPE_2__ bport; } ;
typedef enum bfa_fcs_fabric_event { ____Placeholder_bfa_fcs_fabric_event } bfa_fcs_fabric_event ;
struct TYPE_7__ {int bfa; } ;






 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct bfa_fcs_fabric_s*) ;
 int FUNC_2 (struct bfa_fcs_fabric_s*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct bfa_fcs_fabric_s*,int ) ;
 int FUNC_6 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcs_fabric_s *VAR_3,
      enum bfa_fcs_fabric_event VAR_4)
{
 FUNC_6(VAR_3->fcs, VAR_3->bport.port_cfg.pwwn);
 FUNC_6(VAR_3->fcs, VAR_4);

 switch (VAR_4) {
 case 130:
  FUNC_5(VAR_3, VAR_2);
  FUNC_4(VAR_3->lps, VAR_0);
  FUNC_2(VAR_3);
  break;

 case 131:
  FUNC_5(VAR_3, VAR_1);
  FUNC_1(VAR_3);
  break;

 case 129:
  FUNC_6(VAR_3->fcs, VAR_3->bb_credit);
  FUNC_0(VAR_3->fcs->bfa,
        VAR_3->bb_credit);
  break;

 case 128:
  break;

 default:
  FUNC_3(VAR_3->fcs, VAR_4);
 }
}
