
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct discover_resp {int linkrate; int iproto; int tproto; scalar_t__ attached_sata_dev; int pmax_linkrate; int pmin_linkrate; int hmax_linkrate; int hmin_linkrate; int attached_dev_type; int virtual; int routing_attr; int change_count; int attached_phy_id; int * attached_sas_addr; int attached_sata_ps; int attached_sata_host; } ;
struct smp_resp {int result; struct discover_resp disc; } ;
struct sas_rphy {int dev; } ;
struct sas_ha_struct {int state; } ;
struct expander_device {struct ex_phy* ex_phy; } ;
struct ex_phy {scalar_t__ phy_state; int attached_dev_type; int linkrate; int phy_id; int attached_iproto; int attached_tproto; int last_da_index; int * attached_sas_addr; TYPE_4__* phy; int virtual; int routing_attr; int phy_change_count; int attached_phy_id; int attached_sata_ps; scalar_t__ attached_sata_dev; int attached_sata_host; } ;
struct domain_device {int * sas_addr; TYPE_2__* port; struct sas_rphy* rphy; struct expander_device ex_dev; } ;
typedef enum sas_linkrate { ____Placeholder_sas_linkrate } sas_linkrate ;
typedef enum sas_dev_type { ____Placeholder_sas_dev_type } sas_dev_type ;
struct TYPE_9__ {int initiator_port_protocols; int target_port_protocols; int phy_identifier; int device_type; scalar_t__ sas_address; } ;
struct TYPE_10__ {scalar_t__ negotiated_linkrate; int maximum_linkrate; int minimum_linkrate; int maximum_linkrate_hw; int minimum_linkrate_hw; TYPE_3__ identify; } ;
struct TYPE_7__ {int pending; } ;
struct TYPE_8__ {TYPE_1__ disc; struct sas_ha_struct* ha; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;



 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (char*,char*,scalar_t__,int,int ,int,scalar_t__,char*) ;

 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;



 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ,int) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 TYPE_4__* FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (struct domain_device*,struct ex_phy*) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (struct discover_resp*) ;

