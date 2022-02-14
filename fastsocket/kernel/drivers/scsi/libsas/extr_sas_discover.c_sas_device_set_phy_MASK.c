
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_port {int dummy; } ;
struct sas_phy {int dummy; } ;
struct sas_ha_struct {int phy_port_lock; } ;
struct domain_device {struct sas_phy* phy; TYPE_1__* port; } ;
struct TYPE_2__ {struct sas_ha_struct* ha; } ;


 struct sas_phy* FUNC_0 (struct sas_port*) ;
 int FUNC_1 (struct sas_phy*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct domain_device *VAR_0, struct sas_port *VAR_1)
{
 struct sas_ha_struct *VAR_2;
 struct sas_phy *VAR_3;

 if (!VAR_0)
  return;

 VAR_2 = VAR_0->port->ha;
 VAR_3 = FUNC_0(VAR_1);


 FUNC_2(&VAR_2->phy_port_lock);
 if (VAR_3) {
  FUNC_1(VAR_0->phy);
  VAR_0->phy = VAR_3;
 }
 FUNC_3(&VAR_2->phy_port_lock);
}
