
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_port {struct isci_host* owning_controller; } ;
struct isci_phy {int dummy; } ;
struct isci_host {int dummy; } ;


 int FUNC_0 (struct isci_host*,struct isci_port*,struct isci_phy*) ;

void FUNC_1(struct isci_port *VAR_0, struct isci_phy *VAR_1)
{
 struct isci_host *VAR_2 = VAR_0->owning_controller;


 FUNC_0(VAR_2, VAR_0, VAR_1);
}
