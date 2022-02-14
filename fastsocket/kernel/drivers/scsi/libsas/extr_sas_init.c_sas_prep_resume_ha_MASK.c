
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {int num_phys; struct asd_sas_phy** sas_phy; int state; } ;
struct asd_sas_phy {scalar_t__ frame_rcvd_size; scalar_t__ phy_events_pending; scalar_t__ port_events_pending; int attached_sas_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct sas_ha_struct *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_1, &VAR_2->state);


 for (VAR_3 = 0; VAR_3 < VAR_2->num_phys; VAR_3++) {
  struct asd_sas_phy *VAR_4 = VAR_2->sas_phy[VAR_3];

  FUNC_0(VAR_4->attached_sas_addr, 0, VAR_0);
  VAR_4->port_events_pending = 0;
  VAR_4->phy_events_pending = 0;
  VAR_4->frame_rcvd_size = 0;
 }
}
