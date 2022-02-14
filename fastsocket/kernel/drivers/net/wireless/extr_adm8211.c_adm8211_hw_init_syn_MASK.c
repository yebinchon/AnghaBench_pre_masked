
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {int transceiver_type; } ;







 int FUNC_0 (struct ieee80211_hw*,int,int) ;
 int FUNC_1 (struct ieee80211_hw*,int,int) ;
 int FUNC_2 (struct ieee80211_hw*,int,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_0)
{
 struct adm8211_priv *VAR_1 = VAR_0->priv;

 switch (VAR_1->transceiver_type) {
 case 129:
 case 128:



  FUNC_2(VAR_0, 0x1F, 0x00000);

  FUNC_2(VAR_0, 0x0C, 0x3001F);

  FUNC_2(VAR_0, 0x01, 0x29C03);

  FUNC_2(VAR_0, 0x03, 0x1FF6F);

  FUNC_2(VAR_0, 0x04, 0x29403);

  FUNC_2(VAR_0, 0x07, 0x1456F);

  FUNC_2(VAR_0, 0x09,
   (VAR_1->transceiver_type == 129 ?
    0x10050 : 0x00050));

  FUNC_2(VAR_0, 0x08, 0x3FFF8);
  break;

 case 131:
  FUNC_1(VAR_0, 0x1, 0x01E);
  FUNC_1(VAR_0, 0x2, 0x001);
  FUNC_1(VAR_0, 0x3, 0x054);
  FUNC_1(VAR_0, 0x4, 0x310);
  FUNC_1(VAR_0, 0x5, 0x000);
  break;

 case 132:
  FUNC_0(VAR_0, 0x0, 0x0196C);
  FUNC_0(VAR_0, 0x1, 0x007CB);
  FUNC_0(VAR_0, 0x2, 0x3582F);
  FUNC_0(VAR_0, 0x3, 0x010A9);
  FUNC_0(VAR_0, 0x4, 0x77280);
  FUNC_0(VAR_0, 0x5, 0x45641);
  FUNC_0(VAR_0, 0x6, 0xEA130);
  FUNC_0(VAR_0, 0x7, 0x80000);
  FUNC_0(VAR_0, 0x8, 0x7850F);
  FUNC_0(VAR_0, 0x9, 0xF900C);
  FUNC_0(VAR_0, 0xA, 0x00000);
  FUNC_0(VAR_0, 0xB, 0x00000);
  break;

 case 130:
 default:
  break;
 }
}
