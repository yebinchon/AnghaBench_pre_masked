
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ctlr_info {unsigned char* hba_inquiry_data; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;


 struct Scsi_Host* FUNC_0 (struct device*) ;
 struct ctlr_info* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (char*,int,char*,unsigned char,unsigned char,unsigned char,unsigned char) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
      struct device_attribute *VAR_1, char *VAR_2)
{
 struct ctlr_info *VAR_3;
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_0);
 unsigned char *VAR_5;

 VAR_3 = FUNC_1(VAR_4);
 if (!VAR_3->hba_inquiry_data)
  return 0;
 VAR_5 = &VAR_3->hba_inquiry_data[32];
 return FUNC_2(VAR_2, 20, "%c%c%c%c\n",
  VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3]);
}
