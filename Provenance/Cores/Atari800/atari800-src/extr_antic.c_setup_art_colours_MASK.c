
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int ULONG ;


 int* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_0(void)
{
 static UWORD *VAR_16 = &VAR_12;
 static UWORD *VAR_17 = &VAR_13;
 UWORD VAR_18 = VAR_0[VAR_1] & 0x0f0f;

 if (VAR_18 != *VAR_16 || VAR_0[VAR_2] != *VAR_17) {
  if (VAR_18 < (VAR_0[VAR_2] & 0x0f0f)) {
   VAR_16 = &VAR_14;
   VAR_17 = &VAR_15;
   VAR_7 = VAR_9;
   VAR_6 = VAR_11;
   VAR_5 = VAR_4;
  }
  else {
   VAR_16 = &VAR_12;
   VAR_17 = &VAR_13;
   VAR_7 = VAR_8;
   VAR_6 = VAR_10;
   VAR_5 = VAR_3;
  }
  if (VAR_18 ^ *VAR_16) {
   int VAR_19;
   ULONG VAR_20 = VAR_18 ^ *VAR_16;
   VAR_20 |= VAR_20 << 16;
   *VAR_16 = VAR_18;
   for (VAR_19 = 0; VAR_19 <= 255; VAR_19++)
    VAR_7[VAR_19] ^= VAR_6[VAR_19] & VAR_20;
  }
  if (VAR_0[VAR_2] ^ *VAR_17) {
   int VAR_21;
   ULONG VAR_22 = VAR_0[VAR_2] ^ *VAR_17;
   VAR_22 |= VAR_22 << 16;
   *VAR_17 = VAR_0[VAR_2];
   for (VAR_21 = 0; VAR_21 <= 255; VAR_21++)
    VAR_7[VAR_21] ^= VAR_5[VAR_21] & VAR_22;
  }

 }
}
