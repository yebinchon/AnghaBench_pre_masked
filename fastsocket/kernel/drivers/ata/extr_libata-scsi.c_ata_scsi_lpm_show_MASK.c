
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ata_port {int pm_policy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 struct ata_port* FUNC_1 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,int,char*,char const*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_2(VAR_1);
 struct ata_port *VAR_5 = FUNC_1(VAR_4);
 const char *VAR_6 =
  FUNC_0(VAR_5->pm_policy);

 if (!VAR_6)
  return -VAR_0;

 return FUNC_3(VAR_3, 23, "%s\n", VAR_6);
}
