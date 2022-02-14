
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {int protection_type; struct scsi_device* device; } ;
struct scsi_device {int host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int,char*,...) ;
 struct scsi_disk* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
   char *VAR_3)
{
 struct scsi_disk *VAR_4 = FUNC_3(VAR_1);
 struct scsi_device *VAR_5 = VAR_4->device;
 unsigned int VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_5->host, VAR_4->protection_type);
 VAR_7 = FUNC_1(VAR_5->host, VAR_4->protection_type);

 if (!VAR_7 && FUNC_1(VAR_5->host, VAR_0)) {
  VAR_6 = 0;
  VAR_7 = 1;
 }

 if (!VAR_6 && !VAR_7)
  return FUNC_2(VAR_3, 20, "none\n");

 return FUNC_2(VAR_3, 20, "%s%u\n", VAR_7 ? "dix" : "dif", VAR_6);
}
