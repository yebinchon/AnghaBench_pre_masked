
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rt2x00_rate {int flags; int bitrate; } ;
struct ieee80211_rate {int flags; int hw_value_short; int hw_value; int bitrate; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ieee80211_rate *VAR_2,
      const u16 VAR_3, const struct rt2x00_rate *VAR_4)
{
 VAR_2->flags = 0;
 VAR_2->bitrate = VAR_4->bitrate;
 VAR_2->hw_value = VAR_3;
 VAR_2->hw_value_short = VAR_3;

 if (VAR_4->flags & VAR_0)
  VAR_2->flags |= VAR_1;
}
