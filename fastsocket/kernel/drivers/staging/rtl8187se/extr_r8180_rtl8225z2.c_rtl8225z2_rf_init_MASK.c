
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct r8180_priv {short chan; scalar_t__ card_type; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct net_device*) ;
 struct r8180_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,int) ;
 int* VAR_7 ;
 int* VAR_8 ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*,short) ;
 int FUNC_11 (struct net_device*,short) ;
 int* VAR_9 ;
 int FUNC_12 (struct net_device*,int) ;
 int FUNC_13 (struct net_device*,int,int) ;
 int FUNC_14 (struct net_device*,int,int) ;
 int FUNC_15 (struct net_device*,int ,int) ;
 int FUNC_16 (struct net_device*,int,int) ;
 int FUNC_17 (struct net_device*,int,int) ;
 int FUNC_18 (struct net_device*,int,int) ;

void FUNC_19(struct net_device *VAR_10)
{
 struct r8180_priv *VAR_11 = FUNC_2(VAR_10);
 int VAR_12;
 short VAR_13 = 1;
 u16 VAR_14;
 u32 VAR_15,VAR_16;

 VAR_11->chan = VAR_13;

 if (VAR_11->card_type != VAR_6)
  FUNC_9(VAR_10);

 FUNC_14(VAR_10, VAR_5, 0x000a8008);

 VAR_14 = FUNC_4(VAR_10, VAR_0);

 FUNC_15(VAR_10, VAR_0, 0xffff);

 FUNC_14(VAR_10, VAR_4, 0x100044);

 FUNC_6(VAR_10, VAR_2);
 FUNC_13(VAR_10, VAR_1, 0x44);
 FUNC_6(VAR_10, VAR_3);

 FUNC_7(VAR_10);

 FUNC_18(VAR_10, 0x0, 0x2bf); FUNC_3(1);
 FUNC_18(VAR_10, 0x1, 0xee0); FUNC_3(1);
 FUNC_18(VAR_10, 0x2, 0x44d); FUNC_3(1);
 FUNC_18(VAR_10, 0x3, 0x441); FUNC_3(1);
 FUNC_18(VAR_10, 0x4, 0x8c3); FUNC_3(1);
 FUNC_18(VAR_10, 0x5, 0xc72); FUNC_3(1);
 FUNC_18(VAR_10, 0x6, 0xe6); FUNC_3(1);
 FUNC_18(VAR_10, 0x7, ((VAR_11->card_type == VAR_6)? 0x82a : VAR_8[VAR_13])); FUNC_3(1);
 FUNC_18(VAR_10, 0x8, 0x3f); FUNC_3(1);
 FUNC_18(VAR_10, 0x9, 0x335); FUNC_3(1);
 FUNC_18(VAR_10, 0xa, 0x9d4); FUNC_3(1);
 FUNC_18(VAR_10, 0xb, 0x7bb); FUNC_3(1);
 FUNC_18(VAR_10, 0xc, 0x850); FUNC_3(1);
 FUNC_18(VAR_10, 0xd, 0xcdf); FUNC_3(1);
 FUNC_18(VAR_10, 0xe, 0x2b); FUNC_3(1);
 FUNC_18(VAR_10, 0xf, 0x114);

 FUNC_3(100);

 FUNC_18(VAR_10, 0x0, 0x1b7);

 for (VAR_12 = 0; VAR_12 < 95; VAR_12++) {
  FUNC_18(VAR_10, 0x1, (u8)(VAR_12 + 1));
  FUNC_18(VAR_10, 0x2, VAR_9[VAR_12]);
 }

 FUNC_18(VAR_10, 0x3, 0x80);
 FUNC_18(VAR_10, 0x5, 0x4);

 FUNC_18(VAR_10, 0x0, 0xb7);

 FUNC_18(VAR_10, 0x2, 0xc4d);

 if (VAR_11->card_type == VAR_6) {
  FUNC_3(200);

  FUNC_18(VAR_10, 0x2, 0x44d);
  FUNC_3(100);
 }





 VAR_15 = FUNC_5(VAR_10, 6);
 if (!(VAR_15 & 0x00000080)) {
  FUNC_18(VAR_10, 0x02, 0x0c4d);
  FUNC_1(VAR_10); FUNC_3(200);
  FUNC_18(VAR_10, 0x02, 0x044d);
  FUNC_1(VAR_10); FUNC_3(100);
  VAR_15 = FUNC_5(VAR_10, 6);
  if (!(VAR_15 & 0x00000080))
   FUNC_0("RF Calibration Failed!!!!\n");
 }

 FUNC_3(200);

 FUNC_18(VAR_10, 0x0, 0x2bf);

 if (VAR_11->card_type != VAR_6)
  FUNC_7(VAR_10);

 for (VAR_12 = 0; VAR_12 < 128; VAR_12++) {
  VAR_15 = VAR_7[VAR_12];

  VAR_16 = VAR_12 + 0x80;
  FUNC_17(VAR_10, 0xb, VAR_15);
  FUNC_3(1);

  FUNC_17(VAR_10, 0xa, VAR_16);
  FUNC_3(1);
 }

 FUNC_1(VAR_10);
 FUNC_3(1);

 FUNC_17(VAR_10, 0x00, 0x01); FUNC_3(1);
 FUNC_17(VAR_10, 0x01, 0x02); FUNC_3(1);
 FUNC_17(VAR_10, 0x02, ((VAR_11->card_type == VAR_6) ? 0x42 : 0x62)); FUNC_3(1);
 FUNC_17(VAR_10, 0x03, 0x00); FUNC_3(1);
 FUNC_17(VAR_10, 0x04, 0x00); FUNC_3(1);
 FUNC_17(VAR_10, 0x05, 0x00); FUNC_3(1);
 FUNC_17(VAR_10, 0x06, 0x40); FUNC_3(1);
 FUNC_17(VAR_10, 0x07, 0x00); FUNC_3(1);
 FUNC_17(VAR_10, 0x08, 0x40); FUNC_3(1);
 FUNC_17(VAR_10, 0x09, 0xfe); FUNC_3(1);
 FUNC_17(VAR_10, 0x0a, 0x08); FUNC_3(1);
 FUNC_17(VAR_10, 0x0b, 0x80); FUNC_3(1);
 FUNC_17(VAR_10, 0x0c, 0x01); FUNC_3(1);
 FUNC_17(VAR_10, 0x0d, 0x43);
 FUNC_17(VAR_10, 0x0e, 0xd3); FUNC_3(1);
 FUNC_17(VAR_10, 0x0f, 0x38); FUNC_3(1);
 FUNC_17(VAR_10, 0x10, 0x84); FUNC_3(1);
 FUNC_17(VAR_10, 0x11, 0x07); FUNC_3(1);
 FUNC_17(VAR_10, 0x12, 0x20); FUNC_3(1);
 FUNC_17(VAR_10, 0x13, 0x20); FUNC_3(1);
 FUNC_17(VAR_10, 0x14, 0x00); FUNC_3(1);
 FUNC_17(VAR_10, 0x15, 0x40); FUNC_3(1);
 FUNC_17(VAR_10, 0x16, 0x00); FUNC_3(1);
 FUNC_17(VAR_10, 0x17, 0x40); FUNC_3(1);
 FUNC_17(VAR_10, 0x18, 0xef); FUNC_3(1);
 FUNC_17(VAR_10, 0x19, 0x19); FUNC_3(1);
 FUNC_17(VAR_10, 0x1a, 0x20); FUNC_3(1);
 FUNC_17(VAR_10, 0x1b, 0x15); FUNC_3(1);
 FUNC_17(VAR_10, 0x1c, 0x04); FUNC_3(1);
 FUNC_17(VAR_10, 0x1d, 0xc5); FUNC_3(1);
 FUNC_17(VAR_10, 0x1e, 0x95); FUNC_3(1);
 FUNC_17(VAR_10, 0x1f, 0x75); FUNC_3(1);
 FUNC_17(VAR_10, 0x20, 0x1f); FUNC_3(1);
 FUNC_17(VAR_10, 0x21, 0x17); FUNC_3(1);
 FUNC_17(VAR_10, 0x22, 0x16); FUNC_3(1);
 FUNC_17(VAR_10, 0x23, 0x80); FUNC_3(1);
 FUNC_17(VAR_10, 0x24, 0x46); FUNC_3(1);
 FUNC_17(VAR_10, 0x25, 0x00); FUNC_3(1);
 FUNC_17(VAR_10, 0x26, 0x90); FUNC_3(1);
 FUNC_17(VAR_10, 0x27, 0x88); FUNC_3(1);

 FUNC_12(VAR_10,4);

 FUNC_16(VAR_10, 0x0, 0x98); FUNC_3(1);
 FUNC_16(VAR_10, 0x3, 0x20); FUNC_3(1);
 FUNC_16(VAR_10, 0x4, 0x7e); FUNC_3(1);
 FUNC_16(VAR_10, 0x5, 0x12); FUNC_3(1);
 FUNC_16(VAR_10, 0x6, 0xfc); FUNC_3(1);
 FUNC_16(VAR_10, 0x7, 0x78); FUNC_3(1);
 FUNC_16(VAR_10, 0x8, 0x2e); FUNC_3(1);
 FUNC_16(VAR_10, 0x10, ((VAR_11->card_type == VAR_6) ? 0x9b: 0x93)); FUNC_3(1);
 FUNC_16(VAR_10, 0x11, 0x88); FUNC_3(1);
 FUNC_16(VAR_10, 0x12, 0x47); FUNC_3(1);
 FUNC_16(VAR_10, 0x13, 0xd0);
 FUNC_16(VAR_10, 0x19, 0x00);
 FUNC_16(VAR_10, 0x1a, 0xa0);
 FUNC_16(VAR_10, 0x1b, 0x08);
 FUNC_16(VAR_10, 0x40, 0x86);
 FUNC_16(VAR_10, 0x41, 0x8d); FUNC_3(1);
 FUNC_16(VAR_10, 0x42, 0x15); FUNC_3(1);
 FUNC_16(VAR_10, 0x43, 0x18); FUNC_3(1);
 FUNC_16(VAR_10, 0x44, 0x36); FUNC_3(1);
 FUNC_16(VAR_10, 0x45, 0x35); FUNC_3(1);
 FUNC_16(VAR_10, 0x46, 0x2e); FUNC_3(1);
 FUNC_16(VAR_10, 0x47, 0x25); FUNC_3(1);
 FUNC_16(VAR_10, 0x48, 0x1c); FUNC_3(1);
 FUNC_16(VAR_10, 0x49, 0x12); FUNC_3(1);
 FUNC_16(VAR_10, 0x4a, 0x09); FUNC_3(1);
 FUNC_16(VAR_10, 0x4b, 0x04); FUNC_3(1);
 FUNC_16(VAR_10, 0x4c, 0x05); FUNC_3(1);

 FUNC_13(VAR_10, 0x5b, 0x0d); FUNC_3(1);

 FUNC_11(VAR_10, VAR_13);


 FUNC_16(VAR_10, 0x11, 0x9b); FUNC_3(1);
 FUNC_17(VAR_10, 0x26, 0x90); FUNC_3(1);

 FUNC_8(VAR_10, 0x03);




 if (VAR_11->card_type == VAR_6)
  FUNC_14(VAR_10, 0x94, 0x3dc00002);
 else {
  FUNC_14(VAR_10, 0x94, 0x15c00002);
  FUNC_7(VAR_10);
 }

 FUNC_10(VAR_10, VAR_11->chan);
}
