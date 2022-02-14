
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {struct isci_host* lldd_ha; } ;
struct isci_host {int flags; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (struct sas_ha_struct*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

int FUNC_3(struct Scsi_Host *VAR_1, unsigned long VAR_2)
{
 struct sas_ha_struct *VAR_3 = FUNC_0(VAR_1);
 struct isci_host *VAR_4 = VAR_3->lldd_ha;

 if (FUNC_2(VAR_0, &VAR_4->flags))
  return 0;

 FUNC_1(VAR_3);

 return 1;
}
