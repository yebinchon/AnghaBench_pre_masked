
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ieee80211_channel {int center_freq; } ;
struct ath5k_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct ath5k_hw*,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct ath5k_hw *VAR_3,
  struct ieee80211_channel *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;
 u16 VAR_8;

 VAR_5 = VAR_6 = VAR_7 = 0;
 VAR_8 = VAR_4->center_freq;

 if (VAR_8 < 4800) {
  VAR_6 = FUNC_0((VAR_8 - 2272), 8);
  VAR_7 = 0;

 } else if ((VAR_8 % 5) != 2 || VAR_8 > 5435) {
  if (!(VAR_8 % 20) && VAR_8 < 5120)
   VAR_6 = FUNC_0(((VAR_8 - 4800) / 20 << 2), 8);
  else if (!(VAR_8 % 10))
   VAR_6 = FUNC_0(((VAR_8 - 4800) / 10 << 1), 8);
  else if (!(VAR_8 % 5))
   VAR_6 = FUNC_0((VAR_8 - 4800) / 5, 8);
  else
   return -VAR_2;
  VAR_7 = FUNC_0(1, 2);
 } else {
  VAR_6 = FUNC_0((10 * (VAR_8 - 2 - 4800)) / 25 + 1, 8);
  VAR_7 = FUNC_0(0, 2);
 }

 VAR_5 = (VAR_6 << 4) | VAR_7 << 2 | 0x1001;

 FUNC_1(VAR_3, VAR_5 & 0xff, VAR_0);
 FUNC_1(VAR_3, (VAR_5 >> 8) & 0x7f, VAR_1);

 return 0;
}
