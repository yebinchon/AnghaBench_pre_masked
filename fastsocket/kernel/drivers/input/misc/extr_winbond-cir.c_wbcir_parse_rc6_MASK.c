
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wbcir_data {scalar_t__ irdata_error; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct wbcir_data*,int) ;
 int FUNC_2 (struct wbcir_data*,int,int) ;
 int FUNC_3 (struct wbcir_data*) ;

__attribute__((used)) static void
FUNC_4(struct device *VAR_0, struct wbcir_data *VAR_1)
{
 u8 VAR_2;
 u8 VAR_3;
 u16 VAR_4 = 0x0;
 u8 VAR_5;
 u8 VAR_6;
 u32 VAR_7;


 while (FUNC_1(VAR_1, 1) && !VAR_1->irdata_error)
                  ;


 if (FUNC_1(VAR_1, 1)) {
  FUNC_0(VAR_0, "RC6 - Invalid leader space\n");
  return;
 }


 if (FUNC_1(VAR_1, 2) != 0x02) {
  FUNC_0(VAR_0, "RC6 - Invalid start bit\n");
  return;
 }


 VAR_2 = FUNC_1(VAR_1, 6);
 switch (VAR_2) {
 case 0x15:
  VAR_2 = 0;
  break;
 case 0x29:
  VAR_2 = 6;
  break;
 default:
  FUNC_0(VAR_0, "RC6 - Invalid mode\n");
  return;
 }


 VAR_3 = FUNC_1(VAR_1, 4);
 switch (VAR_3) {
 case 0x03:
  VAR_3 = 0;
  break;
 case 0x0C:
  VAR_3 = 1;
  break;
 default:
  FUNC_0(VAR_0, "RC6 - Toggle bit error\n");
  break;
 }


 if (VAR_2 == 6) {
  if (VAR_3 != 0) {
   FUNC_0(VAR_0, "RC6B - Not Supported\n");
   return;
  }

  VAR_4 = FUNC_3(VAR_1);

  if (VAR_4 & 0x80) {

   VAR_4 <<= 8;
   VAR_4 |= FUNC_3(VAR_1);
  }
 }


 VAR_5 = FUNC_3(VAR_1);
 if (VAR_2 == 6) {
  VAR_3 = VAR_5 >> 7;
  VAR_5 &= 0x7F;
 }


 VAR_6 = FUNC_3(VAR_1);


 VAR_7 = VAR_6;
 VAR_7 |= VAR_5 << 8;
 VAR_7 |= VAR_4 << 16;


 if (VAR_1->irdata_error) {
  FUNC_0(VAR_0, "RC6 - Cell error(s)\n");
  return;
 }

 FUNC_0(VAR_0, "IR-RC6 ad 0x%02X cm 0x%02X cu 0x%04X "
  "toggle %u mode %u scan 0x%08X\n",
  VAR_5,
  VAR_6,
  VAR_4,
  (unsigned int)VAR_3,
  (unsigned int)VAR_2,
  VAR_7);

 FUNC_2(VAR_1, VAR_7, VAR_3);
}
