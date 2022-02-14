
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int q_tx_num; } ;
struct TYPE_5__ {int range_5ghz_min; int range_5ghz_max; int range_2ghz_min; int range_2ghz_max; } ;
struct TYPE_4__ {int ee_regdomain; int ee_header; } ;
struct ath5k_capabilities {int cap_has_phyerr_counters; int cap_has_mrr_support; TYPE_3__ cap_queues; int cap_mode; int cap_needs_2GHz_ovr; TYPE_2__ cap_range; TYPE_1__ cap_eeprom; } ;
struct ath5k_hw {scalar_t__ ah_version; int ah_radio_5ghz_revision; scalar_t__ ah_mac_srev; struct ath5k_capabilities ah_capabilities; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6(struct ath5k_hw *VAR_10)
{
 struct ath5k_capabilities *VAR_11 = &VAR_10->ah_capabilities;
 u16 VAR_12;


 VAR_12 = VAR_11->cap_eeprom.ee_header;

 if (VAR_10->ah_version == VAR_0) {




  VAR_11->cap_range.range_5ghz_min = 5120;
  VAR_11->cap_range.range_5ghz_max = 5430;
  VAR_11->cap_range.range_2ghz_min = 0;
  VAR_11->cap_range.range_2ghz_max = 0;


  FUNC_4(VAR_3, VAR_11->cap_mode);
 } else {
  if (FUNC_0(VAR_12)) {
   if (FUNC_5(VAR_11->cap_eeprom.ee_regdomain))
    VAR_11->cap_range.range_5ghz_min = 4920;
   else
    VAR_11->cap_range.range_5ghz_min = 5005;
   VAR_11->cap_range.range_5ghz_max = 6100;


   FUNC_4(VAR_3, VAR_11->cap_mode);
  }



  if (FUNC_1(VAR_12) ||
      (FUNC_2(VAR_12) &&
       VAR_10->ah_version != VAR_1)) {

   VAR_11->cap_range.range_2ghz_min = 2412;
   VAR_11->cap_range.range_2ghz_max = 2732;




   if (!VAR_11->cap_needs_2GHz_ovr) {
    if (FUNC_1(VAR_12))
     FUNC_4(VAR_4,
       VAR_11->cap_mode);

    if (FUNC_2(VAR_12) &&
    VAR_10->ah_version != VAR_1)
     FUNC_4(VAR_5,
       VAR_11->cap_mode);
   }
  }
 }

 if ((VAR_10->ah_radio_5ghz_revision & 0xf0) == VAR_9)
  FUNC_3(VAR_3, VAR_11->cap_mode);


 if (VAR_10->ah_version == VAR_0)
  VAR_11->cap_queues.q_tx_num = VAR_7;
 else
  VAR_11->cap_queues.q_tx_num = VAR_6;


 if (VAR_10->ah_mac_srev >= VAR_8)
  VAR_11->cap_has_phyerr_counters = 1;
 else
  VAR_11->cap_has_phyerr_counters = 0;


 if (VAR_10->ah_version == VAR_2)
  VAR_11->cap_has_mrr_support = 1;
 else
  VAR_11->cap_has_mrr_support = 0;

 return 0;
}
