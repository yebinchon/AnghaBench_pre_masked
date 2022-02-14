
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sas_rphy {int scsi_target_id; } ;
struct TYPE_4__ {int release; int parent; } ;
struct sas_port {int port_identifier; TYPE_1__ dev; int phy_list; int phy_list_mutex; } ;
struct device {int dummy; } ;
struct Scsi_Host {int host_no; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int,...) ;
 struct sas_rphy* FUNC_2 (struct device*) ;
 struct Scsi_Host* FUNC_3 (struct device*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct device*) ;
 struct sas_port* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (struct device*) ;
 int FUNC_9 (TYPE_1__*) ;

struct sas_port *FUNC_10(struct device *VAR_2, int VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_3(VAR_2);
 struct sas_port *VAR_5;

 VAR_5 = FUNC_6(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->port_identifier = VAR_3;

 FUNC_4(&VAR_5->dev);

 VAR_5->dev.parent = FUNC_5(VAR_2);
 VAR_5->dev.release = VAR_1;

 FUNC_7(&VAR_5->phy_list_mutex);
 FUNC_0(&VAR_5->phy_list);

 if (FUNC_8(VAR_2)) {
  struct sas_rphy *VAR_6 = FUNC_2(VAR_2);
  FUNC_1(&VAR_5->dev, "port-%d:%d:%d", VAR_4->host_no,
        VAR_6->scsi_target_id, VAR_5->port_identifier);
 } else
  FUNC_1(&VAR_5->dev, "port-%d:%d", VAR_4->host_no,
        VAR_5->port_identifier);

 FUNC_9(&VAR_5->dev);

 return VAR_5;
}
