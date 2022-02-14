
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct sas_ha_struct {int pending; } ;
struct sas_ha_event {struct sas_ha_struct* ha; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct sas_ha_event* FUNC_1 (struct work_struct*) ;

void FUNC_2(struct work_struct *VAR_1)
{
 struct sas_ha_event *VAR_2 = FUNC_1(VAR_1);
 struct sas_ha_struct *VAR_3 = VAR_2->ha;

 FUNC_0(VAR_0, &VAR_3->pending);
}
