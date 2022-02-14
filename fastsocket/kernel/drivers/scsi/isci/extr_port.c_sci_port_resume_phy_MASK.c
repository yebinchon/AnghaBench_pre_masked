
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_port {int enabled_phy_mask; } ;
struct isci_phy {int phy_index; } ;


 int FUNC_0 (struct isci_phy*) ;

__attribute__((used)) static void FUNC_1(struct isci_port *VAR_0, struct isci_phy *VAR_1)
{
 FUNC_0(VAR_1);
 VAR_0->enabled_phy_mask |= 1 << VAR_1->phy_index;
}
