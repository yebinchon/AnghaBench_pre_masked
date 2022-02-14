
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_internal {TYPE_1__* f; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int transportt; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* get_host_speed ) (struct Scsi_Host*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 struct fc_internal* FUNC_4 (int ) ;
 struct Scsi_Host* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_6 (struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_5(VAR_1);
 struct fc_internal *VAR_5 = FUNC_4(VAR_4->transportt);

 if (VAR_5->f->get_host_speed)
  VAR_5->f->get_host_speed(VAR_4);

 if (FUNC_0(VAR_4) == VAR_0)
  return FUNC_2(VAR_3, 20, "unknown\n");

 return FUNC_1(FUNC_0(VAR_4), VAR_3);
}
