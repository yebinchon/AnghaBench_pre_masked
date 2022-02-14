
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath5k_hw {scalar_t__ ah_version; scalar_t__ ah_mac_srev; scalar_t__ ah_coverage_class; scalar_t__ ah_ack_bitrate_high; scalar_t__ nvifs; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ath5k_hw*,int ,int) ;
 int FUNC_1 (struct ath5k_hw*,int ,int) ;
 int FUNC_2 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct ath5k_hw*,int,int ) ;
 int FUNC_4 (struct ath5k_hw*) ;
 int FUNC_5 (struct ath5k_hw*,scalar_t__) ;
 int FUNC_6 (struct ath5k_hw*,int) ;
 int FUNC_7 (struct ath5k_hw*) ;

void
FUNC_8(struct ath5k_hw *VAR_15, enum nl80211_iftype VAR_16)
{

 FUNC_4(VAR_15);


 FUNC_6(VAR_15, VAR_16);





 if (VAR_15->ah_version == VAR_0 &&
  VAR_15->nvifs)
  FUNC_7(VAR_15);
 FUNC_3(VAR_15, (VAR_14 |
    VAR_13 <<
    VAR_8),
    VAR_7);


 if (VAR_15->ah_mac_srev >= VAR_9) {
  FUNC_3(VAR_15, 0x000100aa, VAR_1);
  FUNC_3(VAR_15, 0x00003210, VAR_2);
 }


 if (VAR_15->ah_version == VAR_0) {
  FUNC_3(VAR_15,
   FUNC_2(2, VAR_4) |
   FUNC_2(5, VAR_5) |
   FUNC_2(0, VAR_6),
   VAR_3);
 }


 if (VAR_15->ah_coverage_class > 0)
  FUNC_5(VAR_15, VAR_15->ah_coverage_class);


 if (VAR_15->ah_version == VAR_0) {
  u32 VAR_17 = VAR_12 | VAR_11;
  if (VAR_15->ah_ack_bitrate_high)
   FUNC_0(VAR_15, VAR_10, VAR_17);
  else
   FUNC_1(VAR_15, VAR_10, VAR_17);
 }
 return;
}
