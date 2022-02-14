
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sci_port_configuration_agent {int phy_ready_mask; int phy_configured_mask; int timer_pending; int timer; } ;
struct isci_port {int dummy; } ;
struct isci_phy {int phy_index; } ;
struct isci_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct isci_port*,struct isci_phy*) ;

__attribute__((used)) static void FUNC_2(
 struct isci_host *VAR_1,
 struct sci_port_configuration_agent *VAR_2,
 struct isci_port *VAR_3,
 struct isci_phy *VAR_4)
{
 if (VAR_3 != ((void*)0)) {







  VAR_2->phy_ready_mask &= ~(1 << VAR_4->phy_index);
  VAR_2->phy_configured_mask &= ~(1 << VAR_4->phy_index);







  if ((VAR_2->phy_configured_mask == 0x0000) &&
      (VAR_2->phy_ready_mask != 0x0000) &&
      !VAR_2->timer_pending) {
   VAR_2->timer_pending = 1;

   FUNC_0(&VAR_2->timer,
          VAR_0);
  }

  FUNC_1(VAR_3, VAR_4);
 }
}
