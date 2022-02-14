
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
struct TYPE_2__ {int (* get_host_active_fc4s ) (struct Scsi_Host*) ;} ;


 int FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct Scsi_Host*) ;
 struct fc_internal* FUNC_3 (int ) ;
 struct Scsi_Host* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_5 (struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_4(VAR_0);
 struct fc_internal *VAR_4 = FUNC_3(VAR_3->transportt);

 if (VAR_4->f->get_host_active_fc4s)
  VAR_4->f->get_host_active_fc4s(VAR_3);

 return (ssize_t)FUNC_1(VAR_2, FUNC_0(VAR_3));
}
