
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {int RCD; int WCE; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 char** VAR_0 ;
 int FUNC_0 (char*,int,char*,char*) ;
 struct scsi_disk* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct scsi_disk *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = VAR_4->RCD + 2*VAR_4->WCE;

 return FUNC_0(VAR_3, 40, "%s\n", VAR_0[VAR_5]);
}
