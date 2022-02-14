
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* UWORD ;
typedef int UBYTE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 scalar_t__* VAR_12 ;
 scalar_t__* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__* VAR_18 ;
 scalar_t__* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int ** VAR_30 ;

void FUNC_0(void)
{
 static const UBYTE VAR_31[4][8] = {
  { 0x88, 0x14, 0x88, 0x14, 0x8f, 0x1f, 0xbb, 0x5f },
  { 0x14, 0x88, 0x14, 0x88, 0x1f, 0x8f, 0x5f, 0xbb },
  { 0xd6, 0x46, 0xd6, 0x46, 0xdf, 0x4a, 0x4f, 0xac },
  { 0x46, 0xd6, 0x46, 0xd6, 0x4a, 0xdf, 0xac, 0x4f }
 };

 int VAR_32;
 int VAR_33;
 int VAR_34;
 const UBYTE *VAR_35;
 UBYTE VAR_36;
 UBYTE VAR_37;

 if (VAR_0 == 0) {
  VAR_30[0][2] = VAR_30[0][3] = VAR_24;
  VAR_30[0][0xf] = VAR_27;
  return;
 }


 if (VAR_1) {
  static UWORD VAR_38[4][2] = {
   {0x4040, 0x8080},
   {0x8080, 0x4040},
   {0x8080, 0xd0d0},
   {0xd0d0, 0x8080}
  };
  VAR_30[0][2] = VAR_30[0][3] = VAR_26;
  VAR_30[0][0xf] = VAR_29;
  VAR_14 = VAR_38[VAR_0 - 1][0];
  VAR_15 = VAR_38[VAR_0 - 1][1];
 }
 else

 {
  VAR_30[0][2] = VAR_30[0][3] = VAR_25;
  VAR_30[0][0xf] = VAR_28;
 }

 VAR_35 = (VAR_0 <= 4 ? VAR_31[VAR_0 - 1] : VAR_31[2]);

 VAR_22 = VAR_20 = VAR_2[VAR_9] & 0x0f0f;
 VAR_23 = VAR_21 = VAR_2[VAR_10];
 VAR_37 = (VAR_2[VAR_10] & 0xf0) | (VAR_2[VAR_9] & 0x0f);

 for (VAR_32 = 0; VAR_32 <= 255; VAR_32++) {
  VAR_12[VAR_32] = 0;
  VAR_18[VAR_32] = 0;
  VAR_13[255 - VAR_32] = 0;
  VAR_19[255 - VAR_32] = 0;

  for (VAR_33 = 0; VAR_33 <= 3; VAR_33++) {
   VAR_36 = VAR_32 << VAR_33;
   if (!(VAR_36 & 0x20)) {
    if ((VAR_36 & 0xf8) == 0x50)
     VAR_34 = 1;
    else if ((VAR_36 & 0xf8) == 0xD8)
     VAR_34 = 3;
    else {
     ((UBYTE *) VAR_16)[(VAR_32 << 2) + VAR_33] = VAR_11;
     ((UBYTE *) VAR_17)[((255 - VAR_32) << 2) + VAR_33] = VAR_37;
     ((UBYTE *) VAR_12)[(VAR_32 << 2) + VAR_33] = 0xff;
     ((UBYTE *) VAR_19)[((255 - VAR_32) << 2) + VAR_33] = 0x0f;
     ((UBYTE *) VAR_13)[((255 - VAR_32) << 2) + VAR_33] = 0xf0;
     continue;
    }
   }
   else if (VAR_36 & 0x40) {
    if (VAR_36 & 0x10)
     goto colpf1_pixel;
    else if (VAR_36 & 0x80) {
     if (VAR_36 & 0x08)
      VAR_34 = 4;
     else
      goto colpf1_pixel;
    }
    else
     VAR_34 = 7;
   }
   else if (VAR_36 & 0x10) {
    if (VAR_36 & 0x08) {
     if (VAR_36 & 0x80)
      VAR_34 = 4;
     else
      goto colpf1_pixel;
    }
    else
     VAR_34 = 6;
   }
   else
    VAR_34 = 0;

   ((UBYTE *) VAR_17)[((255 - VAR_32) << 2) + VAR_33] =
   ((UBYTE *) VAR_16)[(VAR_32 << 2) + VAR_33] = VAR_35[(VAR_33 & 1) ^ VAR_34];
   continue;

   colpf1_pixel:
   ((UBYTE *) VAR_16)[(VAR_32 << 2) + VAR_33] = VAR_37;
   ((UBYTE *) VAR_17)[((255 - VAR_32) << 2) + VAR_33] = VAR_11;
   ((UBYTE *) VAR_13)[((255 - VAR_32) << 2) + VAR_33] = 0xff;
   ((UBYTE *) VAR_18)[(VAR_32 << 2) + VAR_33] = 0x0f;
   ((UBYTE *) VAR_12)[(VAR_32 << 2) + VAR_33] = 0xf0;
  }
 }
}
