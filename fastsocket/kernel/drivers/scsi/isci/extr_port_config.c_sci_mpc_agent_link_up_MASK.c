
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sci_port_configuration_agent {int phy_ready_mask; int phy_configured_mask; } ;
struct isci_port {int active_phy_mask; } ;
struct isci_phy {int phy_index; } ;
struct isci_host {int dummy; } ;


 int FUNC_0 (struct isci_port*,struct isci_phy*) ;

__attribute__((used)) static void FUNC_1(struct isci_host *VAR_0,
           struct sci_port_configuration_agent *VAR_1,
           struct isci_port *VAR_2,
           struct isci_phy *VAR_3)
{




 if (!VAR_2)
  return;

 VAR_1->phy_ready_mask |= (1 << VAR_3->phy_index);
 FUNC_0(VAR_2, VAR_3);
 if ((VAR_2->active_phy_mask & (1 << VAR_3->phy_index)))
  VAR_1->phy_configured_mask |= (1 << VAR_3->phy_index);
}
