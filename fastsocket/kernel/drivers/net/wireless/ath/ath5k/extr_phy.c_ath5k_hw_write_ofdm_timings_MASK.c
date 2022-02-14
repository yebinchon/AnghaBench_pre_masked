
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_channel {scalar_t__ hw_value; int center_freq; } ;
struct ath5k_hw {scalar_t__ ah_version; int ah_bwmode; } ;


 scalar_t__ VAR_0 ;



 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath5k_hw*,int ,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline int
FUNC_3(struct ath5k_hw *VAR_6,
    struct ieee80211_channel *VAR_7)
{

 u32 VAR_8, VAR_9, VAR_10,
  VAR_11, VAR_12, VAR_13;

 FUNC_1(!(VAR_6->ah_version == VAR_0) ||
  (VAR_7->hw_value == VAR_1));





 switch (VAR_6->ah_bwmode) {
 case 129:
  VAR_13 = 40 * 2;
  break;
 case 130:
  VAR_13 = 40 / 2;
  break;
 case 128:
  VAR_13 = 40 / 4;
  break;
 default:
  VAR_13 = 40;
  break;
 }
 VAR_8 = ((5 * (VAR_13 << 24)) / 2) / VAR_7->center_freq;



 VAR_9 = FUNC_2(VAR_8);


 if (!VAR_8 || !VAR_9)
  return -VAR_5;


 VAR_9 = 14 - (VAR_9 - 24);




 VAR_10 = VAR_8 +
  (1 << (24 - VAR_9 - 1));



 VAR_12 = VAR_10 >> (24 - VAR_9);
 VAR_11 = VAR_9 - 16;

 FUNC_0(VAR_6, VAR_2,
  VAR_4, VAR_12);
 FUNC_0(VAR_6, VAR_2,
  VAR_3, VAR_11);

 return 0;
}
