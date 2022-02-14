
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_ha_struct {int dummy; } ;
struct asd_sas_phy {int enabled; int id; struct pm8001_phy* lldd_phy; struct sas_ha_struct* ha; int * frame_rcvd; int * sas_addr; int linkrate; int oob_mode; int role; int type; scalar_t__ tproto; int iproto; int class; } ;
struct pm8001_phy {int * frame_rcvd; struct pm8001_hba_info* pm8001_ha; scalar_t__ phy_state; struct asd_sas_phy sas_phy; } ;
struct pm8001_hba_info {TYPE_2__* shost; int * sas_addr; TYPE_1__* chip; struct pm8001_phy* phy; } ;
struct TYPE_4__ {scalar_t__ hostdata; } ;
struct TYPE_3__ {int n_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct pm8001_hba_info *VAR_6, int VAR_7)
{
 struct pm8001_phy *VAR_8 = &VAR_6->phy[VAR_7];
 struct asd_sas_phy *VAR_9 = &VAR_8->sas_phy;
 VAR_8->phy_state = 0;
 VAR_8->pm8001_ha = VAR_6;
 VAR_9->enabled = (VAR_7 < VAR_6->chip->n_phy) ? 1 : 0;
 VAR_9->class = VAR_3;
 VAR_9->iproto = VAR_5;
 VAR_9->tproto = 0;
 VAR_9->type = VAR_2;
 VAR_9->role = VAR_1;
 VAR_9->oob_mode = VAR_0;
 VAR_9->linkrate = VAR_4;
 VAR_9->id = VAR_7;
 VAR_9->sas_addr = &VAR_6->sas_addr[0];
 VAR_9->frame_rcvd = &VAR_8->frame_rcvd[0];
 VAR_9->ha = (struct sas_ha_struct *)VAR_6->shost->hostdata;
 VAR_9->lldd_phy = VAR_8;
}
