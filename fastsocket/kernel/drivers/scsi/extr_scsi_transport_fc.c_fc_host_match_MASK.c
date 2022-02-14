
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct attribute_container {int dummy; } ;
struct TYPE_7__ {struct attribute_container ac; } ;
struct TYPE_8__ {TYPE_1__ host_attrs; } ;
struct fc_internal {TYPE_2__ t; } ;
struct device {int dummy; } ;
struct Scsi_Host {TYPE_5__* transportt; } ;
struct TYPE_12__ {int class; } ;
struct TYPE_9__ {int * class; } ;
struct TYPE_10__ {TYPE_3__ ac; } ;
struct TYPE_11__ {TYPE_4__ host_attrs; } ;


 struct Scsi_Host* FUNC_0 (struct device*) ;
 TYPE_6__ VAR_0 ;
 int FUNC_1 (struct device*) ;
 struct fc_internal* FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_3(struct attribute_container *VAR_1,
     struct device *VAR_2)
{
 struct Scsi_Host *VAR_3;
 struct fc_internal *VAR_4;

 if (!FUNC_1(VAR_2))
  return 0;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3->transportt || VAR_3->transportt->host_attrs.ac.class
     != &VAR_0.class)
  return 0;

 VAR_4 = FUNC_2(VAR_3->transportt);

 return &VAR_4->t.host_attrs.ac == VAR_1;
}
