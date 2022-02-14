
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sci_user_parameters {TYPE_1__* phys; } ;
struct isci_port {int physical_port_index; scalar_t__* phy_table; struct isci_host* owning_controller; } ;
struct isci_host {struct sci_user_parameters user_parameters; } ;
struct TYPE_2__ {scalar_t__ max_speed_generation; } ;


 int VAR_0 ;

bool FUNC_0(struct isci_port *VAR_1, u32 VAR_2)
{
 struct isci_host *VAR_3 = VAR_1->owning_controller;
 struct sci_user_parameters *VAR_4 = &VAR_3->user_parameters;


 u32 VAR_5 = VAR_0;
 u32 VAR_6;

 if ((VAR_1->physical_port_index == 1) && (VAR_2 != 1))
  return 0;

 if (VAR_1->physical_port_index == 3 && VAR_2 != 3)
  return 0;

 if (VAR_1->physical_port_index == 2 &&
     (VAR_2 == 0 || VAR_2 == 1))
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (VAR_1->phy_table[VAR_6] && VAR_6 != VAR_2)
   VAR_5 = VAR_6;




 if (VAR_5 < VAR_0 &&
     VAR_4->phys[VAR_2].max_speed_generation !=
     VAR_4->phys[VAR_5].max_speed_generation)
  return 0;

 return 1;
}