__attribute__((used)) static void FUNC_13(struct domain_device *VAR_8, int VAR_9, void *VAR_10)
{
 enum sas_dev_type VAR_11;
 enum sas_linkrate VAR_12;
 u8 VAR_13[VAR_4];
 struct smp_resp *VAR_14 = VAR_10;
 struct discover_resp *VAR_15 = &VAR_14->disc;
 struct sas_ha_struct *VAR_16 = VAR_8->port->ha;
 struct expander_device *VAR_17 = &VAR_8->ex_dev;
 struct ex_phy *VAR_18 = &VAR_17->ex_phy[VAR_9];
 struct sas_rphy *VAR_19 = VAR_8->rphy;
 bool VAR_20 = !VAR_18->phy;
 char *VAR_21;

 if (VAR_20) {
  if (FUNC_3(FUNC_11(VAR_5, &VAR_16->state)))
   return;
  VAR_18->phy = FUNC_7(&VAR_19->dev, VAR_9);


  FUNC_0(!VAR_18->phy);
 }

 switch (VAR_14->result) {
 case 128:
  VAR_18->phy_state = VAR_3;
  break;
 default:
  VAR_18->phy_state = VAR_2;
  break;
 case 129:
  VAR_18->phy_state = VAR_1;
  break;
 }


 VAR_11 = VAR_18->attached_dev_type;
 VAR_12 = VAR_18->linkrate;
 FUNC_4(VAR_13, VAR_18->attached_sas_addr, VAR_4);


 if (VAR_18->phy_state == VAR_3) {
  FUNC_5(VAR_18->attached_sas_addr, 0, VAR_4);
  VAR_18->attached_dev_type = 132;
  if (!FUNC_11(VAR_5, &VAR_16->state)) {
   VAR_18->phy_id = VAR_9;
   goto skip;
  } else
   goto out;
 }

 VAR_18->attached_dev_type = FUNC_12(VAR_15);
 if (FUNC_11(VAR_5, &VAR_16->state))
  goto out;
 VAR_18->phy_id = VAR_9;
 VAR_18->linkrate = VAR_15->linkrate;
 VAR_18->attached_sata_host = VAR_15->attached_sata_host;
 VAR_18->attached_sata_dev = VAR_15->attached_sata_dev;
 VAR_18->attached_sata_ps = VAR_15->attached_sata_ps;
 VAR_18->attached_iproto = VAR_15->iproto << 1;
 VAR_18->attached_tproto = VAR_15->tproto << 1;



 if (VAR_18->attached_dev_type == 132 ||
     VAR_18->linkrate < VAR_6)
  FUNC_5(VAR_18->attached_sas_addr, 0, VAR_4);
 else
  FUNC_4(VAR_18->attached_sas_addr, VAR_15->attached_sas_addr, VAR_4);
 VAR_18->attached_phy_id = VAR_15->attached_phy_id;
 VAR_18->phy_change_count = VAR_15->change_count;
 VAR_18->routing_attr = VAR_15->routing_attr;
 VAR_18->virtual = VAR_15->virtual;
 VAR_18->last_da_index = -1;

 VAR_18->phy->identify.sas_address = FUNC_1(VAR_18->attached_sas_addr);
 VAR_18->phy->identify.device_type = VAR_15->attached_dev_type;
 VAR_18->phy->identify.initiator_port_protocols = VAR_18->attached_iproto;
 VAR_18->phy->identify.target_port_protocols = VAR_18->attached_tproto;
 if (!VAR_18->attached_tproto && VAR_15->attached_sata_dev)
  VAR_18->phy->identify.target_port_protocols = VAR_7;
 VAR_18->phy->identify.phy_identifier = VAR_9;
 VAR_18->phy->minimum_linkrate_hw = VAR_15->hmin_linkrate;
 VAR_18->phy->maximum_linkrate_hw = VAR_15->hmax_linkrate;
 VAR_18->phy->minimum_linkrate = VAR_15->pmin_linkrate;
 VAR_18->phy->maximum_linkrate = VAR_15->pmax_linkrate;
 VAR_18->phy->negotiated_linkrate = VAR_18->linkrate;

 skip:
 if (VAR_20)
  if (FUNC_6(VAR_18->phy)) {
   FUNC_8(VAR_18->phy);
   return;
  }

 out:
 switch (VAR_18->attached_dev_type) {
 case 130:
  VAR_21 = "stp pending";
  break;
 case 132:
  VAR_21 = "no device";
  break;
 case 131:
  if (VAR_18->attached_iproto) {
   if (VAR_18->attached_tproto)
    VAR_21 = "host+target";
   else
    VAR_21 = "host";
  } else {
   if (VAR_15->attached_sata_dev)
    VAR_21 = "stp";
   else
    VAR_21 = "ssp";
  }
  break;
 case 134:
 case 133:
  VAR_21 = "smp";
  break;
 default:
  VAR_21 = "unknown";
 }




 if (VAR_20 || VAR_18->attached_dev_type != VAR_11 ||
     VAR_18->linkrate != VAR_12 ||
     FUNC_1(VAR_18->attached_sas_addr) != FUNC_1(VAR_13))
            ;
 else
  return;





 if (FUNC_11(VAR_5, &VAR_16->state))
  FUNC_10(VAR_0, &VAR_8->port->disc.pending);

 FUNC_2("%sex %016llx phy%02d:%c:%X attached: %016llx (%s)\n",
      FUNC_11(VAR_5, &VAR_16->state) ? "ata: " : "",
      FUNC_1(VAR_8->sas_addr), VAR_18->phy_id,
      FUNC_9(VAR_8, VAR_18), VAR_18->linkrate,
      FUNC_1(VAR_18->attached_sas_addr), VAR_21);
}
