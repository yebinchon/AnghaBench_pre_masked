
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_phy_data {int enable_result; int enable; int event_lock; int enable_work; } ;
struct TYPE_2__ {int parent; } ;
struct sas_phy {struct sas_phy_data* hostdata; TYPE_1__ dev; } ;
struct sas_ha_struct {int lock; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sas_ha_struct*) ;
 int FUNC_5 (struct sas_ha_struct*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct sas_phy *VAR_1, int VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_1(VAR_1->dev.parent);
 struct sas_ha_struct *VAR_4 = FUNC_0(VAR_3);
 struct sas_phy_data *VAR_5 = VAR_1->hostdata;
 int VAR_6;

 if (!VAR_5)
  return -VAR_0;


 FUNC_2(&VAR_5->event_lock);
 VAR_5->enable_result = 0;
 VAR_5->enable = VAR_2;

 FUNC_6(&VAR_4->lock);
 FUNC_5(VAR_4, &VAR_5->enable_work);
 FUNC_7(&VAR_4->lock);

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6 == 0)
  VAR_6 = VAR_5->enable_result;
 FUNC_3(&VAR_5->event_lock);

 return VAR_6;
}
