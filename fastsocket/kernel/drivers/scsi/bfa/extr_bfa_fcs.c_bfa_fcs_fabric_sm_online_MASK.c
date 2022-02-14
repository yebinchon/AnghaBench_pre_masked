
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfa_s {int dummy; } ;
struct TYPE_5__ {int pwwn; } ;
struct TYPE_7__ {TYPE_1__ port_cfg; } ;
struct bfa_fcs_fabric_s {TYPE_2__* fcs; int lps; TYPE_4__ bport; } ;
typedef enum bfa_fcs_fabric_event { ____Placeholder_bfa_fcs_fabric_event } bfa_fcs_fabric_event ;
struct TYPE_6__ {struct bfa_s* bfa; } ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (struct bfa_fcs_fabric_s*) ;
 int FUNC_2 (struct bfa_fcs_fabric_s*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct bfa_fcs_fabric_s*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct bfa_fcs_fabric_s*,int ) ;
 int FUNC_8 (TYPE_2__*,int) ;

void
FUNC_9(struct bfa_fcs_fabric_s *VAR_6,
    enum bfa_fcs_fabric_event VAR_7)
{
 struct bfa_s *VAR_8 = VAR_6->fcs->bfa;

 FUNC_8(VAR_6->fcs, VAR_6->bport.port_cfg.pwwn);
 FUNC_8(VAR_6->fcs, VAR_7);

 switch (VAR_7) {
 case 129:
  FUNC_7(VAR_6, VAR_4);
  if (FUNC_0(VAR_8) == VAR_1) {
   FUNC_4(&VAR_6->bport);
  } else {
   FUNC_6(VAR_6->lps, VAR_0);
   FUNC_2(VAR_6);
  }
  break;

 case 130:
  FUNC_7(VAR_6, VAR_3);
  FUNC_1(VAR_6);
  break;

 case 128:
  FUNC_7(VAR_6, VAR_5);
  FUNC_3(VAR_6);
  break;

 case 132:
  FUNC_7(VAR_6, VAR_2);
  FUNC_6(VAR_6->lps, VAR_0);
  break;

 case 131:
  break;

 default:
  FUNC_5(VAR_6->fcs, VAR_7);
 }
}
