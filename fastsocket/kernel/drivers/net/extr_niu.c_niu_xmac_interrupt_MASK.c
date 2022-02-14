
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct niu_xmac_stats {int pause_received; int pause_on_state; int pause_off_state; int rx_overflows; int rx_underflows; int rx_crc_errors; int rx_len_errors; int rx_code_violations; int rx_octets; int rx_hist_cnt7; int rx_hist_cnt6; int rx_hist_cnt5; int rx_hist_cnt4; int rx_hist_cnt3; int rx_hist_cnt2; int rx_hist_cnt1; int rx_bcasts; int rx_mcasts; int rx_frags; int rx_align_errors; int rx_link_faults; int rx_remote_faults; int rx_local_faults; int tx_underflow_errors; int tx_max_pkt_size_errors; int tx_overflow_errors; int tx_fifo_errors; int tx_bytes; int tx_frames; } ;
struct TYPE_2__ {struct niu_xmac_stats xmac; } ;
struct niu {TYPE_1__ mac_stats; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
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
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct niu *VAR_50)
{
 struct niu_xmac_stats *VAR_51 = &VAR_50->mac_stats.xmac;
 u64 VAR_52;

 VAR_52 = FUNC_0(VAR_43);
 if (VAR_52 & VAR_45)
  VAR_51->tx_frames += VAR_17;
 if (VAR_52 & VAR_44)
  VAR_51->tx_bytes += VAR_16;
 if (VAR_52 & VAR_47)
  VAR_51->tx_fifo_errors++;
 if (VAR_52 & VAR_48)
  VAR_51->tx_overflow_errors++;
 if (VAR_52 & VAR_46)
  VAR_51->tx_max_pkt_size_errors++;
 if (VAR_52 & VAR_49)
  VAR_51->tx_underflow_errors++;

 VAR_52 = FUNC_0(VAR_22);
 if (VAR_52 & VAR_26)
  VAR_51->rx_local_faults++;
 if (VAR_52 & VAR_29)
  VAR_51->rx_remote_faults++;
 if (VAR_52 & VAR_28)
  VAR_51->rx_link_faults += VAR_0;
 if (VAR_52 & VAR_23)
  VAR_51->rx_align_errors += VAR_1;
 if (VAR_52 & VAR_31)
  VAR_51->rx_frags += VAR_6;
 if (VAR_52 & VAR_39)
  VAR_51->rx_mcasts += VAR_14;
 if (VAR_52 & VAR_30)
  VAR_51->rx_bcasts += VAR_2;
 if (VAR_52 & VAR_30)
  VAR_51->rx_bcasts += VAR_2;
 if (VAR_52 & VAR_32)
  VAR_51->rx_hist_cnt1 += VAR_7;
 if (VAR_52 & VAR_33)
  VAR_51->rx_hist_cnt2 += VAR_8;
 if (VAR_52 & VAR_34)
  VAR_51->rx_hist_cnt3 += VAR_9;
 if (VAR_52 & VAR_35)
  VAR_51->rx_hist_cnt4 += VAR_10;
 if (VAR_52 & VAR_36)
  VAR_51->rx_hist_cnt5 += VAR_11;
 if (VAR_52 & VAR_37)
  VAR_51->rx_hist_cnt6 += VAR_12;
 if (VAR_52 & VAR_38)
  VAR_51->rx_hist_cnt7 += VAR_13;
 if (VAR_52 & VAR_40)
  VAR_51->rx_octets += VAR_3;
 if (VAR_52 & VAR_25)
  VAR_51->rx_code_violations += VAR_4;
 if (VAR_52 & VAR_27)
  VAR_51->rx_len_errors += VAR_15;
 if (VAR_52 & VAR_24)
  VAR_51->rx_crc_errors += VAR_5;
 if (VAR_52 & VAR_42)
  VAR_51->rx_underflows++;
 if (VAR_52 & VAR_41)
  VAR_51->rx_overflows++;

 VAR_52 = FUNC_0(VAR_18);
 if (VAR_52 & VAR_20)
  VAR_51->pause_off_state++;
 if (VAR_52 & VAR_21)
  VAR_51->pause_on_state++;
 if (VAR_52 & VAR_19)
  VAR_51->pause_received++;
}
