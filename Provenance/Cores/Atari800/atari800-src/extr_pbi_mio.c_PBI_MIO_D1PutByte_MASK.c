
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 int FUNC_5 (scalar_t__,int,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (char*,...) ;

void FUNC_7(UWORD VAR_11, UBYTE VAR_12)
{
 int VAR_13 = VAR_6;
 int VAR_14 = VAR_7;
 int VAR_15;
 int VAR_16;
 VAR_11 &= 0xffe3;
 if (VAR_11 == 0xd1e0) {

  VAR_6 &= 0xf0000;
  VAR_6 |= (VAR_12 << 8);
 }
 else if (VAR_11 == 0xd1e1) {
  if (VAR_10) {
   FUNC_2(VAR_12^0xff);
   FUNC_1(1);
   FUNC_1(0);
  }
 }
 else if (VAR_11 == 0xd1e2) {

  VAR_6 &= 0x0ffff;
  VAR_6 |= ( (VAR_12 & 0x0f) << 16);
  VAR_7 = (VAR_12 & 0x20);
  if (VAR_10) FUNC_3(!!(VAR_12 & 0x10));
 }
 else if (VAR_11 == 0xd1e3) {

  if (VAR_9 != VAR_12){
   int VAR_17 = -1;
   if (VAR_12 == 4) VAR_17 = 0x2000;
   else if (VAR_12 == 8) VAR_17 = 0x2800;
   else if (VAR_12 == 0x10) VAR_17 = 0x3000;
   else if (VAR_12 == 0x20) VAR_17 = 0x3800;
   if (VAR_17 != -1) {
    FUNC_4(VAR_3 + 0xd800, VAR_8+VAR_17, 0x800);
    FUNC_0(FUNC_6("mio bank:%2x activated\n", VAR_12));
   }else{
    FUNC_4(VAR_3 + 0xd800, VAR_4 + 0x1800, 0x800);
    FUNC_0(FUNC_6("Floating point rom activated\n"));

   }
   VAR_9 = VAR_12;
  }

 }
 VAR_15 = (VAR_13 != VAR_6);
 VAR_16 = (VAR_14 != VAR_7);
 if (VAR_7 && VAR_16) {

  FUNC_4(VAR_3 + 0xd600, VAR_5 + VAR_6, 0x100);
 } else if (VAR_7 && VAR_15) {

  FUNC_4(VAR_5 + VAR_13,VAR_3 + 0xd600, 0x100);
  FUNC_4(VAR_3 + 0xd600, VAR_5 + VAR_6, 0x100);
 } else if (!VAR_7 && VAR_16) {

  FUNC_4(VAR_5 + VAR_13, VAR_3 + 0xd600, 0x100);
  FUNC_5(VAR_3 + 0xd600, 0xff, 0x100);
 }
 FUNC_0(FUNC_6("MIO Write addr:%4x byte:%2x, cpu:%4x\n", VAR_11, VAR_12,VAR_1[(VAR_2-1)%VAR_0]));
}
