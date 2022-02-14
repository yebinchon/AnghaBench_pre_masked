
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {int num_phys; struct asd_sas_phy** sas_phy; } ;
struct asd_sas_phy {scalar_t__ suspended; } ;



__attribute__((used)) static int FUNC_0(struct sas_ha_struct *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_phys; VAR_1++) {
  struct asd_sas_phy *VAR_3 = VAR_0->sas_phy[VAR_1];

  if (VAR_3->suspended)
   VAR_2++;
 }

 return VAR_2;
}
