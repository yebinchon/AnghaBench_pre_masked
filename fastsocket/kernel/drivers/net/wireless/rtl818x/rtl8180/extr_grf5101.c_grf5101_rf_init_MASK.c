
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8180_priv {int csthreshold; TYPE_1__* map; int anaparam; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_2__ {int CONFIG2; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,int) ;
 int FUNC_1 (struct rtl8180_priv*,int ) ;
 int FUNC_2 (struct ieee80211_hw*,int,int) ;
 int FUNC_3 (struct rtl8180_priv*,int *) ;
 int FUNC_4 (struct ieee80211_hw*,int,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_1)
{
 struct rtl8180_priv *VAR_2 = VAR_1->priv;

 FUNC_1(VAR_2, VAR_2->anaparam);

 FUNC_4(VAR_1, 0x1f, 0x0);
 FUNC_4(VAR_1, 0x1f, 0x0);
 FUNC_4(VAR_1, 0x1f, 0x40);
 FUNC_4(VAR_1, 0x1f, 0x60);
 FUNC_4(VAR_1, 0x1f, 0x61);
 FUNC_4(VAR_1, 0x1f, 0x61);
 FUNC_4(VAR_1, 0x00, 0xae4);
 FUNC_4(VAR_1, 0x1f, 0x1);
 FUNC_4(VAR_1, 0x1f, 0x41);
 FUNC_4(VAR_1, 0x1f, 0x61);

 FUNC_4(VAR_1, 0x01, 0x1a23);
 FUNC_4(VAR_1, 0x02, 0x4971);
 FUNC_4(VAR_1, 0x03, 0x41de);
 FUNC_4(VAR_1, 0x04, 0x2d80);
 FUNC_4(VAR_1, 0x05, 0x68ff);
 FUNC_4(VAR_1, 0x06, 0x0);
 FUNC_4(VAR_1, 0x07, 0x0);
 FUNC_4(VAR_1, 0x08, 0x7533);
 FUNC_4(VAR_1, 0x09, 0xc401);
 FUNC_4(VAR_1, 0x0a, 0x0);
 FUNC_4(VAR_1, 0x0c, 0x1c7);
 FUNC_4(VAR_1, 0x0d, 0x29d3);
 FUNC_4(VAR_1, 0x0e, 0x2e8);
 FUNC_4(VAR_1, 0x10, 0x192);
 FUNC_4(VAR_1, 0x11, 0x248);
 FUNC_4(VAR_1, 0x12, 0x0);
 FUNC_4(VAR_1, 0x13, 0x20c4);
 FUNC_4(VAR_1, 0x14, 0xf4fc);
 FUNC_4(VAR_1, 0x15, 0x0);
 FUNC_4(VAR_1, 0x16, 0x1500);

 FUNC_4(VAR_1, 0x07, 0x1000);


 FUNC_2(VAR_1, 0, 0xa8);
 FUNC_2(VAR_1, 3, 0x0);
 FUNC_2(VAR_1, 4, 0xc0);
 FUNC_2(VAR_1, 5, 0x90);
 FUNC_2(VAR_1, 6, 0x1e);
 FUNC_2(VAR_1, 7, 0x64);

 FUNC_0(VAR_1, 1);

 FUNC_2(VAR_1, 0x11, 0x88);

 if (FUNC_3(VAR_2, &VAR_2->map->CONFIG2) &
     VAR_0)
  FUNC_2(VAR_1, 0x12, 0xc0);
 else
  FUNC_2(VAR_1, 0x12, 0x40);

 FUNC_2(VAR_1, 0x13, 0x90 | VAR_2->csthreshold);

 FUNC_2(VAR_1, 0x19, 0x0);
 FUNC_2(VAR_1, 0x1a, 0xa0);
 FUNC_2(VAR_1, 0x1b, 0x44);
}
