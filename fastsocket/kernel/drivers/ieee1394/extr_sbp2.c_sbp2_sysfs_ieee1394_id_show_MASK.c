
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_device {TYPE_1__* host; } ;
struct sbp2_lu {int lun; TYPE_3__* ud; TYPE_2__* ne; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {int id; int directory_id; } ;
struct TYPE_5__ {scalar_t__ guid; } ;
struct TYPE_4__ {scalar_t__* hostdata; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char*,unsigned long long,int ,int ) ;
 struct scsi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct scsi_device *VAR_4;
 struct sbp2_lu *VAR_5;

 if (!(VAR_4 = FUNC_2(VAR_1)))
  return 0;

 if (!(VAR_5 = (struct sbp2_lu *)VAR_4->host->hostdata[0]))
  return 0;

 if (VAR_0)
  return FUNC_1(VAR_3, "%016Lx:%06x:%04x\n",
    (unsigned long long)VAR_5->ne->guid,
    VAR_5->ud->directory_id, FUNC_0(VAR_5->lun));
 else
  return FUNC_1(VAR_3, "%016Lx:%d:%d\n",
    (unsigned long long)VAR_5->ne->guid,
    VAR_5->ud->id, FUNC_0(VAR_5->lun));
}
