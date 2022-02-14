
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pwwn; } ;
struct TYPE_4__ {TYPE_1__ port_cfg; } ;
struct bfa_fcs_fabric_s {int fcs; TYPE_2__ bport; } ;
typedef enum bfa_fcs_fabric_event { ____Placeholder_bfa_fcs_fabric_event } bfa_fcs_fabric_event ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct bfa_fcs_fabric_s*,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct bfa_fcs_fabric_s *VAR_2,
         enum bfa_fcs_fabric_event VAR_3)
{
 FUNC_2(VAR_2->fcs, VAR_2->bport.port_cfg.pwwn);
 FUNC_2(VAR_2->fcs, VAR_3);

 switch (VAR_3) {
 case 129:
  FUNC_1(VAR_2, VAR_0);
  break;

 case 128:
  FUNC_1(VAR_2, VAR_1);
  break;

 default:
  FUNC_0(VAR_2->fcs, VAR_3);
 }
}
