
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_vector_map_info {scalar_t__ irq; int channel_id; int phys_id; int core_id; } ;
struct TYPE_2__ {int num_online_cpu; int num_present_cpu; struct lpfc_vector_map_info* cpu_map; } ;
struct lpfc_hba {scalar_t__ sli_rev; scalar_t__ intr_type; int cfg_fcp_cpu_map; TYPE_1__ sli4_hba; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char*,scalar_t__,char*,int,...) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_4, struct device_attribute *VAR_5,
        char *VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_0(VAR_4);
 struct lpfc_vport *VAR_8 = (struct lpfc_vport *)VAR_7->hostdata;
 struct lpfc_hba *VAR_9 = VAR_8->phba;
 struct lpfc_vector_map_info *VAR_10;
 int VAR_11, VAR_12 = 0;

 if ((VAR_9->sli_rev != VAR_0) ||
     (VAR_9->intr_type != VAR_2))
  return VAR_12;

 switch (VAR_9->cfg_fcp_cpu_map) {
 case 0:
  VAR_12 += FUNC_1(VAR_6 + VAR_12, VAR_3-VAR_12,
    "fcp_cpu_map: No mapping (%d)\n",
    VAR_9->cfg_fcp_cpu_map);
  return VAR_12;
 case 1:
  VAR_12 += FUNC_1(VAR_6 + VAR_12, VAR_3-VAR_12,
    "fcp_cpu_map: HBA centric mapping (%d): "
    "%d online CPUs\n",
    VAR_9->cfg_fcp_cpu_map,
    VAR_9->sli4_hba.num_online_cpu);
  break;
 case 2:
  VAR_12 += FUNC_1(VAR_6 + VAR_12, VAR_3-VAR_12,
    "fcp_cpu_map: Driver centric mapping (%d): "
    "%d online CPUs\n",
    VAR_9->cfg_fcp_cpu_map,
    VAR_9->sli4_hba.num_online_cpu);
  break;
 }

 VAR_10 = VAR_9->sli4_hba.cpu_map;
 for (VAR_11 = 0; VAR_11 < VAR_9->sli4_hba.num_present_cpu; VAR_11++) {
  if (VAR_10->irq == VAR_1)
   VAR_12 += FUNC_1(VAR_6 + VAR_12, VAR_3-VAR_12,
     "CPU %02d io_chan %02d "
     "physid %d coreid %d\n",
     VAR_11, VAR_10->channel_id, VAR_10->phys_id,
     VAR_10->core_id);
  else
   VAR_12 += FUNC_1(VAR_6 + VAR_12, VAR_3-VAR_12,
     "CPU %02d io_chan %02d "
     "physid %d coreid %d IRQ %d\n",
     VAR_11, VAR_10->channel_id, VAR_10->phys_id,
     VAR_10->core_id, VAR_10->irq);

  VAR_10++;
 }
 return VAR_12;
}
