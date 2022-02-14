
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ current_state_id; } ;
struct isci_phy {int is_in_link_training; TYPE_1__ sm; } ;
struct TYPE_4__ {scalar_t__ phy_ready_mask; scalar_t__ phy_configured_mask; } ;
struct isci_host {TYPE_2__ port_agent; struct isci_phy* phys; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct isci_phy*) ;
 scalar_t__ FUNC_1 (struct isci_host*) ;
 int FUNC_2 (struct isci_phy*) ;

bool FUNC_3(struct isci_host *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct isci_phy *VAR_5 = &VAR_3->phys[VAR_4];
  u32 VAR_6 = VAR_5->sm.current_state_id;





  if (FUNC_1(VAR_3))
             ;
  else if (!FUNC_2(VAR_5))
   continue;







  if ((VAR_5->is_in_link_training == 0 && VAR_6 == VAR_1) ||
      (VAR_5->is_in_link_training == 0 && VAR_6 == VAR_2) ||
      (VAR_5->is_in_link_training == 1 && FUNC_0(VAR_5)) ||
      (VAR_3->port_agent.phy_ready_mask != VAR_3->port_agent.phy_configured_mask))
   return 0;
 }

 return 1;
}
