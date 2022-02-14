
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nouveau_device {scalar_t__ card_type; } ;
struct nouveau_bios {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct nouveau_device* FUNC_0 (struct nouveau_bios*) ;
 int FUNC_1 (struct nouveau_bios*,int,char*,int) ;
 int FUNC_2 (struct nouveau_bios*,int) ;
 int FUNC_3 (struct nouveau_bios*,int) ;
 int FUNC_4 (struct nouveau_bios*,int) ;
 int FUNC_5 (struct nouveau_bios*,char*,...) ;

u16
FUNC_6(struct nouveau_bios *VAR_1, u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5)
{
 struct nouveau_device *VAR_6 = FUNC_0(VAR_1);
 u16 VAR_7 = 0x0000;

 if (VAR_6->card_type > VAR_0)
  VAR_7 = FUNC_3(VAR_1, 0x36);
 if (!VAR_7) {
  FUNC_5(VAR_1, "DCB table not found\n");
  return VAR_7;
 }

 *VAR_2 = FUNC_2(VAR_1, VAR_7);

 if (*VAR_2 >= 0x41) {
  FUNC_5(VAR_1, "DCB version 0x%02x unknown\n", *VAR_2);
  return 0x0000;
 } else
 if (*VAR_2 >= 0x30) {
  if (FUNC_4(VAR_1, VAR_7 + 6) == 0x4edcbdcb) {
   *VAR_3 = FUNC_2(VAR_1, VAR_7 + 1);
   *VAR_4 = FUNC_2(VAR_1, VAR_7 + 2);
   *VAR_5 = FUNC_2(VAR_1, VAR_7 + 3);
   return VAR_7;
  }
 } else
 if (*VAR_2 >= 0x20) {
  if (FUNC_4(VAR_1, VAR_7 + 4) == 0x4edcbdcb) {
   u16 VAR_8 = FUNC_3(VAR_1, VAR_7 + 2);
   *VAR_3 = 8;
   *VAR_4 = (VAR_8 - VAR_7) / 8;
   *VAR_5 = 8;
   return VAR_7;
  }
 } else
 if (*VAR_2 >= 0x15) {
  if (!FUNC_1(VAR_1, VAR_7 - 7, "DEV_REC", 7)) {
   u16 VAR_9 = FUNC_3(VAR_1, VAR_7 + 2);
   *VAR_3 = 4;
   *VAR_4 = (VAR_9 - VAR_7) / 10;
   *VAR_5 = 10;
   return VAR_7;
  }
 } else {
  FUNC_5(VAR_1, "DCB contains no useful data\n");
  return 0x0000;
 }

 FUNC_5(VAR_1, "DCB header validation failed\n");
 return 0x0000;
}
