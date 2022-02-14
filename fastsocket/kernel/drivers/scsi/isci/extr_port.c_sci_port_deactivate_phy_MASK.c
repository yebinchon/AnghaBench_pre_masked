
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct isci_port {int active_phy_mask; int enabled_phy_mask; int last_active_phy; int * port_pe_configuration_register; struct isci_host* owning_controller; } ;
struct isci_phy {int phy_index; int max_negotiated_speed; } ;
struct TYPE_3__ {scalar_t__ mode_type; } ;
struct TYPE_4__ {TYPE_1__ controller; } ;
struct isci_host {TYPE_2__ oem_parameters; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct isci_host*,struct isci_phy*,struct isci_port*) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct isci_port *VAR_2, struct isci_phy *VAR_3,
        bool VAR_4)
{
 struct isci_host *VAR_5 = VAR_2->owning_controller;

 VAR_2->active_phy_mask &= ~(1 << VAR_3->phy_index);
 VAR_2->enabled_phy_mask &= ~(1 << VAR_3->phy_index);
 if (!VAR_2->active_phy_mask)
  VAR_2->last_active_phy = VAR_3->phy_index;

 VAR_3->max_negotiated_speed = VAR_0;




 if (VAR_2->owning_controller->oem_parameters.controller.mode_type ==
  VAR_1)
  FUNC_1(VAR_3->phy_index,
   &VAR_2->port_pe_configuration_register[VAR_3->phy_index]);

 if (VAR_4 == 1)
  FUNC_0(VAR_5, VAR_3, VAR_2);
}
