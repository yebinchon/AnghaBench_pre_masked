
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sci_port_configuration_agent {int phy_ready_mask; } ;
struct isci_port {int dummy; } ;
struct isci_phy {int phy_index; } ;
struct isci_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sci_port_configuration_agent*,int ) ;
 int FUNC_1 (struct isci_port*,struct isci_phy*) ;

__attribute__((used)) static void FUNC_2(struct isci_host *VAR_1,
           struct sci_port_configuration_agent *VAR_2,
           struct isci_port *VAR_3,
           struct isci_phy *VAR_4)
{
 u8 VAR_5 = VAR_4->phy_index;

 if (!VAR_3) {

  VAR_2->phy_ready_mask |= 1 << VAR_5;
  FUNC_0(VAR_2,
       VAR_0);
 } else {

  VAR_2->phy_ready_mask |= 1 << VAR_5;
  FUNC_1(VAR_3, VAR_4);
 }
}
