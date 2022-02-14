
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {struct MPT2SAS_DEVICE* hostdata; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct MPT2SAS_DEVICE {TYPE_1__* sas_target; } ;
typedef int ssize_t ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int) ;
 struct scsi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct scsi_device *VAR_4 = FUNC_1(VAR_1);
 struct MPT2SAS_DEVICE *VAR_5 = VAR_4->hostdata;

 return FUNC_0(VAR_3, VAR_0, "0x%04x\n",
     VAR_5->sas_target->handle);
}
