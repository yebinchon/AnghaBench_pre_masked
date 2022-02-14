
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_channel {scalar_t__ hw_value; } ;
struct ath5k_hw {scalar_t__ ah_version; scalar_t__ ah_bwmode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath5k_hw*,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2(struct ath5k_hw *VAR_6,
   struct ieee80211_channel *VAR_7)
{




 if (VAR_6->ah_version != VAR_0) {
  u32 VAR_8;
  VAR_8 = FUNC_0(VAR_6, VAR_4) &
   VAR_5;
  VAR_8 = (VAR_7->hw_value == VAR_3) ?
   ((VAR_8 << 2) / 22) : (VAR_8 / 10);
  if (VAR_6->ah_bwmode == VAR_1)
   VAR_8 = VAR_8 << 1;
  if (VAR_6->ah_bwmode == VAR_2)
   VAR_8 = VAR_8 << 2;


  FUNC_1(100 + VAR_8, 100 + (2 * VAR_8));
 } else {
  FUNC_1(1000, 1500);
 }
}
