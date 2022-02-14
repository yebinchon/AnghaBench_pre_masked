
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {struct scsi_device* device; } ;
struct scsi_device {scalar_t__ type; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int * VAR_9 ;
 int FUNC_1 (struct scsi_disk*,size_t) ;
 int FUNC_2 (char const*,int ,int) ;
 struct scsi_disk* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_10, struct device_attribute *VAR_11,
      const char *VAR_12, size_t VAR_13)
{
 struct scsi_disk *VAR_14 = FUNC_3(VAR_10);
 struct scsi_device *VAR_15 = VAR_14->device;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 if (VAR_15->type != VAR_8)
  return -VAR_2;

 if (!FUNC_2(VAR_12, VAR_9[VAR_4], 20))
  FUNC_1(VAR_14, VAR_4);
 else if (!FUNC_2(VAR_12, VAR_9[VAR_6], 20))
  FUNC_1(VAR_14, VAR_6);
 else if (!FUNC_2(VAR_12, VAR_9[VAR_5], 20))
  FUNC_1(VAR_14, VAR_5);
 else if (!FUNC_2(VAR_12, VAR_9[VAR_7], 20))
  FUNC_1(VAR_14, VAR_7);
 else if (!FUNC_2(VAR_12, VAR_9[VAR_3], 20))
  FUNC_1(VAR_14, VAR_3);
 else
  return -VAR_2;

 return VAR_13;
}
