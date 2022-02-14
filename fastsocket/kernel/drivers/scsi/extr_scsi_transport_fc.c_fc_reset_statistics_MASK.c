
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_internal {TYPE_1__* f; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int transportt; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* reset_fc_host_stats ) (struct Scsi_Host*) ;} ;


 size_t VAR_0 ;
 int FUNC_0 (struct Scsi_Host*) ;
 struct fc_internal* FUNC_1 (int ) ;
 struct Scsi_Host* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_2(VAR_1);
 struct fc_internal *VAR_6 = FUNC_1(VAR_5->transportt);


 if (VAR_6->f->reset_fc_host_stats) {
  VAR_6->f->reset_fc_host_stats(VAR_5);
  return VAR_4;
 }

 return -VAR_0;
}
