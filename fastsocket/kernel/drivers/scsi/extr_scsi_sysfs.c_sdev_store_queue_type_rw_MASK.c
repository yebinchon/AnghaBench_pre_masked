
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_host_template {int (* change_queue_type ) (struct scsi_device*,int) ;} ;
struct scsi_device {int tagged_supported; TYPE_1__* host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {struct scsi_host_template* hostt; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_device*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (struct scsi_device*,int) ;
 struct scsi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_3, struct device_attribute *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 struct scsi_device *VAR_7 = FUNC_3(VAR_3);
 struct scsi_host_template *VAR_8 = VAR_7->host->hostt;
 int VAR_9 = 0, VAR_10;
 int VAR_11 = FUNC_0(VAR_7);

 if (!VAR_7->tagged_supported || !VAR_8->change_queue_type)
  return -VAR_0;

 if (FUNC_1(VAR_5, "ordered", 7) == 0)
  VAR_9 = VAR_1;
 else if (FUNC_1(VAR_5, "simple", 6) == 0)
  VAR_9 = VAR_2;
 else if (FUNC_1(VAR_5, "none", 4) != 0)
  return -VAR_0;

 if (VAR_9 == VAR_11)
  return VAR_6;

 VAR_10 = VAR_8->change_queue_type(VAR_7, VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 return VAR_6;
}
