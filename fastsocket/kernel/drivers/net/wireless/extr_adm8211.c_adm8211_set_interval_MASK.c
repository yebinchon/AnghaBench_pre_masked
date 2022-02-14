
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned short u32 ;
struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {int dummy; } ;


 int FUNC_0 (int ,unsigned short) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_1,
     unsigned short VAR_2, unsigned short VAR_3)
{
 struct adm8211_priv *VAR_4 = VAR_1->priv;
 u32 VAR_5;



 VAR_5 = (VAR_2 << 16) | VAR_3;
 FUNC_0(VAR_0, VAR_5);
}
