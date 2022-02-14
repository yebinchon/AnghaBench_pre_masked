
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


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(struct bfa_fcs_fabric_s *VAR_0,
       enum bfa_fcs_fabric_event VAR_1)
{
 FUNC_0(VAR_0->fcs, VAR_0->bport.port_cfg.pwwn);
 FUNC_0(VAR_0->fcs, VAR_1);
}
