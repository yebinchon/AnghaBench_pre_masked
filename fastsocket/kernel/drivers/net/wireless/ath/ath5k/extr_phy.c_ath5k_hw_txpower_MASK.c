
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_channel {scalar_t__ hw_value; scalar_t__ center_freq; } ;
struct ath5k_rate_pcal_info {int dummy; } ;
struct TYPE_2__ {int txp_requested; scalar_t__ txp_tpc; int txp_setup; } ;
struct ath5k_hw {int ah_radio; TYPE_1__ ah_txpower; struct ieee80211_channel* ah_current_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct ath5k_hw*,char*,int) ;
 int VAR_15 ;
 int FUNC_4 (struct ath5k_hw*,struct ieee80211_channel*) ;
 int FUNC_5 (struct ath5k_hw*,struct ieee80211_channel*) ;
 int FUNC_6 (struct ath5k_hw*,struct ieee80211_channel*,struct ath5k_rate_pcal_info*) ;
 int FUNC_7 (struct ath5k_hw*,int,int) ;
 int FUNC_8 (struct ath5k_hw*,struct ieee80211_channel*,int,int) ;
 int FUNC_9 (struct ath5k_hw*,int,struct ath5k_rate_pcal_info*,int) ;
 int FUNC_10 (struct ath5k_hw*,int,int) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_12(struct ath5k_hw *VAR_16, struct ieee80211_channel *VAR_17,
   u8 VAR_18)
{
 struct ath5k_rate_pcal_info VAR_19;
 struct ieee80211_channel *VAR_20 = VAR_16->ah_current_channel;
 int VAR_21;
 u8 VAR_22;
 int VAR_23;

 if (VAR_18 > VAR_13) {
  FUNC_3(VAR_16, "invalid tx power: %u\n", VAR_18);
  return -VAR_15;
 }

 VAR_21 = FUNC_4(VAR_16, VAR_17);


 switch (VAR_16->ah_radio) {
 case 131:

  return 0;
 case 130:
  VAR_22 = VAR_7;
  break;
 case 129:
  VAR_22 = VAR_6;
  break;
 case 133:
 case 128:
 case 135:
 case 134:
 case 132:
  VAR_22 = VAR_8;
  break;
 default:
  return -VAR_15;
 }





 if (!VAR_16->ah_txpower.txp_setup ||
     (VAR_17->hw_value != VAR_20->hw_value) ||
     (VAR_17->center_freq != VAR_20->center_freq)) {


  int VAR_24 = VAR_16->ah_txpower.txp_requested;

  FUNC_11(&VAR_16->ah_txpower, 0, sizeof(VAR_16->ah_txpower));


  VAR_16->ah_txpower.txp_tpc = VAR_14;

  VAR_16->ah_txpower.txp_requested = VAR_24;


  VAR_23 = FUNC_8(VAR_16, VAR_17,
       VAR_21, VAR_22);
  if (VAR_23)
   return VAR_23;
 }


 FUNC_10(VAR_16, VAR_21, VAR_22);


 FUNC_5(VAR_16, VAR_17);
 FUNC_6(VAR_16, VAR_17, &VAR_19);


 FUNC_9(VAR_16, VAR_18, &VAR_19, VAR_21);


 FUNC_7(VAR_16, FUNC_2(3, 24) |
  FUNC_2(2, 16) | FUNC_2(1, 8) |
  FUNC_2(0, 0), VAR_0);

 FUNC_7(VAR_16, FUNC_2(7, 24) |
  FUNC_2(6, 16) | FUNC_2(5, 8) |
  FUNC_2(4, 0), VAR_1);

 FUNC_7(VAR_16, FUNC_1(10, 24) |
  FUNC_1(9, 16) | FUNC_1(15, 8) |
  FUNC_1(8, 0), VAR_2);

 FUNC_7(VAR_16, FUNC_1(14, 24) |
  FUNC_1(13, 16) | FUNC_1(12, 8) |
  FUNC_1(11, 0), VAR_3);


 if (VAR_16->ah_txpower.txp_tpc) {
  FUNC_7(VAR_16, VAR_5 |
   VAR_13, VAR_4);

  FUNC_7(VAR_16,
   FUNC_0(VAR_13, VAR_10) |
   FUNC_0(VAR_13, VAR_12) |
   FUNC_0(VAR_13, VAR_11),
   VAR_9);
 } else {
  FUNC_7(VAR_16, VAR_4 |
   VAR_13, VAR_4);
 }

 return 0;
}
