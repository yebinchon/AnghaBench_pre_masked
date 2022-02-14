
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rtl8180_priv {TYPE_1__* channels; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_6__ {TYPE_2__* chan; } ;
struct ieee80211_conf {TYPE_3__ chandef; } ;
struct TYPE_5__ {int center_freq; } ;
struct TYPE_4__ {int hw_value; } ;


 int FUNC_0 (struct ieee80211_hw*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*,int,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_0,
       struct ieee80211_conf *VAR_1)
{
 struct rtl8180_priv *VAR_2 = VAR_0->priv;
 int VAR_3 =
  FUNC_1(VAR_1->chandef.chan->center_freq);
 u32 VAR_4 = VAR_2->channels[VAR_3 - 1].hw_value & 0xFF;
 u32 VAR_5 = VAR_3 - 1;


 FUNC_2(VAR_0, 0x15, 0x0);
 FUNC_2(VAR_0, 0x06, VAR_4);
 FUNC_2(VAR_0, 0x15, 0x10);
 FUNC_2(VAR_0, 0x15, 0x0);


 FUNC_2(VAR_0, 0x07, 0x0);
 FUNC_2(VAR_0, 0x0B, VAR_5);
 FUNC_2(VAR_0, 0x07, 0x1000);

 FUNC_0(VAR_0, VAR_3);
}
