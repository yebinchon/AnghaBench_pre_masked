
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl8187_priv {TYPE_1__* map; } ;
struct ieee80211_hw {int wiphy; struct rtl8187_priv* priv; } ;
typedef int __le32 ;
struct TYPE_2__ {int TX_ANTENNA; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtl8187_priv*,int *,int) ;
 int FUNC_3 (struct rtl8187_priv*,int *,int) ;
 int* VAR_0 ;
 int FUNC_4 (struct ieee80211_hw*,int) ;
 int FUNC_5 (struct ieee80211_hw*,int,int) ;
 int FUNC_6 (struct ieee80211_hw*,int,int) ;
 int FUNC_7 (struct ieee80211_hw*,int,int) ;
 int* VAR_1 ;
 int FUNC_8 (struct ieee80211_hw*,int) ;
 int* VAR_2 ;
 int FUNC_9 (int ,char*,int) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_3)
{
 struct rtl8187_priv *VAR_4 = VAR_3->priv;
 int VAR_5;

 FUNC_5(VAR_3, 0x0, 0x2BF);
 FUNC_5(VAR_3, 0x1, 0xEE0);
 FUNC_5(VAR_3, 0x2, 0x44D);
 FUNC_5(VAR_3, 0x3, 0x441);
 FUNC_5(VAR_3, 0x4, 0x8C3);
 FUNC_5(VAR_3, 0x5, 0xC72);
 FUNC_5(VAR_3, 0x6, 0x0E6);
 FUNC_5(VAR_3, 0x7, 0x82A);
 FUNC_5(VAR_3, 0x8, 0x03F);
 FUNC_5(VAR_3, 0x9, 0x335);
 FUNC_5(VAR_3, 0xa, 0x9D4);
 FUNC_5(VAR_3, 0xb, 0x7BB);
 FUNC_5(VAR_3, 0xc, 0x850);
 FUNC_5(VAR_3, 0xd, 0xCDF);
 FUNC_5(VAR_3, 0xe, 0x02B);
 FUNC_5(VAR_3, 0xf, 0x114);
 FUNC_1(100);

 FUNC_5(VAR_3, 0x0, 0x1B7);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  FUNC_5(VAR_3, 0x1, VAR_5 + 1);
  FUNC_5(VAR_3, 0x2, VAR_2[VAR_5]);
 }

 FUNC_5(VAR_3, 0x3, 0x080);
 FUNC_5(VAR_3, 0x5, 0x004);
 FUNC_5(VAR_3, 0x0, 0x0B7);
 FUNC_5(VAR_3, 0x2, 0xc4D);

 FUNC_1(200);
 FUNC_5(VAR_3, 0x2, 0x44D);
 FUNC_1(100);

 if (!(FUNC_4(VAR_3, 6) & (1 << 7))) {
  FUNC_5(VAR_3, 0x02, 0x0C4D);
  FUNC_1(200);
  FUNC_5(VAR_3, 0x02, 0x044D);
  FUNC_1(100);
  if (!(FUNC_4(VAR_3, 6) & (1 << 7)))
   FUNC_9(VAR_3->wiphy, "RF Calibration Failed! %x\n",
       FUNC_4(VAR_3, 6));
 }

 FUNC_1(200);

 FUNC_5(VAR_3, 0x0, 0x2BF);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  FUNC_7(VAR_3, 0xB, VAR_0[VAR_5]);
  FUNC_7(VAR_3, 0xA, 0x80 + VAR_5);
 }

 FUNC_1(1);

 FUNC_7(VAR_3, 0x00, 0x01);
 FUNC_7(VAR_3, 0x01, 0x02);
 FUNC_7(VAR_3, 0x02, 0x42);
 FUNC_7(VAR_3, 0x03, 0x00);
 FUNC_7(VAR_3, 0x04, 0x00);
 FUNC_7(VAR_3, 0x05, 0x00);
 FUNC_7(VAR_3, 0x06, 0x40);
 FUNC_7(VAR_3, 0x07, 0x00);
 FUNC_7(VAR_3, 0x08, 0x40);
 FUNC_7(VAR_3, 0x09, 0xfe);
 FUNC_7(VAR_3, 0x0a, 0x08);
 FUNC_7(VAR_3, 0x0b, 0x80);
 FUNC_7(VAR_3, 0x0c, 0x01);
 FUNC_7(VAR_3, 0x0d, 0x43);
 FUNC_7(VAR_3, 0x0e, 0xd3);
 FUNC_7(VAR_3, 0x0f, 0x38);
 FUNC_7(VAR_3, 0x10, 0x84);
 FUNC_7(VAR_3, 0x11, 0x07);
 FUNC_7(VAR_3, 0x12, 0x20);
 FUNC_7(VAR_3, 0x13, 0x20);
 FUNC_7(VAR_3, 0x14, 0x00);
 FUNC_7(VAR_3, 0x15, 0x40);
 FUNC_7(VAR_3, 0x16, 0x00);
 FUNC_7(VAR_3, 0x17, 0x40);
 FUNC_7(VAR_3, 0x18, 0xef);
 FUNC_7(VAR_3, 0x19, 0x19);
 FUNC_7(VAR_3, 0x1a, 0x20);
 FUNC_7(VAR_3, 0x1b, 0x15);
 FUNC_7(VAR_3, 0x1c, 0x04);
 FUNC_7(VAR_3, 0x1d, 0xc5);
 FUNC_7(VAR_3, 0x1e, 0x95);
 FUNC_7(VAR_3, 0x1f, 0x75);
 FUNC_7(VAR_3, 0x20, 0x1f);
 FUNC_7(VAR_3, 0x21, 0x17);
 FUNC_7(VAR_3, 0x22, 0x16);
 FUNC_7(VAR_3, 0x23, 0x80);
 FUNC_7(VAR_3, 0x24, 0x46);
 FUNC_7(VAR_3, 0x25, 0x00);
 FUNC_7(VAR_3, 0x26, 0x90);
 FUNC_7(VAR_3, 0x27, 0x88);

 FUNC_7(VAR_3, 0x0b, VAR_1[4 * 3]);
 FUNC_7(VAR_3, 0x1b, VAR_1[4 * 3 + 1]);
 FUNC_7(VAR_3, 0x1d, VAR_1[4 * 3 + 2]);
 FUNC_7(VAR_3, 0x21, 0x37);

 FUNC_6(VAR_3, 0x00, 0x98);
 FUNC_6(VAR_3, 0x03, 0x20);
 FUNC_6(VAR_3, 0x04, 0x7e);
 FUNC_6(VAR_3, 0x05, 0x12);
 FUNC_6(VAR_3, 0x06, 0xfc);
 FUNC_6(VAR_3, 0x07, 0x78);
 FUNC_6(VAR_3, 0x08, 0x2e);
 FUNC_6(VAR_3, 0x10, 0x9b);
 FUNC_6(VAR_3, 0x11, 0x88);
 FUNC_6(VAR_3, 0x12, 0x47);
 FUNC_6(VAR_3, 0x13, 0xd0);
 FUNC_6(VAR_3, 0x19, 0x00);
 FUNC_6(VAR_3, 0x1a, 0xa0);
 FUNC_6(VAR_3, 0x1b, 0x08);
 FUNC_6(VAR_3, 0x40, 0x86);
 FUNC_6(VAR_3, 0x41, 0x8d);
 FUNC_6(VAR_3, 0x42, 0x15);
 FUNC_6(VAR_3, 0x43, 0x18);
 FUNC_6(VAR_3, 0x44, 0x36);
 FUNC_6(VAR_3, 0x45, 0x35);
 FUNC_6(VAR_3, 0x46, 0x2e);
 FUNC_6(VAR_3, 0x47, 0x25);
 FUNC_6(VAR_3, 0x48, 0x1c);
 FUNC_6(VAR_3, 0x49, 0x12);
 FUNC_6(VAR_3, 0x4a, 0x09);
 FUNC_6(VAR_3, 0x4b, 0x04);
 FUNC_6(VAR_3, 0x4c, 0x05);

 FUNC_3(VAR_4, (u8 *)0xFF5B, 0x0D); FUNC_1(1);

 FUNC_8(VAR_3, 1);


 FUNC_6(VAR_3, 0x10, 0x9b);
 FUNC_7(VAR_3, 0x26, 0x90);

 FUNC_3(VAR_4, &VAR_4->map->TX_ANTENNA, 0x03);
 FUNC_1(1);
 FUNC_2(VAR_4, (__le32 *)0xFF94, 0x3dc00002);
}
