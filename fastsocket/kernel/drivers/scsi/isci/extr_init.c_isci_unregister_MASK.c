
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_host {int sas_ha; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_4 (struct isci_host*) ;

__attribute__((used)) static void FUNC_5(struct isci_host *VAR_0)
{
 struct Scsi_Host *VAR_1;

 if (!VAR_0)
  return;

 FUNC_1(&VAR_0->sas_ha);

 VAR_1 = FUNC_4(VAR_0);
 FUNC_0(VAR_1);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
}
