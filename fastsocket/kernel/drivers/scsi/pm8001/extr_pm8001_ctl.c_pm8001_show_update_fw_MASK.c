
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_ha_struct {struct pm8001_hba_info* lldd_ha; } ;
struct pm8001_hba_info {scalar_t__ fw_status; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ err_code; char* reason; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (char*,int ,char*,scalar_t__,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_4,
         struct device_attribute *VAR_5, char *VAR_6)
{
 int VAR_7;
 struct Scsi_Host *VAR_8 = FUNC_1(VAR_4);
 struct sas_ha_struct *VAR_9 = FUNC_0(VAR_8);
 struct pm8001_hba_info *VAR_10 = VAR_9->lldd_ha;

 for (VAR_7 = 0; VAR_3[VAR_7].err_code != 0; VAR_7++) {
  if (VAR_3[VAR_7].err_code == VAR_10->fw_status)
   break;
 }
 if (VAR_10->fw_status != VAR_0)
  VAR_10->fw_status = VAR_1;

 return FUNC_2(VAR_6, VAR_2, "status=%x %s\n",
   VAR_3[VAR_7].err_code,
   VAR_3[VAR_7].reason);
}
