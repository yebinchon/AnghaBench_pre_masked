
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfa_s {int dummy; } ;
struct TYPE_5__ {int pwwn; } ;
struct TYPE_6__ {TYPE_1__ port_cfg; } ;
struct bfa_fcs_fabric_s {TYPE_3__* fcs; int lps; TYPE_2__ bport; } ;
typedef enum bfa_fcs_fabric_event { ____Placeholder_bfa_fcs_fabric_event } bfa_fcs_fabric_event ;
struct TYPE_7__ {struct bfa_s* bfa; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_s*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct bfa_fcs_fabric_s*,int ) ;
 int FUNC_4 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_fcs_fabric_s *VAR_4,
      enum bfa_fcs_fabric_event VAR_5)
{
 struct bfa_s *VAR_6 = VAR_4->fcs->bfa;

 FUNC_4(VAR_4->fcs, VAR_4->bport.port_cfg.pwwn);
 FUNC_4(VAR_4->fcs, VAR_5);

 switch (VAR_5) {
 case 128:
  if (FUNC_0(VAR_6) == VAR_1) {
   FUNC_3(VAR_4, VAR_3);
  } else {
   FUNC_3(VAR_4, VAR_2);
   FUNC_2(VAR_4->lps, VAR_0);
  }
  break;

 case 129:
  break;

 case 130:
  if (FUNC_0(VAR_6) == VAR_1)
   FUNC_3(VAR_4, VAR_3);
  else
   FUNC_3(VAR_4, VAR_2);
  break;

 default:
  FUNC_1(VAR_4->fcs, VAR_5);
 }
}
