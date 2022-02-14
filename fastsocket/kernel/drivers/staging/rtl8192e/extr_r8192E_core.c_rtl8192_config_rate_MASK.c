
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct r8192_priv {TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct ieee80211_network {size_t rates_len; int* rates; size_t rates_ex_len; int* rates_ex; } ;
struct TYPE_2__ {struct ieee80211_network current_network; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device* VAR_12, u16* VAR_13)
{
  struct r8192_priv *VAR_14 = FUNC_0(VAR_12);
  struct ieee80211_network *VAR_15;
  u8 VAR_16=0, VAR_17 = 0;
  VAR_15 = & VAR_14->ieee80211->current_network;

  for (VAR_16=0; VAR_16<VAR_15->rates_len; VAR_16++)
  {
   VAR_17 = VAR_15->rates[VAR_16]&0x7f;
   switch(VAR_17)
   {
    case 136: *VAR_13 |= VAR_3; break;
    case 134: *VAR_13 |= VAR_5; break;
    case 130: *VAR_13 |= VAR_9; break;
    case 139: *VAR_13 |= VAR_0; break;
    case 129: *VAR_13 |= VAR_10; break;
    case 128: *VAR_13 |= VAR_11; break;
    case 138: *VAR_13 |= VAR_1; break;
    case 137: *VAR_13 |= VAR_2; break;
    case 135: *VAR_13 |= VAR_4; break;
    case 133: *VAR_13 |= VAR_6; break;
    case 132: *VAR_13 |= VAR_7; break;
    case 131: *VAR_13 |= VAR_8; break;
   }
  }
  for (VAR_16=0; VAR_16<VAR_15->rates_ex_len; VAR_16++)
  {
   VAR_17 = VAR_15->rates_ex[VAR_16]&0x7f;
   switch(VAR_17)
   {
    case 136: *VAR_13 |= VAR_3; break;
    case 134: *VAR_13 |= VAR_5; break;
    case 130: *VAR_13 |= VAR_9; break;
    case 139: *VAR_13 |= VAR_0; break;
    case 129: *VAR_13 |= VAR_10; break;
    case 128: *VAR_13 |= VAR_11; break;
    case 138: *VAR_13 |= VAR_1; break;
    case 137: *VAR_13 |= VAR_2; break;
    case 135: *VAR_13 |= VAR_4; break;
    case 133: *VAR_13 |= VAR_6; break;
    case 132: *VAR_13 |= VAR_7; break;
    case 131: *VAR_13 |= VAR_8; break;
   }
  }
}
