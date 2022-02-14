
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct scsi_target {struct domain_device* hostdata; TYPE_1__ dev; } ;
struct sas_rphy {int dummy; } ;
struct domain_device {int kref; } ;


 int VAR_0 ;
 struct sas_rphy* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct domain_device* FUNC_2 (struct sas_rphy*) ;

int FUNC_3(struct scsi_target *VAR_1)
{
 struct sas_rphy *VAR_2 = FUNC_0(VAR_1->dev.parent);
 struct domain_device *VAR_3 = FUNC_2(VAR_2);

 if (!VAR_3)
  return -VAR_0;

 FUNC_1(&VAR_3->kref);
 VAR_1->hostdata = VAR_3;
 return 0;
}
