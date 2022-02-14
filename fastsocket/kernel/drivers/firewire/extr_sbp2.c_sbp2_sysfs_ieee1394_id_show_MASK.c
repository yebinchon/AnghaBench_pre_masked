
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {struct sbp2_logical_unit* hostdata; } ;
struct sbp2_logical_unit {int lun; TYPE_1__* tgt; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int directory_id; scalar_t__ guid; } ;


 int FUNC_0 (char*,char*,unsigned long long,int ,int ) ;
 struct scsi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
   struct device_attribute *VAR_1, char *VAR_2)
{
 struct scsi_device *VAR_3 = FUNC_1(VAR_0);
 struct sbp2_logical_unit *VAR_4;

 if (!VAR_3)
  return 0;

 VAR_4 = VAR_3->hostdata;

 return FUNC_0(VAR_2, "%016llx:%06x:%04x\n",
   (unsigned long long)VAR_4->tgt->guid,
   VAR_4->tgt->directory_id, VAR_4->lun);
}
