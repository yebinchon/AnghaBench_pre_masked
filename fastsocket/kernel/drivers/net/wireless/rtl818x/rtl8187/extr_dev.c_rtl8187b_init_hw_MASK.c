
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl8187_priv {int slot_time; int* aifsn; TYPE_2__* map; TYPE_1__* rf; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;
typedef int __le32 ;
typedef int __le16 ;
struct TYPE_4__ {int CW_CONF; int EEPROM_CMD; int CONFIG1; int WPA_CONF; int CMD; int ACM_CONTROL; int MSR; int HSSI_PARA; int INT_MASK; int RFPinsEnable; int RFPinsSelect; int RFPinsOutput; int RF_TIMING; int INT_MIG; int TID_AC_MAP; } ;
struct TYPE_3__ {int (* init ) (struct ieee80211_hw*) ;} ;


 int FUNC_0 (int**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl8187_priv*,int) ;
 int** VAR_6 ;
 int FUNC_4 (struct rtl8187_priv*,int*) ;
 int FUNC_5 (struct rtl8187_priv*,int *,int) ;
 int FUNC_6 (struct rtl8187_priv*,int *,int,int) ;
 int FUNC_7 (struct rtl8187_priv*,int *,int) ;
 int FUNC_8 (struct rtl8187_priv*,int *,int ,int) ;
 int FUNC_9 (struct rtl8187_priv*,int*,int) ;
 int FUNC_10 (struct rtl8187_priv*,int*,int,int) ;
 int FUNC_11 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_12(struct ieee80211_hw *VAR_7)
{
 struct rtl8187_priv *VAR_8 = VAR_7->priv;
 int VAR_9, VAR_10;
 u8 VAR_11;

 FUNC_3(VAR_8, 1);



 FUNC_9(VAR_8, (u8 *)0xFF61, 0x10);
 VAR_11 = FUNC_4(VAR_8, (u8 *)0xFF62);
 FUNC_9(VAR_8, (u8 *)0xFF62, VAR_11 & ~(1 << 5));
 FUNC_9(VAR_8, (u8 *)0xFF62, VAR_11 | (1 << 5));

 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_3(VAR_8, 1);




 FUNC_5(VAR_8, (__le16 *)0xFF34, 0x0FFF);

 VAR_11 = FUNC_4(VAR_8, &VAR_8->map->CW_CONF);
 VAR_11 |= VAR_2;
 FUNC_9(VAR_8, &VAR_8->map->CW_CONF, VAR_11);


 FUNC_6(VAR_8, (__le16 *)0xFFE0, 0x0FFF, 1);
 FUNC_10(VAR_8, (u8 *)0xFFE2, 0x00, 1);

 FUNC_6(VAR_8, (__le16 *)0xFFD4, 0xFFFF, 1);

 FUNC_9(VAR_8, &VAR_8->map->EEPROM_CMD,
    VAR_3);
 VAR_11 = FUNC_4(VAR_8, &VAR_8->map->CONFIG1);
 FUNC_9(VAR_8, &VAR_8->map->CONFIG1, (VAR_11 & 0x3F) | 0x80);
 FUNC_9(VAR_8, &VAR_8->map->EEPROM_CMD,
    VAR_4);

 FUNC_9(VAR_8, &VAR_8->map->WPA_CONF, 0);
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_6); VAR_10++) {
  FUNC_10(VAR_8,
         (u8 *)(uintptr_t)
         (VAR_6[VAR_10][0] | 0xFF00),
         VAR_6[VAR_10][1],
         VAR_6[VAR_10][2]);
 }

 FUNC_5(VAR_8, &VAR_8->map->TID_AC_MAP, 0xFA50);
 FUNC_5(VAR_8, &VAR_8->map->INT_MIG, 0);

 FUNC_8(VAR_8, (__le32 *)0xFFF0, 0, 1);
 FUNC_8(VAR_8, (__le32 *)0xFFF4, 0, 1);
 FUNC_10(VAR_8, (u8 *)0xFFF8, 0, 1);

 FUNC_7(VAR_8, &VAR_8->map->RF_TIMING, 0x00004001);


 FUNC_6(VAR_8, (__le16 *)0xFF72, 0x569A, 2);

 FUNC_5(VAR_8, &VAR_8->map->RFPinsOutput, 0x0480);
 FUNC_5(VAR_8, &VAR_8->map->RFPinsSelect, 0x2488);
 FUNC_5(VAR_8, &VAR_8->map->RFPinsEnable, 0x1FFF);
 FUNC_1(100);

 VAR_8->rf->init(VAR_7);

 VAR_11 = VAR_1 | VAR_0;
 FUNC_9(VAR_8, &VAR_8->map->CMD, VAR_11);
 FUNC_5(VAR_8, &VAR_8->map->INT_MASK, 0xFFFF);

 FUNC_9(VAR_8, (u8 *)0xFE41, 0xF4);
 FUNC_9(VAR_8, (u8 *)0xFE40, 0x00);
 FUNC_9(VAR_8, (u8 *)0xFE42, 0x00);
 FUNC_9(VAR_8, (u8 *)0xFE42, 0x01);
 FUNC_9(VAR_8, (u8 *)0xFE40, 0x0F);
 FUNC_9(VAR_8, (u8 *)0xFE42, 0x00);
 FUNC_9(VAR_8, (u8 *)0xFE42, 0x01);

 VAR_11 = FUNC_4(VAR_8, (u8 *)0xFFDB);
 FUNC_9(VAR_8, (u8 *)0xFFDB, VAR_11 | (1 << 2));
 FUNC_6(VAR_8, (__le16 *)0xFF72, 0x59FA, 3);
 FUNC_6(VAR_8, (__le16 *)0xFF74, 0x59D2, 3);
 FUNC_6(VAR_8, (__le16 *)0xFF76, 0x59D2, 3);
 FUNC_6(VAR_8, (__le16 *)0xFF78, 0x19FA, 3);
 FUNC_6(VAR_8, (__le16 *)0xFF7A, 0x19FA, 3);
 FUNC_6(VAR_8, (__le16 *)0xFF7C, 0x00D0, 3);
 FUNC_9(VAR_8, (u8 *)0xFF61, 0);
 FUNC_10(VAR_8, (u8 *)0xFF80, 0x0F, 1);
 FUNC_10(VAR_8, (u8 *)0xFF83, 0x03, 1);
 FUNC_9(VAR_8, (u8 *)0xFFDA, 0x10);
 FUNC_10(VAR_8, (u8 *)0xFF4D, 0x08, 2);

 FUNC_7(VAR_8, &VAR_8->map->HSSI_PARA, 0x0600321B);

 FUNC_6(VAR_8, (__le16 *)0xFFEC, 0x0800, 1);

 VAR_8->slot_time = 0x9;
 VAR_8->aifsn[0] = 2;
 VAR_8->aifsn[1] = 2;
 VAR_8->aifsn[2] = 7;
 VAR_8->aifsn[3] = 3;
 FUNC_9(VAR_8, &VAR_8->map->ACM_CONTROL, 0);


 FUNC_9(VAR_8, &VAR_8->map->MSR, VAR_5);

 return 0;
}
