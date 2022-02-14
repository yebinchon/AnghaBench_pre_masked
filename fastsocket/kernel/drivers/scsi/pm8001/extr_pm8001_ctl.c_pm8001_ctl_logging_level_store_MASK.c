
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {struct pm8001_hba_info* lldd_ha; } ;
struct pm8001_hba_info {int logging_level; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,char*,int*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
 struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_1(VAR_1);
 struct sas_ha_struct *VAR_6 = FUNC_0(VAR_5);
 struct pm8001_hba_info *VAR_7 = VAR_6->lldd_ha;
 int VAR_8 = 0;

 if (FUNC_2(VAR_3, "%x", &VAR_8) != 1)
  return -VAR_0;

 VAR_7->logging_level = VAR_8;
 return FUNC_3(VAR_3);
}
