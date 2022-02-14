
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rtl8180_priv {TYPE_3__* channels; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_5__ {TYPE_1__* chan; } ;
struct ieee80211_conf {TYPE_2__ chandef; } ;
struct TYPE_6__ {int hw_value; } ;
struct TYPE_4__ {int center_freq; } ;


 int FUNC_0 (int ) ;
 int* VAR_0 ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 int FUNC_2 (struct ieee80211_hw*,int,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_1,
      struct ieee80211_conf *VAR_2)
{
 struct rtl8180_priv *VAR_3 = VAR_1->priv;
 int VAR_4 =
  FUNC_0(VAR_2->chandef.chan->center_freq);
 u32 VAR_5 = VAR_3->channels[VAR_4 - 1].hw_value & 0xFF;
 u32 VAR_6 = VAR_0[VAR_4 - 1];

 FUNC_2(VAR_1, 7, VAR_5);

 FUNC_1(VAR_1, VAR_4);

 FUNC_2(VAR_1, 0, VAR_6);
 FUNC_2(VAR_1, 1, 0xbb50);
 FUNC_2(VAR_1, 2, 0x80);
 FUNC_2(VAR_1, 3, 0);
}
