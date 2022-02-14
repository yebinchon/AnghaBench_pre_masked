
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {int (* notify_ha_event ) (struct sas_ha_struct*,int ) ;} ;
struct asd_ha_struct {int pcidev; struct sas_ha_struct sas_ha; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct asd_ha_struct*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sas_ha_struct*,int ) ;

__attribute__((used)) static void FUNC_4(struct asd_ha_struct *VAR_1)
{
 struct sas_ha_struct *VAR_2 = &VAR_1->sas_ha;

 FUNC_0("chip reset for %s\n", FUNC_2(VAR_1->pcidev));
 FUNC_1(VAR_1);
 VAR_2->notify_ha_event(VAR_2, VAR_0);
}
