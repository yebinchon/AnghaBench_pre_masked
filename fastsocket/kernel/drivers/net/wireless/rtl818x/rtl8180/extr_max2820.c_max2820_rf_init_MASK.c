
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8180_priv {TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_2__ {int CONFIG2; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,int *) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 int FUNC_2 (struct ieee80211_hw*,int,int) ;
 int FUNC_3 (struct rtl8180_priv*,int *) ;
 int FUNC_4 (struct ieee80211_hw*,int,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_1)
{
 struct rtl8180_priv *VAR_2 = VAR_1->priv;


 FUNC_4(VAR_1, 0, 0x007);
 FUNC_4(VAR_1, 1, 0x01e);
 FUNC_4(VAR_1, 2, 0x001);

 FUNC_0(VAR_1, ((void*)0));

 FUNC_4(VAR_1, 4, 0x313);





 FUNC_4(VAR_1, 5, 0x00f);


 FUNC_2(VAR_1, 0, 0x88);
 FUNC_2(VAR_1, 3, 0x08);
 FUNC_2(VAR_1, 4, 0xf8);
 FUNC_2(VAR_1, 5, 0x90);
 FUNC_2(VAR_1, 6, 0x1a);
 FUNC_2(VAR_1, 7, 0x64);

 FUNC_1(VAR_1, 1);

 FUNC_2(VAR_1, 0x11, 0x88);

 if (FUNC_3(VAR_2, &VAR_2->map->CONFIG2) &
     VAR_0)
  FUNC_2(VAR_1, 0x12, 0xc7);
 else
  FUNC_2(VAR_1, 0x12, 0x47);

 FUNC_2(VAR_1, 0x13, 0x9b);

 FUNC_2(VAR_1, 0x19, 0x0);
 FUNC_2(VAR_1, 0x1a, 0x9f);

 FUNC_0(VAR_1, ((void*)0));
}
