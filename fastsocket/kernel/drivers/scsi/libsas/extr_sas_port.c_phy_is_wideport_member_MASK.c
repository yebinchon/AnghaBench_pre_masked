
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {scalar_t__ strict_wide_ports; } ;
struct asd_sas_port {int sas_addr; int attached_sas_addr; } ;
struct asd_sas_phy {int sas_addr; int attached_sas_addr; struct sas_ha_struct* ha; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct asd_sas_port *VAR_1, struct asd_sas_phy *VAR_2)
{
 struct sas_ha_struct *VAR_3 = VAR_2->ha;

 if (FUNC_0(VAR_1->attached_sas_addr, VAR_2->attached_sas_addr,
     VAR_0) != 0 || (VAR_3->strict_wide_ports &&
      FUNC_0(VAR_1->sas_addr, VAR_2->sas_addr, VAR_0) != 0))
  return 0;
 return 1;
}
