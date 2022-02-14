
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_host_template {int (* change_queue_depth ) (struct scsi_device*,int,int ) ;} ;
struct scsi_device {int queue_depth; int max_queue_depth; TYPE_1__* host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct scsi_host_template* hostt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int *,int ) ;
 int FUNC_1 (struct scsi_device*,int,int ) ;
 struct scsi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 int VAR_6, VAR_7;
 struct scsi_device *VAR_8 = FUNC_2(VAR_2);
 struct scsi_host_template *VAR_9 = VAR_8->host->hostt;

 if (!VAR_9->change_queue_depth)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_4, ((void*)0), 0);

 if (VAR_6 < 1)
  return -VAR_0;

 VAR_7 = VAR_9->change_queue_depth(VAR_8, VAR_6,
      VAR_1);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8->max_queue_depth = VAR_8->queue_depth;

 return VAR_5;
}
