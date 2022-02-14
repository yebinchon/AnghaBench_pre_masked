
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_8__ {scalar_t__ mode_type; int max_concurr_spin_up; int do_enable_ssc; scalar_t__ ssc_sata_tx_spread_level; scalar_t__ ssc_sas_tx_spread_level; int ssc_sas_tx_type; } ;
struct sci_oem_params {TYPE_4__ controller; TYPE_3__* ports; TYPE_2__* phys; } ;
struct TYPE_7__ {scalar_t__ phy_mask; } ;
struct TYPE_5__ {scalar_t__ high; scalar_t__ low; } ;
struct TYPE_6__ {TYPE_1__ sas_address; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_0(struct sci_oem_params *VAR_8, u8 VAR_9)
{
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
  if (VAR_8->ports[VAR_10].phy_mask > VAR_5)
   return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
  if (VAR_8->phys[VAR_10].sas_address.high == 0 &&
      VAR_8->phys[VAR_10].sas_address.low == 0)
   return -VAR_0;

 if (VAR_8->controller.mode_type == VAR_3) {
  for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
   if (VAR_8->ports[VAR_10].phy_mask != 0)
    return -VAR_0;
 } else if (VAR_8->controller.mode_type == VAR_4) {
  u8 VAR_11 = 0;

  for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
   VAR_11 |= VAR_8->ports[VAR_10].phy_mask;

  if (VAR_11 == 0)
   return -VAR_0;
 } else
  return -VAR_0;

 if (VAR_8->controller.max_concurr_spin_up > VAR_2 ||
     VAR_8->controller.max_concurr_spin_up < 1)
  return -VAR_0;

 if (VAR_8->controller.do_enable_ssc) {
  if (VAR_9 < VAR_1 && VAR_8->controller.do_enable_ssc != 1)
   return -VAR_0;

  if (VAR_9 >= VAR_1) {
   u8 VAR_12 = VAR_8->controller.ssc_sata_tx_spread_level;

   switch (VAR_12) {
   case 0:
   case 2:
   case 3:
   case 6:
   case 7:
    break;
   default:
    return -VAR_0;
   }

   VAR_12 = VAR_8->controller.ssc_sas_tx_spread_level;
   if (VAR_8->controller.ssc_sas_tx_type == 0) {
    switch (VAR_12) {
    case 0:
    case 2:
    case 3:
     break;
    default:
     return -VAR_0;
    }
   } else if (VAR_8->controller.ssc_sas_tx_type == 1) {
    switch (VAR_12) {
    case 0:
    case 3:
    case 6:
     break;
    default:
     return -VAR_0;
    }
   }
  }
 }

 return 0;
}
