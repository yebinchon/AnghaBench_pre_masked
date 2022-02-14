
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int queue_ramp_up_period; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef unsigned long ssize_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 struct scsi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct scsi_device *VAR_5 = FUNC_2(VAR_1);
 unsigned long VAR_6;

 if (FUNC_1(VAR_3, 10, &VAR_6))
  return -VAR_0;

 VAR_5->queue_ramp_up_period = FUNC_0(VAR_6);
 return VAR_6;
}
