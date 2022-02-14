
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_ant_comb {int total_pkt_count; int main_total_rssi; int alt_total_rssi; int alt_recv_cnt; int scan; int alt_good; scalar_t__ count; int scan_not_start; int rssi_lna2; int rssi_lna1; int rssi_add; int rssi_sub; scalar_t__ main_recv_cnt; scalar_t__ scan_start_time; int quick_scan_cnt; } ;
struct ath_softc {int sc_ah; struct ath_ant_comb ant_comb; } ;
struct ath_rx_status {int rs_rssi_ctl0; int rs_rssi_ctl1; int rs_rssi_ctl2; scalar_t__ rs_moreaggr; } ;
struct ath_hw_antcomb_conf {int alt_lna_conf; int main_lna_conf; int lna1_lna2_delta; int div_group; } ;


 int VAR_0 ;

 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,struct ath_hw_antcomb_conf*) ;
 int FUNC_1 (int ,struct ath_hw_antcomb_conf*) ;
 scalar_t__ FUNC_2 (int ,int,int,int,int,int) ;
 int FUNC_3 (struct ath_hw_antcomb_conf*,struct ath_ant_comb*,int) ;
 int FUNC_4 (struct ath_ant_comb*,struct ath_hw_antcomb_conf,int) ;
 int FUNC_5 (struct ath_ant_comb*,struct ath_hw_antcomb_conf*,int,int,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

void FUNC_8(struct ath_softc *VAR_10, struct ath_rx_status *VAR_11)
{
 struct ath_hw_antcomb_conf VAR_12;
 struct ath_ant_comb *VAR_13 = &VAR_10->ant_comb;
 int VAR_14 = 0, VAR_15 = 0, VAR_16 = 0, VAR_17;
 int VAR_18;
 int VAR_19 = VAR_11->rs_rssi_ctl0;
 int VAR_20 = VAR_11->rs_rssi_ctl1;
 int VAR_21, VAR_22;
 bool VAR_23 = 0;

 VAR_21 = (VAR_11->rs_rssi_ctl2 >> VAR_6) &
         VAR_8;
 VAR_22 = (VAR_11->rs_rssi_ctl2 >> VAR_7) &
    VAR_8;


 if (VAR_19 > 0 && VAR_20 > 0) {
  VAR_13->total_pkt_count++;
  VAR_13->main_total_rssi += VAR_19;
  VAR_13->alt_total_rssi += VAR_20;
  if (VAR_22 == VAR_21)
   VAR_13->main_recv_cnt++;
  else
   VAR_13->alt_recv_cnt++;
 }


 if (VAR_13->scan && VAR_13->alt_good) {
  if (FUNC_7(VAR_9, VAR_13->scan_start_time +
      FUNC_6(VAR_4)))
   VAR_23 = 1;
  else
   if (VAR_13->total_pkt_count ==
       VAR_5) {
    VAR_14 = ((VAR_13->alt_recv_cnt * 100) /
         VAR_13->total_pkt_count);
    if (VAR_14 < VAR_0)
     VAR_23 = 1;
   }
 }

 if (((VAR_13->total_pkt_count < VAR_3) ||
     VAR_11->rs_moreaggr) && !VAR_23)
  return;

 if (VAR_13->total_pkt_count) {
  VAR_14 = ((VAR_13->alt_recv_cnt * 100) /
        VAR_13->total_pkt_count);
  VAR_16 = (VAR_13->main_total_rssi /
     VAR_13->total_pkt_count);
  VAR_15 = (VAR_13->alt_total_rssi /
     VAR_13->total_pkt_count);
 }


 FUNC_0(VAR_10->sc_ah, &VAR_12);
 VAR_17 = VAR_12.alt_lna_conf;
 VAR_18 = VAR_12.main_lna_conf;

 VAR_13->count++;

 if (VAR_13->count == VAR_2) {
  if (VAR_14 > VAR_0) {
   FUNC_4(VAR_13, VAR_12,
        VAR_16);
   VAR_13->alt_good = 1;
  } else {
   VAR_13->alt_good = 0;
  }

  VAR_13->count = 0;
  VAR_13->scan = 1;
  VAR_13->scan_not_start = 1;
 }

 if (!VAR_13->scan) {
  if (FUNC_2(VAR_12.div_group,
     VAR_14, VAR_18, VAR_17,
     VAR_15, VAR_16)) {
   if (VAR_17 == 128) {

    VAR_12.main_lna_conf =
      128;
    VAR_12.alt_lna_conf =
      131;
   } else if (VAR_17 == 131) {
    VAR_12.main_lna_conf =
      131;
    VAR_12.alt_lna_conf =
      128;
   }

   goto div_comb_done;
  } else if ((VAR_17 != 131) &&
      (VAR_17 != 128)) {

   if (VAR_18 == 128)
    VAR_12.alt_lna_conf =
      131;
   else if (VAR_18 == 131)
    VAR_12.alt_lna_conf =
      128;

   goto div_comb_done;
  }

  if ((VAR_15 < (VAR_16 +
         VAR_12.lna1_lna2_delta)))
   goto div_comb_done;
 }

 if (!VAR_13->scan_not_start) {
  switch (VAR_17) {
  case 128:
   VAR_13->rssi_lna2 = VAR_15;
   VAR_13->rssi_lna1 = VAR_16;
   VAR_13->scan = 1;

   VAR_12.main_lna_conf =
    131;
   VAR_12.alt_lna_conf =
    129;
   break;
  case 131:
   VAR_13->rssi_lna1 = VAR_15;
   VAR_13->rssi_lna2 = VAR_16;
   VAR_13->scan = 1;

   VAR_12.main_lna_conf = 128;
   VAR_12.alt_lna_conf =
    129;
   break;
  case 129:
   VAR_13->rssi_add = VAR_15;
   VAR_13->scan = 1;

   VAR_12.alt_lna_conf =
    130;
   break;
  case 130:
   VAR_13->rssi_sub = VAR_15;
   VAR_13->scan = 0;
   if (VAR_13->rssi_lna2 >
       (VAR_13->rssi_lna1 +
       VAR_1)) {

    if ((VAR_13->rssi_add > VAR_13->rssi_lna1) &&
        (VAR_13->rssi_add > VAR_13->rssi_sub)) {

     VAR_12.main_lna_conf =
      128;
     VAR_12.alt_lna_conf =
      129;
    } else if (VAR_13->rssi_sub >
        VAR_13->rssi_lna1) {

     VAR_12.main_lna_conf =
      128;
     VAR_12.alt_lna_conf =
      130;
    } else {

     VAR_12.main_lna_conf =
      128;
     VAR_12.alt_lna_conf =
      131;
    }
   } else {

    if ((VAR_13->rssi_add > VAR_13->rssi_lna2) &&
        (VAR_13->rssi_add > VAR_13->rssi_sub)) {

     VAR_12.main_lna_conf =
      131;
     VAR_12.alt_lna_conf =
      129;
    } else if (VAR_13->rssi_sub >
        VAR_13->rssi_lna1) {

     VAR_12.main_lna_conf =
      131;
     VAR_12.alt_lna_conf =
      130;
    } else {

     VAR_12.main_lna_conf =
      131;
     VAR_12.alt_lna_conf =
      128;
    }
   }
   break;
  default:
   break;
  }
 } else {
  if (!VAR_13->alt_good) {
   VAR_13->scan_not_start = 0;

   if (VAR_18 == 128) {
    VAR_12.main_lna_conf =
      128;
    VAR_12.alt_lna_conf =
      131;
   } else if (VAR_18 == 131) {
    VAR_12.main_lna_conf =
      131;
    VAR_12.alt_lna_conf =
      128;
   }
   goto div_comb_done;
  }
 }

 FUNC_5(VAR_13, &VAR_12,
        VAR_16, VAR_15,
        VAR_14);

 VAR_13->quick_scan_cnt++;

div_comb_done:
 FUNC_3(&VAR_12, VAR_13, VAR_14);
 FUNC_1(VAR_10->sc_ah, &VAR_12);

 VAR_13->scan_start_time = VAR_9;
 VAR_13->total_pkt_count = 0;
 VAR_13->main_total_rssi = 0;
 VAR_13->alt_total_rssi = 0;
 VAR_13->main_recv_cnt = 0;
 VAR_13->alt_recv_cnt = 0;
}
