
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
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 int FUNC_5 (char*,...) ;

void FUNC_6(UWORD VAR_13, UBYTE VAR_14)
{
 FUNC_0(FUNC_5("BB Write addr:%4x byte:%2x, cpu:%4x\n", VAR_13, VAR_14, VAR_1[(VAR_2-1)%VAR_0]));
 if (VAR_13 == 0xd170) {
  if (VAR_12) FUNC_3(!(VAR_14&0x04));
 }
 else if (VAR_13 == 0xd171) {
  if (VAR_12) {
   FUNC_2(VAR_14);
   if (((VAR_5 & 0x0e)>>1) == 0x04) {

    FUNC_1(1);
    FUNC_1(0);
   }
  }
 }
 else if (VAR_13 == 0xd17c) {
  VAR_5 = VAR_14;
  if (((VAR_5 & 0x0e)>>1) == 0x06) {

   if (VAR_12) FUNC_1(1);
  }
  else if (((VAR_5 & 0x0e)>>1) == 0x07) {

   if (VAR_12) FUNC_1(0);
  }
 }
 else if (VAR_13 == 0xd1bc) {


  FUNC_4(VAR_6+VAR_7,VAR_3 + 0xd600,0x100);
  VAR_7 = (VAR_14 << 8);
  FUNC_4(VAR_3 + 0xd600, VAR_6+VAR_7, 0x100);
 }
 else if (VAR_13 == 0xd1be) {

  if (VAR_10 != ((VAR_14 & 0x04) << 2) && VAR_11 == 0x10000) {

   VAR_10 = ((VAR_14 & 0x04) << 2);
   if (VAR_9 > 0 && VAR_9 < 8) {
     FUNC_4(VAR_3 + 0xd800, VAR_8 + (VAR_9 + VAR_10)*0x800, 0x800);
     FUNC_0(FUNC_5("black box bank:%2x activated\n", VAR_9+VAR_10));
   }
  }
 }
 else if ((VAR_13 & 0xffc0) == 0xd1c0) {

  if (VAR_9 != VAR_14) {

   int VAR_15 = -1;
   if (VAR_11 == 0x4000) {
    if (VAR_14 >= 8 && VAR_14 <= 0x0f) VAR_15 = (VAR_14 - 8)*0x800;
    else if (VAR_14 > 0 && VAR_14 < 0x08) VAR_15 = VAR_14*0x800;
   }
   else {
    if (VAR_14 > 0 && VAR_14 < 0x10) VAR_15 = (VAR_14 + VAR_10)*0x800;
   }

   if (VAR_15 != -1) {
     FUNC_4(VAR_3 + 0xd800, VAR_8 + VAR_15, 0x800);
     FUNC_0(FUNC_5("black box bank:%2x activated\n", VAR_14 + VAR_10));
   }
   else {
     FUNC_4(VAR_3 + 0xd800, VAR_4 + 0x1800, 0x800);
     if (VAR_14 != 0) FUNC_0(FUNC_5("d1ff ERROR: byte=%2x\n", VAR_14));
     FUNC_0(FUNC_5("Floating point rom activated\n"));
   }
   VAR_9 = VAR_14;
  }
 }
}
