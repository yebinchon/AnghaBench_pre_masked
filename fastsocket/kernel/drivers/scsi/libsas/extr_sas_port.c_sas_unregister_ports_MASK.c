
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_ha_struct {int num_phys; TYPE_1__** sas_phy; } ;
struct TYPE_2__ {scalar_t__ port; } ;


 int FUNC_0 (TYPE_1__*,int ) ;

void FUNC_1(struct sas_ha_struct *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_phys; VAR_1++)
  if (VAR_0->sas_phy[VAR_1]->port)
   FUNC_0(VAR_0->sas_phy[VAR_1], 0);

}
