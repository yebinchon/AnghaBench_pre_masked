
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct Scsi_Host {unsigned short host_no; } ;


 struct Scsi_Host* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1)
{
 struct Scsi_Host *VAR_2;
 unsigned short *VAR_3 = (unsigned short *)VAR_1;

 VAR_2 = FUNC_0(VAR_0);
 return VAR_2->host_no == *VAR_3;
}
