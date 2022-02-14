
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {TYPE_1__* hostt; } ;
typedef int ssize_t ;
struct TYPE_2__ {unsigned int supported_mode; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (unsigned int,char*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3,
     char *VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_0(VAR_2);
 unsigned int VAR_6 = VAR_5->hostt->supported_mode;

 if (VAR_6 == VAR_1)

  VAR_6 = VAR_0;

 return FUNC_1(VAR_6, VAR_4);
}
