
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sas_rphy {int scsi_target_id; } ;
struct TYPE_4__ {int release; int parent; } ;
struct sas_phy {int number; int enabled; TYPE_1__ dev; int port_siblings; } ;
struct device {int dummy; } ;
struct Scsi_Host {int host_no; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int,...) ;
 struct sas_rphy* FUNC_2 (struct device*) ;
 struct Scsi_Host* FUNC_3 (struct device*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct device*) ;
 struct sas_phy* FUNC_6 (int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (struct device*) ;
 int FUNC_8 (TYPE_1__*) ;

struct sas_phy *FUNC_9(struct device *VAR_2, int VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_3(VAR_2);
 struct sas_phy *VAR_5;

 VAR_5 = FUNC_6(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->number = VAR_3;
 VAR_5->enabled = 1;

 FUNC_4(&VAR_5->dev);
 VAR_5->dev.parent = FUNC_5(VAR_2);
 VAR_5->dev.release = VAR_1;
 FUNC_0(&VAR_5->port_siblings);
 if (FUNC_7(VAR_2)) {
  struct sas_rphy *VAR_6 = FUNC_2(VAR_2);
  FUNC_1(&VAR_5->dev, "phy-%d:%d:%d", VAR_4->host_no,
   VAR_6->scsi_target_id, VAR_3);
 } else
  FUNC_1(&VAR_5->dev, "phy-%d:%d", VAR_4->host_no, VAR_3);

 FUNC_8(&VAR_5->dev);

 return VAR_5;
}
