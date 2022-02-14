
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_6__ {int * iscsi_mac; } ;
struct bnx2x {int flags; int mf_ext_config; int * fip_mac; TYPE_2__* dev; TYPE_1__ cnic_eth_dev; } ;
struct TYPE_10__ {TYPE_3__* port_hw_config; } ;
struct TYPE_9__ {int fcoe_mac_addr_lower; int fcoe_mac_addr_upper; int iscsi_mac_addr_lower; int iscsi_mac_addr_upper; int func_cfg; } ;
struct TYPE_8__ {int fcoe_fip_mac_lower; int fcoe_fip_mac_upper; int iscsi_mac_lower; int iscsi_mac_upper; } ;
struct TYPE_7__ {int * dev_addr; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (struct bnx2x*) ;
 scalar_t__ FUNC_7 (struct bnx2x*) ;
 int FUNC_8 (struct bnx2x*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (struct bnx2x*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (struct bnx2x*,int ) ;
 int FUNC_11 (int *,int,int) ;
 TYPE_5__ VAR_6 ;
 TYPE_4__* VAR_7 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_15(struct bnx2x *VAR_8)
{
 u32 VAR_9, VAR_10;
 int VAR_11 = FUNC_3(VAR_8);
 int VAR_12 = FUNC_4(VAR_8);
 u8 *VAR_13 = VAR_8->cnic_eth_dev.iscsi_mac;
 u8 *VAR_14 = VAR_8->fip_mac;

 if (FUNC_6(VAR_8)) {





  if (!FUNC_8(VAR_8) && !FUNC_5(VAR_8)) {
   u32 VAR_15 = FUNC_9(VAR_8, VAR_7[VAR_11].func_cfg);
   if (VAR_15 & VAR_2) {
    VAR_10 = FUNC_9(VAR_8, VAR_7[VAR_11].
       iscsi_mac_addr_upper);
    VAR_9 = FUNC_9(VAR_8, VAR_7[VAR_11].
      iscsi_mac_addr_lower);
    FUNC_11(VAR_13, VAR_9, VAR_10);
    FUNC_0
     ("Read iSCSI MAC: %pM\n", VAR_13);
   } else {
    VAR_8->flags |= VAR_5 | VAR_4;
   }

   if (VAR_15 & VAR_1) {
    VAR_10 = FUNC_9(VAR_8, VAR_7[VAR_11].
       fcoe_mac_addr_upper);
    VAR_9 = FUNC_9(VAR_8, VAR_7[VAR_11].
      fcoe_mac_addr_lower);
    FUNC_11(VAR_14, VAR_9, VAR_10);
    FUNC_0
     ("Read FCoE L2 MAC: %pM\n", VAR_14);
   } else {
    VAR_8->flags |= VAR_3;
   }

   VAR_8->mf_ext_config = VAR_15;

  } else {
   if (FUNC_2(VAR_8)) {

    FUNC_13(VAR_13, VAR_8->dev->dev_addr, VAR_0);

    FUNC_0("SD ISCSI MODE\n");
    FUNC_0
     ("Read iSCSI MAC: %pM\n", VAR_13);
   } else if (FUNC_1(VAR_8)) {

    FUNC_13(VAR_14, VAR_8->dev->dev_addr, VAR_0);
    FUNC_0("SD FCoE MODE\n");
    FUNC_0
     ("Read FIP MAC: %pM\n", VAR_14);
   }
  }





  if (FUNC_7(VAR_8))
   FUNC_13(VAR_8->dev->dev_addr, VAR_14, VAR_0);
 } else {
  VAR_10 = FUNC_10(VAR_8, VAR_6.port_hw_config[VAR_12].
    iscsi_mac_upper);
  VAR_9 = FUNC_10(VAR_8, VAR_6.port_hw_config[VAR_12].
          iscsi_mac_lower);
  FUNC_11(VAR_13, VAR_9, VAR_10);

  VAR_10 = FUNC_10(VAR_8, VAR_6.port_hw_config[VAR_12].
    fcoe_fip_mac_upper);
  VAR_9 = FUNC_10(VAR_8, VAR_6.port_hw_config[VAR_12].
          fcoe_fip_mac_lower);
  FUNC_11(VAR_14, VAR_9, VAR_10);
 }


 if (!FUNC_12(VAR_13)) {
  VAR_8->flags |= VAR_5 | VAR_4;
  FUNC_14(VAR_13, 0, VAR_0);
 }


 if (!FUNC_12(VAR_14)) {
  VAR_8->flags |= VAR_3;
  FUNC_14(VAR_8->fip_mac, 0, VAR_0);
 }
}
