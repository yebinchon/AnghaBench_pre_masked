
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expansion_card {int dummy; } ;
struct eesoxscsi_info {int control; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 struct expansion_card* FUNC_0 (struct device*) ;
 int VAR_0 ;
 struct Scsi_Host* FUNC_1 (struct expansion_card*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct expansion_card *VAR_4 = FUNC_0(VAR_1);
 struct Scsi_Host *VAR_5 = FUNC_1(VAR_4);
 struct eesoxscsi_info *VAR_6 = (struct eesoxscsi_info *)VAR_5->hostdata;

 return FUNC_2(VAR_3, "%d\n", VAR_6->control & VAR_0 ? 1 : 0);
}
