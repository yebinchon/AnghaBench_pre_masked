
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pwwn; } ;
struct TYPE_3__ {TYPE_2__ port_cfg; } ;
struct bfa_fcs_fabric_s {int fcs; TYPE_1__ bport; } ;
typedef enum bfa_fcs_fabric_event { ____Placeholder_bfa_fcs_fabric_event } bfa_fcs_fabric_event ;





 int FUNC_0 (struct bfa_fcs_fabric_s*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct bfa_fcs_fabric_s*,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_fcs_fabric_s *VAR_1,
    enum bfa_fcs_fabric_event VAR_2)
{
 FUNC_4(VAR_1->fcs, VAR_1->bport.port_cfg.pwwn);
 FUNC_4(VAR_1->fcs, VAR_2);

 switch (VAR_2) {
 case 130:
  FUNC_3(VAR_1, VAR_0);
  FUNC_0(VAR_1);
  FUNC_1(&VAR_1->bport, &VAR_1->bport.port_cfg);
  break;

 case 128:
 case 129:
  break;

 default:
  FUNC_2(VAR_1->fcs, VAR_2);
 }
}
