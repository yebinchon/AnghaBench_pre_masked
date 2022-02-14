
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct Scsi_Host* shost; } ;
struct sas_ha_struct {int num_phys; int lldd_max_execute_num; TYPE_3__ core; int lldd_queue_size; int * sas_addr; int lldd_module; int dev; int sas_ha_name; int ** sas_port; int ** sas_phy; struct pm8001_hba_info* lldd_ha; } ;
struct pm8001_hba_info {int * sas_addr; int dev; TYPE_2__* port; TYPE_1__* phy; } ;
struct pm8001_chip_info {int n_phy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_5__ {int sas_port; } ;
struct TYPE_4__ {int sas_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct Scsi_Host *VAR_3,
         const struct pm8001_chip_info *VAR_4)
{
 int VAR_5 = 0;
 struct pm8001_hba_info *VAR_6;
 struct sas_ha_struct *VAR_7 = FUNC_0(VAR_3);

 VAR_6 = VAR_7->lldd_ha;
 for (VAR_5 = 0; VAR_5 < VAR_4->n_phy; VAR_5++) {
  VAR_7->sas_phy[VAR_5] = &VAR_6->phy[VAR_5].sas_phy;
  VAR_7->sas_port[VAR_5] = &VAR_6->port[VAR_5].sas_port;
 }
 VAR_7->sas_ha_name = VAR_0;
 VAR_7->dev = VAR_6->dev;

 VAR_7->lldd_module = VAR_2;
 VAR_7->sas_addr = &VAR_6->sas_addr[0];
 VAR_7->num_phys = VAR_4->n_phy;
 VAR_7->lldd_max_execute_num = 1;
 VAR_7->lldd_queue_size = VAR_1;
 VAR_7->core.shost = VAR_3;
}
