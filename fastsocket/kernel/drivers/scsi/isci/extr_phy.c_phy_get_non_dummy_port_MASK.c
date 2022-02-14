
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_port {scalar_t__ physical_port_index; } ;
struct isci_phy {struct isci_port* owning_port; } ;


 scalar_t__ VAR_0 ;

struct isci_port *FUNC_0(struct isci_phy *VAR_1)
{
 struct isci_port *VAR_2 = VAR_1->owning_port;

 if (VAR_2->physical_port_index == VAR_0)
  return ((void*)0);

 return VAR_1->owning_port;
}
