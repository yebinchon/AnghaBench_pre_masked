
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {TYPE_2__* scsi_dh_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* scsi_dh; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (char*,int,char*,...) ;
 struct scsi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct scsi_device *VAR_3 = FUNC_1(VAR_0);

 if (!VAR_3->scsi_dh_data)
  return FUNC_0(VAR_2, 20, "detached\n");

 return FUNC_0(VAR_2, 20, "%s\n", VAR_3->scsi_dh_data->scsi_dh->name);
}
