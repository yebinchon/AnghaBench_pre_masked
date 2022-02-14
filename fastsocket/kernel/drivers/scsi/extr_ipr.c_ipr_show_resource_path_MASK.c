
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {scalar_t__ hostdata; TYPE_1__* host; } ;
struct ipr_resource_entry {int bus; int target; int lun; int res_path; } ;
struct ipr_ioa_cfg {TYPE_2__* host; scalar_t__ sis64; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int buffer ;
struct TYPE_4__ {int host_no; int host_lock; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int ,char*,...) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 struct scsi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4, char *VAR_5)
{
 struct scsi_device *VAR_6 = FUNC_4(VAR_3);
 struct ipr_ioa_cfg *VAR_7 = (struct ipr_ioa_cfg *)VAR_6->host->hostdata;
 struct ipr_resource_entry *VAR_8;
 unsigned long VAR_9 = 0;
 ssize_t VAR_10 = -VAR_0;
 char VAR_11[VAR_1];

 FUNC_2(VAR_7->host->host_lock, VAR_9);
 VAR_8 = (struct ipr_resource_entry *)VAR_6->hostdata;
 if (VAR_8 && VAR_7->sis64)
  VAR_10 = FUNC_1(VAR_5, VAR_2, "%s\n",
          FUNC_0(VAR_8->res_path, VAR_11,
           sizeof(VAR_11)));
 else if (VAR_8)
  VAR_10 = FUNC_1(VAR_5, VAR_2, "%d:%d:%d:%d\n", VAR_7->host->host_no,
          VAR_8->bus, VAR_8->target, VAR_8->lun);

 FUNC_3(VAR_7->host->host_lock, VAR_9);
 return VAR_10;
}
