
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl8180_priv {int rfparam; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ieee80211_hw*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_4, short VAR_5)
{
 struct rtl8180_priv *VAR_6 = VAR_4->priv;
 u8 VAR_7;

 VAR_7 = VAR_2;
 if (VAR_6->rfparam & VAR_3)
  VAR_7 |= VAR_1;
 if (VAR_5 == 14)
  VAR_7 |= VAR_0;

 FUNC_0(VAR_4, 0x10, VAR_7);
}
