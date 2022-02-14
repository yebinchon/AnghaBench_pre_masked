
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {struct scsi_device* device; } ;
struct scsi_device {scalar_t__ type; int allow_restart; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int *,int) ;
 struct scsi_disk* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_4, struct device_attribute *VAR_5,
         const char *VAR_6, size_t VAR_7)
{
 struct scsi_disk *VAR_8 = FUNC_2(VAR_4);
 struct scsi_device *VAR_9 = VAR_8->device;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 if (VAR_9->type != VAR_3)
  return -VAR_2;

 VAR_9->allow_restart = FUNC_1(VAR_6, ((void*)0), 10);

 return VAR_7;
}
