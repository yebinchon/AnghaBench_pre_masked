
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_ha_struct {struct pm8001_hba_info* lldd_ha; } ;
struct pm8001_hba_info {scalar_t__ chip_id; TYPE_1__* chip; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {int (* phy_start_req ) (struct pm8001_hba_info*,int) ;int (* sas_re_init_req ) (struct pm8001_hba_info*) ;} ;
struct TYPE_3__ {int n_phy; } ;


 TYPE_2__* VAR_0 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct pm8001_hba_info*) ;
 int FUNC_2 (struct pm8001_hba_info*,int) ;

void FUNC_3(struct Scsi_Host *VAR_2)
{
 int VAR_3;
 struct pm8001_hba_info *VAR_4;
 struct sas_ha_struct *VAR_5 = FUNC_0(VAR_2);
 VAR_4 = VAR_5->lldd_ha;

 if (VAR_4->chip_id == VAR_1)
  VAR_0->sas_re_init_req(VAR_4);
 for (VAR_3 = 0; VAR_3 < VAR_4->chip->n_phy; ++VAR_3)
  VAR_0->phy_start_req(VAR_4, VAR_3);
}
