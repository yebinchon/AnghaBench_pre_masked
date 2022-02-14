
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {scalar_t__ hostdata; TYPE_1__* host; } ;
struct ipr_resource_entry {int lun_wwn; int dev_id; } ;
struct ipr_ioa_cfg {TYPE_2__* host; scalar_t__ sis64; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int host_lock; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 struct scsi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3, char *VAR_4)
{
 struct scsi_device *VAR_5 = FUNC_3(VAR_2);
 struct ipr_ioa_cfg *VAR_6 = (struct ipr_ioa_cfg *)VAR_5->host->hostdata;
 struct ipr_resource_entry *VAR_7;
 unsigned long VAR_8 = 0;
 ssize_t VAR_9 = -VAR_0;

 FUNC_1(VAR_6->host->host_lock, VAR_8);
 VAR_7 = (struct ipr_resource_entry *)VAR_5->hostdata;
 if (VAR_7 && VAR_6->sis64)
  VAR_9 = FUNC_0(VAR_4, VAR_1, "0x%llx\n", VAR_7->dev_id);
 else if (VAR_7)
  VAR_9 = FUNC_0(VAR_4, VAR_1, "0x%llx\n", VAR_7->lun_wwn);

 FUNC_2(VAR_6->host->host_lock, VAR_8);
 return VAR_9;
}
