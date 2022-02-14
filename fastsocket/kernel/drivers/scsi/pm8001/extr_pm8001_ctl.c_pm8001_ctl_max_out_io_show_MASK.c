
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sas_ha_struct {struct pm8001_hba_info* lldd_ha; } ;
struct TYPE_4__ {int max_out_io; } ;
struct TYPE_5__ {int max_out_io; } ;
struct TYPE_6__ {TYPE_1__ pm80xx_tbl; TYPE_2__ pm8001_tbl; } ;
struct pm8001_hba_info {scalar_t__ chip_id; TYPE_3__ main_cfg_tbl; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 scalar_t__ VAR_1 ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
 struct device_attribute *VAR_3, char *VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_1(VAR_2);
 struct sas_ha_struct *VAR_6 = FUNC_0(VAR_5);
 struct pm8001_hba_info *VAR_7 = VAR_6->lldd_ha;

 if (VAR_7->chip_id == VAR_1) {
  return FUNC_2(VAR_4, VAR_0, "%d\n",
   VAR_7->main_cfg_tbl.pm8001_tbl.max_out_io);
 } else {
  return FUNC_2(VAR_4, VAR_0, "%d\n",
   VAR_7->main_cfg_tbl.pm80xx_tbl.max_out_io);
 }
}
