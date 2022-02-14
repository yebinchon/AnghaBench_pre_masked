
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct isci_port {int active_phy_mask; struct isci_host* owning_controller; } ;
struct isci_phy {scalar_t__ protocol; int phy_index; } ;
struct isci_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct isci_host*,struct isci_port*,struct isci_phy*) ;
 int FUNC_1 (struct isci_host*,struct isci_phy*) ;
 int FUNC_2 (struct isci_phy*) ;

__attribute__((used)) static void FUNC_3(struct isci_port *VAR_3,
      struct isci_phy *VAR_4,
      u8 VAR_5)
{
 struct isci_host *VAR_6 = VAR_3->owning_controller;

 if (VAR_4->protocol != VAR_2 && (VAR_5 & VAR_1))
  FUNC_2(VAR_4);

 VAR_3->active_phy_mask |= 1 << VAR_4->phy_index;

 FUNC_1(VAR_6, VAR_4);

 if (VAR_5 & VAR_0)
  FUNC_0(VAR_6, VAR_3, VAR_4);
}
