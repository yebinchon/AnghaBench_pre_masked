
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32 ;
typedef int int32 ;
struct TYPE_13__ {int* CustInst; int* LowFreq; int* HiFreq; int* InstVol; int * patch_number; } ;
typedef TYPE_1__ OPLL ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,int,int) ;
 int FUNC_11 (TYPE_1__*,int,int) ;
 int FUNC_12 (TYPE_1__*,int,int) ;
 int FUNC_13 (TYPE_1__*,int,int) ;
 int FUNC_14 (TYPE_1__*,int,int) ;
 int FUNC_15 (TYPE_1__*) ;

void FUNC_16(OPLL * VAR_0, uint32 VAR_1, uint32 VAR_2) {
 int32 VAR_3, VAR_4, VAR_5;

 VAR_2 = VAR_2 & 0xff;
 VAR_1 = VAR_1 & 0x3f;

 switch (VAR_1) {
 case 0x00:
  VAR_0->CustInst[0] = VAR_2;
  for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
   if (VAR_0->patch_number[VAR_3] == 0) {
    FUNC_12(VAR_0, VAR_3, 0);
    FUNC_4(FUNC_1(VAR_0, VAR_3));
    FUNC_5(FUNC_1(VAR_0, VAR_3));
    FUNC_3(FUNC_1(VAR_0, VAR_3));
   }
  }
  break;

 case 0x01:
  VAR_0->CustInst[1] = VAR_2;
  for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
   if (VAR_0->patch_number[VAR_3] == 0) {
    FUNC_12(VAR_0, VAR_3, 0);
    FUNC_4(FUNC_0(VAR_0, VAR_3));
    FUNC_5(FUNC_0(VAR_0, VAR_3));
    FUNC_3(FUNC_0(VAR_0, VAR_3));
   }
  }
  break;

 case 0x02:
  VAR_0->CustInst[2] = VAR_2;
  for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
   if (VAR_0->patch_number[VAR_3] == 0) {
    FUNC_12(VAR_0, VAR_3, 0);
    FUNC_6(FUNC_1(VAR_0, VAR_3));
   }
  }
  break;

 case 0x03:
  VAR_0->CustInst[3] = VAR_2;
  for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
   if (VAR_0->patch_number[VAR_3] == 0) {
    FUNC_12(VAR_0, VAR_3, 0);
    FUNC_7(FUNC_1(VAR_0, VAR_3));
    FUNC_7(FUNC_0(VAR_0, VAR_3));
   }
  }
  break;

 case 0x04:
  VAR_0->CustInst[4] = VAR_2;
  for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
   if (VAR_0->patch_number[VAR_3] == 0) {
    FUNC_12(VAR_0, VAR_3, 0);
    FUNC_3(FUNC_1(VAR_0, VAR_3));
   }
  }
  break;

 case 0x05:
  VAR_0->CustInst[5] = VAR_2;
  for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
   if (VAR_0->patch_number[VAR_3] == 0) {
    FUNC_12(VAR_0, VAR_3, 0);
    FUNC_3(FUNC_0(VAR_0, VAR_3));
   }
  }
  break;

 case 0x06:
  VAR_0->CustInst[6] = VAR_2;
  for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
   if (VAR_0->patch_number[VAR_3] == 0) {
    FUNC_12(VAR_0, VAR_3, 0);
    FUNC_3(FUNC_1(VAR_0, VAR_3));
   }
  }
  break;

 case 0x07:
  VAR_0->CustInst[7] = VAR_2;
  for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
   if (VAR_0->patch_number[VAR_3] == 0) {
    FUNC_12(VAR_0, VAR_3, 0);
    FUNC_3(FUNC_0(VAR_0, VAR_3));
   }
  }
  break;

 case 0x10:
 case 0x11:
 case 0x12:
 case 0x13:
 case 0x14:
 case 0x15:
  VAR_5 = VAR_1 - 0x10;
  VAR_0->LowFreq[VAR_5] = VAR_2;
  FUNC_11(VAR_0, VAR_5, VAR_2 + ((VAR_0->HiFreq[VAR_5] & 1) << 8));
  FUNC_2(FUNC_1(VAR_0, VAR_5));
  FUNC_2(FUNC_0(VAR_0, VAR_5));
  break;

 case 0x20:
 case 0x21:
 case 0x22:
 case 0x23:
 case 0x24:
 case 0x25:
  VAR_5 = VAR_1 - 0x20;
  VAR_0->HiFreq[VAR_5] = VAR_2;

  FUNC_11(VAR_0, VAR_5, ((VAR_2 & 1) << 8) + VAR_0->LowFreq[VAR_5]);
  FUNC_10(VAR_0, VAR_5, (VAR_2 >> 1) & 7);
  FUNC_13(VAR_0, VAR_5, (VAR_2 >> 5) & 1);
  if (VAR_2 & 0x10)
   FUNC_9(VAR_0, VAR_5);
  else
   FUNC_8(VAR_0, VAR_5);
  FUNC_2(FUNC_1(VAR_0, VAR_5));
  FUNC_2(FUNC_0(VAR_0, VAR_5));
  FUNC_15(VAR_0);
  break;

 case 0x30:
 case 0x31:
 case 0x32:
 case 0x33:
 case 0x34:
 case 0x35:
  VAR_0->InstVol[VAR_1 - 0x30] = VAR_2;
  VAR_3 = (VAR_2 >> 4) & 15;
  VAR_4 = VAR_2 & 15;
  FUNC_12(VAR_0, VAR_1 - 0x30, VAR_3);
  FUNC_14(VAR_0, VAR_1 - 0x30, VAR_4 << 2);
  FUNC_2(FUNC_1(VAR_0, VAR_1 - 0x30));
  FUNC_2(FUNC_0(VAR_0, VAR_1 - 0x30));
  break;

 default:
  break;
 }
}
