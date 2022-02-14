
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {TYPE_2__* hostdata; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* vtarget; } ;
typedef TYPE_2__ VirtDevice ;
struct TYPE_3__ {scalar_t__ sas_address; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,...) ;
 struct scsi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1,
 struct device_attribute *VAR_2, char *VAR_3)
{
 struct scsi_device *VAR_4 = FUNC_1(VAR_1);
 VirtDevice *VAR_5 = VAR_4->hostdata;

 if (VAR_5 && VAR_5->vtarget) {
  return FUNC_0(VAR_3, VAR_0, "0x%016llx\n",
       (unsigned long long)VAR_5->vtarget->sas_address);
 } else
  return FUNC_0(VAR_3, VAR_0, "0x0\n");
}
