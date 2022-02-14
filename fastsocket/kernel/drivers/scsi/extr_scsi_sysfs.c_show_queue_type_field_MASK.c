
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ simple_tags; scalar_t__ ordered_tags; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int,char*,char const*) ;
 struct scsi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct scsi_device *VAR_3 = FUNC_1(VAR_0);
 const char *VAR_4 = "none";

 if (VAR_3->ordered_tags)
  VAR_4 = "ordered";
 else if (VAR_3->simple_tags)
  VAR_4 = "simple";

 return FUNC_0(VAR_2, 20, "%s\n", VAR_4);
}
