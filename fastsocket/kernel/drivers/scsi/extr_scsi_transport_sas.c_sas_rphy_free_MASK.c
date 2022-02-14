
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* parent; } ;
struct sas_rphy {int list; struct device dev; } ;
struct sas_host_attrs {int lock; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int parent; } ;


 struct Scsi_Host* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct Scsi_Host*,struct sas_rphy*) ;
 struct sas_host_attrs* FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (struct device*) ;

void FUNC_8(struct sas_rphy *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct Scsi_Host *VAR_2 = FUNC_0(VAR_0->dev.parent->parent);
 struct sas_host_attrs *VAR_3 = FUNC_6(VAR_2);

 FUNC_2(&VAR_3->lock);
 FUNC_1(&VAR_0->list);
 FUNC_3(&VAR_3->lock);

 FUNC_5(VAR_2, VAR_0);

 FUNC_7(VAR_1);

 FUNC_4(VAR_1);
}
