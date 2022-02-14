
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct attribute_container {int * class; } ;
struct Scsi_Host {TYPE_2__* transportt; } ;
struct TYPE_6__ {int class; } ;
struct TYPE_4__ {struct attribute_container ac; } ;
struct TYPE_5__ {TYPE_1__ host_attrs; } ;


 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct attribute_container *VAR_1,
     struct device *VAR_2)
{
 struct Scsi_Host *VAR_3;

 if (!FUNC_1(VAR_2))
  return 0;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3->transportt || VAR_3->transportt->host_attrs.ac.class
     != &VAR_0.class)
  return 0;

 return &VAR_3->transportt->host_attrs.ac == VAR_1;
}
