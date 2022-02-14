
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct isci_port {struct isci_phy** phy_table; } ;
struct isci_phy {TYPE_1__* link_layer_registers; } ;
struct TYPE_2__ {int link_layer_control; } ;


 int FUNC_0 (struct isci_phy**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct isci_port *VAR_0)
{
 struct isci_phy *VAR_1;
 u32 VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0->phy_table); VAR_3++) {
  VAR_1 = VAR_0->phy_table[VAR_3];
  if (!VAR_1)
   continue;
  VAR_2 = FUNC_1(&VAR_1->link_layer_registers->link_layer_control);

  FUNC_2(VAR_2, &VAR_1->link_layer_registers->link_layer_control);
 }
}
