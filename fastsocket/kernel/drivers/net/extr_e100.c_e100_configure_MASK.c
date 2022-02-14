
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ full_duplex; scalar_t__ force_media; } ;
struct nic {int flags; scalar_t__ mac; int netdev; scalar_t__ loopback; TYPE_2__ mii; int adaptive_ifs; } ;
struct config {int byte_count; int rx_fifo_limit; int direct_rx_dma; int standard_tcb; int standard_stat_counter; int rx_discard_short_frames; int tx_underrun_retry; int mii_mode; int pad10; int no_source_addr_insertion; int preamble_length; int ifs; int ip_addr_hi; int pad15_1; int pad15_2; int crs_or_cdt; int fc_delay_hi; int tx_padding; int fc_priority_threshold; int pad18; int full_duplex_pin; int pad20_1; int fc_priority_location; int pad21_1; int full_duplex_force; int rx_save_bad_frames; int promiscuous_mode; int multicast_all; int magic_packet_disable; int fc_disable; int mwi_enable; int rx_long_ok; int tno_intr; int rx_d102_mode; scalar_t__ loopback; int adaptive_ifs; } ;
struct TYPE_3__ {struct config config; } ;
struct cb {int command; TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct nic*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct config*,int ,int) ;
 int VAR_6 ;
 int FUNC_3 (struct nic*,int ,int ,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_5(struct nic *VAR_9, struct cb *VAR_10, struct sk_buff *VAR_11)
{
 struct config *VAR_12 = &VAR_10->u.config;
 u8 *VAR_13 = (u8 *)VAR_12;

 VAR_10->command = FUNC_0(VAR_1);

 FUNC_2(VAR_12, 0, sizeof(struct config));

 VAR_12->byte_count = 0x16;
 VAR_12->rx_fifo_limit = 0x8;
 VAR_12->direct_rx_dma = 0x1;
 VAR_12->standard_tcb = 0x1;
 VAR_12->standard_stat_counter = 0x1;
 VAR_12->rx_discard_short_frames = 0x1;
 VAR_12->tx_underrun_retry = 0x3;
 if (FUNC_1(VAR_9))
  VAR_12->mii_mode = 1;
 VAR_12->pad10 = 0x6;
 VAR_12->no_source_addr_insertion = 0x1;
 VAR_12->preamble_length = 0x2;
 VAR_12->ifs = 0x6;
 VAR_12->ip_addr_hi = 0xF2;
 VAR_12->pad15_1 = 0x1;
 VAR_12->pad15_2 = 0x1;
 VAR_12->crs_or_cdt = 0x0;
 VAR_12->fc_delay_hi = 0x40;
 VAR_12->tx_padding = 0x1;
 VAR_12->fc_priority_threshold = 0x7;
 VAR_12->pad18 = 0x1;
 VAR_12->full_duplex_pin = 0x1;
 VAR_12->pad20_1 = 0x1F;
 VAR_12->fc_priority_location = 0x1;
 VAR_12->pad21_1 = 0x5;

 VAR_12->adaptive_ifs = VAR_9->adaptive_ifs;
 VAR_12->loopback = VAR_9->loopback;

 if (VAR_9->mii.force_media && VAR_9->mii.full_duplex)
  VAR_12->full_duplex_force = 0x1;

 if (VAR_9->flags & VAR_7 || VAR_9->loopback) {
  VAR_12->rx_save_bad_frames = 0x1;
  VAR_12->rx_discard_short_frames = 0x0;
  VAR_12->promiscuous_mode = 0x1;
 }

 if (VAR_9->flags & VAR_6)
  VAR_12->multicast_all = 0x1;


 if (FUNC_4(VAR_9->netdev) || !(VAR_9->flags & VAR_8))
  VAR_12->magic_packet_disable = 0x1;

 if (VAR_9->mac >= VAR_4) {
  VAR_12->fc_disable = 0x1;
  VAR_12->mwi_enable = 0x1;
  VAR_12->standard_tcb = 0x0;
  VAR_12->rx_long_ok = 0x1;
  if (VAR_9->mac >= VAR_5) {
   VAR_12->tno_intr = 0x1;

   if (VAR_9->mac >= VAR_3) {
    VAR_12->byte_count = 0x20;
    VAR_12->rx_d102_mode = 0x1;
   }
  } else {
   VAR_12->standard_stat_counter = 0x0;
  }
 }

 FUNC_3(VAR_9, VAR_2, VAR_0, VAR_9->netdev,
       "[00-07]=%02X:%02X:%02X:%02X:%02X:%02X:%02X:%02X\n",
       VAR_13[0], VAR_13[1], VAR_13[2], VAR_13[3], VAR_13[4], VAR_13[5], VAR_13[6], VAR_13[7]);
 FUNC_3(VAR_9, VAR_2, VAR_0, VAR_9->netdev,
       "[08-15]=%02X:%02X:%02X:%02X:%02X:%02X:%02X:%02X\n",
       VAR_13[8], VAR_13[9], VAR_13[10], VAR_13[11], VAR_13[12], VAR_13[13], VAR_13[14], VAR_13[15]);
 FUNC_3(VAR_9, VAR_2, VAR_0, VAR_9->netdev,
       "[16-23]=%02X:%02X:%02X:%02X:%02X:%02X:%02X:%02X\n",
       VAR_13[16], VAR_13[17], VAR_13[18], VAR_13[19], VAR_13[20], VAR_13[21], VAR_13[22], VAR_13[23]);
}
