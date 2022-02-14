
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Scsi_Host*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*,char const*) ;
 struct Scsi_Host* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_2,
         struct device_attribute *VAR_3, char *VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_3(VAR_2);
 const char *VAR_6;

 VAR_6 = FUNC_1(FUNC_0(VAR_5));
 if (!VAR_6)
  return -VAR_0;
 return FUNC_2(VAR_4, VAR_1, "%s\n", VAR_6);
}
