
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_port {scalar_t__ logical_port_index; int * port_pe_configuration_register; struct isci_host* owning_controller; } ;
struct isci_phy {scalar_t__ protocol; size_t phy_index; } ;
struct isci_host {struct isci_port* ports; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct isci_port*,struct isci_phy*) ;
 scalar_t__ FUNC_1 (struct isci_port*) ;
 int FUNC_2 (size_t,int *) ;

bool FUNC_3(struct isci_port *VAR_2, struct isci_phy *VAR_3)
{
 if ((VAR_2->logical_port_index != VAR_1) &&
     (VAR_3->protocol == VAR_0)) {
  if (FUNC_1(VAR_2)) {
   FUNC_0(VAR_2, VAR_3);
   return 0;
  } else {
   struct isci_host *VAR_4 = VAR_2->owning_controller;
   struct isci_port *VAR_5 = &(VAR_4->ports[VAR_3->phy_index]);
   FUNC_2(VAR_3->phy_index,
          &VAR_5->port_pe_configuration_register[VAR_3->phy_index]);
  }
 }

 return 1;
}
