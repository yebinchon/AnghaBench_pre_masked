
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw_antcomb_conf {void* main_lna_conf; void* alt_lna_conf; } ;
struct ath_ant_comb {int quick_scan_cnt; void* main_conf; void* first_quick_scan_conf; void* second_quick_scan_conf; int rssi_first; int rssi_second; int total_pkt_count; int first_ratio; int alt_good; int scan_not_start; int scan; int rssi_third; int rssi_lna1; int rssi_lna2; int second_ratio; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (int,int ,int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct ath_ant_comb *VAR_8,
           struct ath_hw_antcomb_conf *VAR_9,
           int VAR_10, int VAR_11,
           int VAR_12)
{

 switch (VAR_8->quick_scan_cnt) {
 case 0:

  VAR_9->main_lna_conf = VAR_8->main_conf;
  VAR_9->alt_lna_conf = VAR_8->first_quick_scan_conf;
  break;
 case 1:

  VAR_9->main_lna_conf = VAR_8->main_conf;
  VAR_9->alt_lna_conf = VAR_8->second_quick_scan_conf;
  VAR_8->rssi_first = VAR_10;
  VAR_8->rssi_second = VAR_11;

  if (VAR_8->main_conf == VAR_1) {

   if (FUNC_0(VAR_12,
      VAR_2,
      VAR_3,
      VAR_10, VAR_11,
      VAR_8->total_pkt_count))
    VAR_8->first_ratio = 1;
   else
    VAR_8->first_ratio = 0;
  } else if (VAR_8->main_conf == VAR_7) {
   if (FUNC_0(VAR_12,
      VAR_4,
      VAR_3,
      VAR_10, VAR_11,
      VAR_8->total_pkt_count))
    VAR_8->first_ratio = 1;
   else
    VAR_8->first_ratio = 0;
  } else {
   if ((((VAR_12 >= VAR_0) &&
         (VAR_11 > VAR_10 +
          VAR_2)) ||
        (VAR_11 > VAR_10)) &&
       (VAR_8->total_pkt_count > 50))
    VAR_8->first_ratio = 1;
   else
    VAR_8->first_ratio = 0;
  }
  break;
 case 2:
  VAR_8->alt_good = 0;
  VAR_8->scan_not_start = 0;
  VAR_8->scan = 0;
  VAR_8->rssi_first = VAR_10;
  VAR_8->rssi_third = VAR_11;

  if (VAR_8->second_quick_scan_conf == VAR_1)
   VAR_8->rssi_lna1 = VAR_11;
  else if (VAR_8->second_quick_scan_conf ==
    VAR_7)
   VAR_8->rssi_lna2 = VAR_11;
  else if (VAR_8->second_quick_scan_conf ==
    VAR_6) {
   if (VAR_8->main_conf == VAR_7)
    VAR_8->rssi_lna2 = VAR_10;
   else if (VAR_8->main_conf == VAR_1)
    VAR_8->rssi_lna1 = VAR_10;
  }

  if (VAR_8->rssi_lna2 > VAR_8->rssi_lna1 +
      VAR_5)
   VAR_9->main_lna_conf = VAR_7;
  else
   VAR_9->main_lna_conf = VAR_1;

  if (VAR_8->main_conf == VAR_1) {
   if (FUNC_0(VAR_12,
      VAR_2,
      VAR_3,
      VAR_10, VAR_11,
      VAR_8->total_pkt_count))
    VAR_8->second_ratio = 1;
   else
    VAR_8->second_ratio = 0;
  } else if (VAR_8->main_conf == VAR_7) {
   if (FUNC_0(VAR_12,
      VAR_4,
      VAR_3,
      VAR_10, VAR_11,
      VAR_8->total_pkt_count))
    VAR_8->second_ratio = 1;
   else
    VAR_8->second_ratio = 0;
  } else {
   if ((((VAR_12 >= VAR_0) &&
         (VAR_11 > VAR_10 +
          VAR_2)) ||
        (VAR_11 > VAR_10)) &&
       (VAR_8->total_pkt_count > 50))
    VAR_8->second_ratio = 1;
   else
    VAR_8->second_ratio = 0;
  }


  if (VAR_8->first_ratio && VAR_8->second_ratio) {
   if (VAR_8->rssi_second > VAR_8->rssi_third) {

    if ((VAR_8->first_quick_scan_conf ==
        VAR_1) ||
        (VAR_8->first_quick_scan_conf ==
        VAR_7))

     if (VAR_9->main_lna_conf ==
         VAR_7)
      VAR_9->alt_lna_conf =
       VAR_1;
     else
      VAR_9->alt_lna_conf =
       VAR_7;
    else

     VAR_9->alt_lna_conf =
      VAR_8->first_quick_scan_conf;
   } else if ((VAR_8->second_quick_scan_conf ==
       VAR_1) ||
       (VAR_8->second_quick_scan_conf ==
       VAR_7)) {

    if (VAR_9->main_lna_conf ==
        VAR_7)
     VAR_9->alt_lna_conf =
      VAR_1;
    else
     VAR_9->alt_lna_conf =
      VAR_7;
   } else {

    VAR_9->alt_lna_conf =
     VAR_8->second_quick_scan_conf;
   }
  } else if (VAR_8->first_ratio) {

   if ((VAR_8->first_quick_scan_conf ==
       VAR_1) ||
       (VAR_8->first_quick_scan_conf ==
       VAR_7))

    if (VAR_9->main_lna_conf ==
        VAR_7)
     VAR_9->alt_lna_conf =
       VAR_1;
    else
     VAR_9->alt_lna_conf =
       VAR_7;
   else

    VAR_9->alt_lna_conf =
      VAR_8->first_quick_scan_conf;
  } else if (VAR_8->second_ratio) {

   if ((VAR_8->second_quick_scan_conf ==
       VAR_1) ||
       (VAR_8->second_quick_scan_conf ==
       VAR_7))

    if (VAR_9->main_lna_conf ==
        VAR_7)
     VAR_9->alt_lna_conf =
      VAR_1;
    else
     VAR_9->alt_lna_conf =
      VAR_7;
   else

    VAR_9->alt_lna_conf =
      VAR_8->second_quick_scan_conf;
  } else {

   if ((VAR_8->main_conf == VAR_1) ||
       (VAR_8->main_conf == VAR_7))

    if (VAR_9->main_lna_conf ==
        VAR_7)
     VAR_9->alt_lna_conf =
       VAR_1;
    else
     VAR_9->alt_lna_conf =
       VAR_7;
   else

    VAR_9->alt_lna_conf = VAR_8->main_conf;
  }
  break;
 default:
  break;
 }
}
