
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {int dev; } ;
typedef enum ha_event { ____Placeholder_ha_event } ha_event ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;

void FUNC_2(struct sas_ha_struct *VAR_1, enum ha_event VAR_2)
{
 FUNC_0("ha %s: %s event\n", FUNC_1(VAR_1->dev),
      VAR_0[VAR_2]);
}
