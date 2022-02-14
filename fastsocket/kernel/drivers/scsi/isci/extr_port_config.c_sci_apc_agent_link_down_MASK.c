
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sci_port_configuration_agent {int phy_ready_mask; int phy_configured_mask; } ;
struct isci_port {int dummy; } ;
struct isci_phy {int phy_index; } ;
struct isci_host {int dummy; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;


 int VAR_0 ;
 int FUNC_0 (struct isci_port*,struct isci_phy*) ;

__attribute__((used)) static void FUNC_1(
 struct isci_host *VAR_1,
 struct sci_port_configuration_agent *VAR_2,
 struct isci_port *VAR_3,
 struct isci_phy *VAR_4)
{
 VAR_2->phy_ready_mask &= ~(1 << VAR_4->phy_index);

 if (!VAR_3)
  return;
 if (VAR_2->phy_configured_mask & (1 << VAR_4->phy_index)) {
  enum sci_status VAR_5;

  VAR_5 = FUNC_0(VAR_3, VAR_4);

  if (VAR_5 == VAR_0)
   VAR_2->phy_configured_mask &= ~(1 << VAR_4->phy_index);
 }
}
