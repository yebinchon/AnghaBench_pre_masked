
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_phy {int maximum_linkrate_hw; int maximum_linkrate; int minimum_linkrate_hw; int minimum_linkrate; int negotiated_linkrate; } ;
struct sas_identify_frame {int target_bits; int initiator_bits; int dev_type; } ;
struct sas_ha_struct {int (* notify_port_event ) (struct asd_sas_phy*,int ) ;} ;
struct TYPE_2__ {int target_port_protocols; int device_type; } ;
struct asd_sas_phy {int frame_rcvd_size; int linkrate; struct sas_phy* phy; } ;
struct pm8001_phy {int phy_type; int frame_rcvd_size; TYPE_1__ identify; scalar_t__ frame_rcvd; int maximum_linkrate; int minimum_linkrate; int phy_attached; struct asd_sas_phy sas_phy; } ;
struct pm8001_hba_info {struct sas_ha_struct* sas; struct pm8001_phy* phy; } ;


 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct asd_sas_phy*,int ) ;

void FUNC_3(struct pm8001_hba_info *VAR_5, int VAR_6)
{
 struct pm8001_phy *VAR_7 = &VAR_5->phy[VAR_6];
 struct asd_sas_phy *VAR_8 = &VAR_7->sas_phy;
 struct sas_ha_struct *VAR_9;
 if (!VAR_7->phy_attached)
  return;

 VAR_9 = VAR_5->sas;
 if (VAR_8->phy) {
  struct sas_phy *VAR_10 = VAR_8->phy;
  VAR_10->negotiated_linkrate = VAR_8->linkrate;
  VAR_10->minimum_linkrate = VAR_7->minimum_linkrate;
  VAR_10->minimum_linkrate_hw = VAR_3;
  VAR_10->maximum_linkrate = VAR_7->maximum_linkrate;
  VAR_10->maximum_linkrate_hw = VAR_7->maximum_linkrate;
 }

 if (VAR_7->phy_type & VAR_1) {
  struct sas_identify_frame *VAR_11;
  VAR_11 = (struct sas_identify_frame *)VAR_7->frame_rcvd;
  VAR_11->dev_type = VAR_7->identify.device_type;
  VAR_11->initiator_bits = VAR_4;
  VAR_11->target_bits = VAR_7->identify.target_port_protocols;
 } else if (VAR_7->phy_type & VAR_2) {

 }
 FUNC_0(VAR_5, FUNC_1("phy %d byte dmaded.\n", VAR_6));

 VAR_8->frame_rcvd_size = VAR_7->frame_rcvd_size;
 VAR_5->sas->notify_port_event(VAR_8, VAR_0);
}
