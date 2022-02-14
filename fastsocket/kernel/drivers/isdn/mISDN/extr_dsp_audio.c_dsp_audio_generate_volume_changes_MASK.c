
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;


 void** VAR_0 ;
 void** VAR_1 ;
 void** VAR_2 ;
 void** VAR_3 ;
 void** VAR_4 ;
 void** VAR_5 ;
 void** VAR_6 ;
 void** VAR_7 ;
 int* VAR_8 ;
 void** VAR_9 ;
 void** VAR_10 ;
 void** VAR_11 ;
 void** VAR_12 ;
 void** VAR_13 ;
 void** VAR_14 ;
 void** VAR_15 ;
 void** VAR_16 ;
 void** VAR_17 ;

void
FUNC_0(void)
{
 register s32 VAR_18;
 int VAR_19;
 int VAR_20[] = { 110, 125, 150, 175, 200, 300, 400, 500 };
 int VAR_21[] = { 100, 100, 100, 100, 100, 100, 100, 100 };

 VAR_19 = 0;
 while (VAR_19 < 256) {
  VAR_16[VAR_19] = VAR_17[
   (VAR_8[VAR_19] * VAR_21[7] / VAR_20[7]) & 0xffff];
  VAR_15[VAR_19] = VAR_17[
   (VAR_8[VAR_19] * VAR_21[6] / VAR_20[6]) & 0xffff];
  VAR_14[VAR_19] = VAR_17[
   (VAR_8[VAR_19] * VAR_21[5] / VAR_20[5]) & 0xffff];
  VAR_13[VAR_19] = VAR_17[
   (VAR_8[VAR_19] * VAR_21[4] / VAR_20[4]) & 0xffff];
  VAR_12[VAR_19] = VAR_17[
   (VAR_8[VAR_19] * VAR_21[3] / VAR_20[3]) & 0xffff];
  VAR_11[VAR_19] = VAR_17[
   (VAR_8[VAR_19] * VAR_21[2] / VAR_20[2]) & 0xffff];
  VAR_10[VAR_19] = VAR_17[
   (VAR_8[VAR_19] * VAR_21[1] / VAR_20[1]) & 0xffff];
  VAR_9[VAR_19] = VAR_17[
   (VAR_8[VAR_19] * VAR_21[0] / VAR_20[0]) & 0xffff];
  VAR_18 = VAR_8[VAR_19] * VAR_20[0] / VAR_21[0];
  if (VAR_18 < -32768)
   VAR_18 = -32768;
  else if (VAR_18 > 32767)
   VAR_18 = 32767;
  VAR_0[VAR_19] = VAR_17[VAR_18 & 0xffff];
  VAR_18 = VAR_8[VAR_19] * VAR_20[1] / VAR_21[1];
  if (VAR_18 < -32768)
   VAR_18 = -32768;
  else if (VAR_18 > 32767)
   VAR_18 = 32767;
  VAR_1[VAR_19] = VAR_17[VAR_18 & 0xffff];
  VAR_18 = VAR_8[VAR_19] * VAR_20[2] / VAR_21[2];
  if (VAR_18 < -32768)
   VAR_18 = -32768;
  else if (VAR_18 > 32767)
   VAR_18 = 32767;
  VAR_2[VAR_19] = VAR_17[VAR_18 & 0xffff];
  VAR_18 = VAR_8[VAR_19] * VAR_20[3] / VAR_21[3];
  if (VAR_18 < -32768)
   VAR_18 = -32768;
  else if (VAR_18 > 32767)
   VAR_18 = 32767;
  VAR_3[VAR_19] = VAR_17[VAR_18 & 0xffff];
  VAR_18 = VAR_8[VAR_19] * VAR_20[4] / VAR_21[4];
  if (VAR_18 < -32768)
   VAR_18 = -32768;
  else if (VAR_18 > 32767)
   VAR_18 = 32767;
  VAR_4[VAR_19] = VAR_17[VAR_18 & 0xffff];
  VAR_18 = VAR_8[VAR_19] * VAR_20[5] / VAR_21[5];
  if (VAR_18 < -32768)
   VAR_18 = -32768;
  else if (VAR_18 > 32767)
   VAR_18 = 32767;
  VAR_5[VAR_19] = VAR_17[VAR_18 & 0xffff];
  VAR_18 = VAR_8[VAR_19] * VAR_20[6] / VAR_21[6];
  if (VAR_18 < -32768)
   VAR_18 = -32768;
  else if (VAR_18 > 32767)
   VAR_18 = 32767;
  VAR_6[VAR_19] = VAR_17[VAR_18 & 0xffff];
  VAR_18 = VAR_8[VAR_19] * VAR_20[7] / VAR_21[7];
  if (VAR_18 < -32768)
   VAR_18 = -32768;
  else if (VAR_18 > 32767)
   VAR_18 = 32767;
  VAR_7[VAR_19] = VAR_17[VAR_18 & 0xffff];

  VAR_19++;
 }
}
