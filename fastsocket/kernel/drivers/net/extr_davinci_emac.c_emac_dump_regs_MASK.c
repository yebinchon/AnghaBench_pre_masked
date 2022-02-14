
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct emac_priv {TYPE_1__* ndev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_1 (int ) ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct emac_priv *VAR_53)
{
 struct device *VAR_54 = &VAR_53->ndev->dev;


 FUNC_2(VAR_54, "EMAC Basic registers\n");
 FUNC_2(VAR_54, "EMAC: EWCTL: %08X, EWINTTCNT: %08X\n",
  FUNC_3(VAR_0),
  FUNC_3(VAR_1));
 FUNC_2(VAR_54, "EMAC: TXID: %08X %s, RXID: %08X %s\n",
  FUNC_4(VAR_42),
  ((FUNC_4(VAR_38)) ? "enabled" : "disabled"),
  FUNC_4(VAR_19),
  ((FUNC_4(VAR_13)) ? "enabled" : "disabled"));
 FUNC_2(VAR_54, "EMAC: TXIntRaw:%08X, TxIntMasked: %08X, " "TxIntMasSet: %08X\n", FUNC_4(VAR_45),

  FUNC_4(VAR_44), FUNC_4(VAR_43));
 FUNC_2(VAR_54, "EMAC: RXIntRaw:%08X, RxIntMasked: %08X, " "RxIntMasSet: %08X\n", FUNC_4(VAR_22),

  FUNC_4(VAR_21), FUNC_4(VAR_20));
 FUNC_2(VAR_54, "EMAC: MacIntRaw:%08X, MacIntMasked: %08X, " "MacInVector=%08X\n", FUNC_4(VAR_7),

  FUNC_4(VAR_6), FUNC_4(VAR_8));
 FUNC_2(VAR_54, "EMAC: EmuControl:%08X, FifoControl: %08X\n",
  FUNC_4(VAR_2), FUNC_4(VAR_3));
 FUNC_2(VAR_54, "EMAC: MBPEnable:%08X, RXUnicastSet: %08X, " "RXMaxLen=%08X\n", FUNC_4(VAR_25),

  FUNC_4(VAR_34), FUNC_4(VAR_24));
 FUNC_2(VAR_54, "EMAC: MacControl:%08X, MacStatus: %08X, " "MacConfig=%08X\n", FUNC_4(VAR_5),

  FUNC_4(VAR_9), FUNC_4(VAR_4));
 FUNC_2(VAR_54, "EMAC: TXHDP[0]:%08X, RXHDP[0]: %08X\n",
  FUNC_4(FUNC_1(0)), FUNC_4(FUNC_0(0)));
 FUNC_2(VAR_54, "EMAC Statistics\n");
 FUNC_2(VAR_54, "EMAC: rx_good_frames:%d\n",
  FUNC_4(VAR_18));
 FUNC_2(VAR_54, "EMAC: rx_broadcast_frames:%d\n",
  FUNC_4(VAR_12));
 FUNC_2(VAR_54, "EMAC: rx_multicast_frames:%d\n",
  FUNC_4(VAR_26));
 FUNC_2(VAR_54, "EMAC: rx_pause_frames:%d\n",
  FUNC_4(VAR_30));
 FUNC_2(VAR_54, "EMAC: rx_crcerrors:%d\n",
  FUNC_4(VAR_14));
 FUNC_2(VAR_54, "EMAC: rx_align_code_errors:%d\n",
  FUNC_4(VAR_11));
 FUNC_2(VAR_54, "EMAC: rx_oversized_frames:%d\n",
  FUNC_4(VAR_29));
 FUNC_2(VAR_54, "EMAC: rx_jabber_frames:%d\n",
  FUNC_4(VAR_23));
 FUNC_2(VAR_54, "EMAC: rx_undersized_frames:%d\n",
  FUNC_4(VAR_33));
 FUNC_2(VAR_54, "EMAC: rx_fragments:%d\n",
  FUNC_4(VAR_17));
 FUNC_2(VAR_54, "EMAC: rx_filtered_frames:%d\n",
  FUNC_4(VAR_16));
 FUNC_2(VAR_54, "EMAC: rx_qos_filtered_frames:%d\n",
  FUNC_4(VAR_31));
 FUNC_2(VAR_54, "EMAC: rx_octets:%d\n",
  FUNC_4(VAR_28));
 FUNC_2(VAR_54, "EMAC: tx_goodframes:%d\n",
  FUNC_4(VAR_41));
 FUNC_2(VAR_54, "EMAC: tx_bcastframes:%d\n",
  FUNC_4(VAR_35));
 FUNC_2(VAR_54, "EMAC: tx_mcastframes:%d\n",
  FUNC_4(VAR_47));
 FUNC_2(VAR_54, "EMAC: tx_pause_frames:%d\n",
  FUNC_4(VAR_50));
 FUNC_2(VAR_54, "EMAC: tx_deferred_frames:%d\n",
  FUNC_4(VAR_39));
 FUNC_2(VAR_54, "EMAC: tx_collision_frames:%d\n",
  FUNC_4(VAR_37));
 FUNC_2(VAR_54, "EMAC: tx_single_coll_frames:%d\n",
  FUNC_4(VAR_51));
 FUNC_2(VAR_54, "EMAC: tx_mult_coll_frames:%d\n",
  FUNC_4(VAR_48));
 FUNC_2(VAR_54, "EMAC: tx_excessive_collisions:%d\n",
  FUNC_4(VAR_40));
 FUNC_2(VAR_54, "EMAC: tx_late_collisions:%d\n",
  FUNC_4(VAR_46));
 FUNC_2(VAR_54, "EMAC: tx_underrun:%d\n",
  FUNC_4(VAR_52));
 FUNC_2(VAR_54, "EMAC: tx_carrier_sense_errors:%d\n",
  FUNC_4(VAR_36));
 FUNC_2(VAR_54, "EMAC: tx_octets:%d\n",
  FUNC_4(VAR_49));
 FUNC_2(VAR_54, "EMAC: net_octets:%d\n",
  FUNC_4(VAR_10));
 FUNC_2(VAR_54, "EMAC: rx_sof_overruns:%d\n",
  FUNC_4(VAR_32));
 FUNC_2(VAR_54, "EMAC: rx_mof_overruns:%d\n",
  FUNC_4(VAR_27));
 FUNC_2(VAR_54, "EMAC: rx_dma_overruns:%d\n",
  FUNC_4(VAR_15));
}
