
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int high; int low; } ;
struct sci_phy_oem_params {int afe_tx_amp_control3; int afe_tx_amp_control2; int afe_tx_amp_control1; int afe_tx_amp_control0; TYPE_3__ sas_address; } ;
struct TYPE_8__ {int cable_selection_mask; int do_enable_ssc; int max_concurr_spin_up; int mode_type; } ;
struct sci_oem_params {TYPE_4__ controller; struct sci_phy_oem_params* phys; TYPE_2__* ports; } ;
struct sci_bios_oem_param_block_hdr {int dummy; } ;
struct TYPE_5__ {int total_block_length; int hdr_length; int num_elements; int version; int signature; } ;
struct isci_orom {struct sci_oem_params* ctrl; TYPE_1__ hdr; } ;
typedef int __u8 ;
struct TYPE_6__ {int phy_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int** VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int ** VAR_11 ;
 int** VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_14 ;

void FUNC_2(struct isci_orom *VAR_15)
{
 int VAR_16, VAR_17, VAR_18;


 FUNC_1(VAR_15->hdr.signature, VAR_13, FUNC_0(VAR_13));
 VAR_15->hdr.version = VAR_14;
 VAR_15->hdr.total_block_length = sizeof(struct isci_orom);
 VAR_15->hdr.hdr_length = sizeof(struct sci_bios_oem_param_block_hdr);
 VAR_15->hdr.num_elements = VAR_10;

 for (VAR_16 = 0; VAR_16 < 2; VAR_16++) {
  struct sci_oem_params *VAR_19 = &VAR_15->ctrl[VAR_16];
  __u8 VAR_20 = 0;

  VAR_19->controller.mode_type = VAR_9;
  VAR_19->controller.max_concurr_spin_up = VAR_8;
  VAR_19->controller.do_enable_ssc = VAR_7;

  for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++)
   VAR_19->ports[VAR_18].phy_mask = VAR_11[VAR_16][VAR_18];

  for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
   struct sci_phy_oem_params *VAR_21 = &VAR_19->phys[VAR_17];
   __u8 VAR_22 = VAR_6[VAR_16][VAR_17];

   VAR_21->sas_address.high = VAR_12[VAR_16][VAR_17] >> 32;
   VAR_21->sas_address.low = VAR_12[VAR_16][VAR_17];

   VAR_21->afe_tx_amp_control0 = VAR_2;
   VAR_21->afe_tx_amp_control1 = VAR_3;
   VAR_21->afe_tx_amp_control2 = VAR_4;
   VAR_21->afe_tx_amp_control3 = VAR_5;

   VAR_20 |= (VAR_22 & 1) << VAR_17;
   VAR_20 |= (VAR_22 & 2) << (VAR_17 + 3);
  }
  VAR_19->controller.cable_selection_mask = VAR_20;
 }
}
