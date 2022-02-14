
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_ha_struct {int num_phys; int lldd_max_execute_num; int strict_wide_ports; int lldd_queue_size; struct asd_sas_port** sas_port; struct asd_sas_phy** sas_phy; int * sas_addr; int lldd_module; int sas_ha_name; } ;
struct isci_host {struct asd_sas_port* sas_ports; TYPE_2__* phys; TYPE_1__* pdev; struct sas_ha_struct sas_ha; } ;
struct asd_sas_port {int dummy; } ;
struct asd_sas_phy {int dummy; } ;
struct TYPE_4__ {struct asd_sas_phy sas_phy; int * sas_addr; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct sas_ha_struct*) ;

__attribute__((used)) static int FUNC_2(struct isci_host *VAR_7)
{
 int VAR_8;
 struct sas_ha_struct *VAR_9 = &(VAR_7->sas_ha);
 struct asd_sas_phy **VAR_10;
 struct asd_sas_port **VAR_11;

 VAR_10 = FUNC_0(&VAR_7->pdev->dev,
    VAR_4 * sizeof(void *),
    VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_0(&VAR_7->pdev->dev,
     VAR_5 * sizeof(void *),
     VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_9->sas_ha_name = VAR_0;
 VAR_9->lldd_module = VAR_6;
 VAR_9->sas_addr = &VAR_7->phys[0].sas_addr[0];

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_10[VAR_8] = &VAR_7->phys[VAR_8].sas_phy;
  VAR_11[VAR_8] = &VAR_7->sas_ports[VAR_8];
 }

 VAR_9->sas_phy = VAR_10;
 VAR_9->sas_port = VAR_11;
 VAR_9->num_phys = VAR_4;

 VAR_9->lldd_queue_size = VAR_3;
 VAR_9->lldd_max_execute_num = 1;
 VAR_9->strict_wide_ports = 1;

 FUNC_1(VAR_9);

 return 0;
}
