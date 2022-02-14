
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct transport_container {int dummy; } ;
struct spi_internal {TYPE_1__* f; } ;
struct kobject {int dummy; } ;
struct device {struct kobject kobj; } ;
struct attribute {int mode; } ;
struct Scsi_Host {int transportt; } ;
struct TYPE_4__ {struct attribute attr; } ;
struct TYPE_3__ {scalar_t__ set_signalling; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (struct kobject*,struct attribute*,int) ;
 struct spi_internal* FUNC_1 (int ) ;
 struct Scsi_Host* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct transport_container *VAR_2,
         struct device *VAR_3,
         struct device *VAR_4)
{
 struct kobject *VAR_5 = &VAR_4->kobj;
 struct Scsi_Host *VAR_6 = FUNC_2(VAR_4);
 struct spi_internal *VAR_7 = FUNC_1(VAR_6->transportt);
 struct attribute *VAR_8 = &VAR_1.attr;
 int VAR_9 = 0;

 if (VAR_7->f->set_signalling)
  VAR_9 = FUNC_0(VAR_5, VAR_8, VAR_8->mode | VAR_0);

 return VAR_9;
}
