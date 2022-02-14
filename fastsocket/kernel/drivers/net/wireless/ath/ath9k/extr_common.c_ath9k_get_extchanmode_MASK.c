
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_channel {int band; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;







__attribute__((used)) static u32 FUNC_0(struct ieee80211_channel *VAR_6,
     enum nl80211_channel_type VAR_7)
{
 u32 VAR_8 = 0;

 switch (VAR_6->band) {
 case 133:
  switch (VAR_7) {
  case 128:
  case 131:
   VAR_8 = VAR_3;
   break;
  case 129:
   VAR_8 = VAR_5;
   break;
  case 130:
   VAR_8 = VAR_4;
   break;
  }
  break;
 case 132:
  switch (VAR_7) {
  case 128:
  case 131:
   VAR_8 = VAR_0;
   break;
  case 129:
   VAR_8 = VAR_2;
   break;
  case 130:
   VAR_8 = VAR_1;
   break;
  }
  break;
 default:
  break;
 }

 return VAR_8;
}
