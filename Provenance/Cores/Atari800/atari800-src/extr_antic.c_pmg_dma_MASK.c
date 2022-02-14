
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int* VAR_13 ;
 int* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static void FUNC_1(void)
{

 if (VAR_2) {
  if (VAR_3) {
   const UBYTE *VAR_18;
   if (VAR_17) {
    if (VAR_4 != ((void*)0) && VAR_16 < 0x8000 && VAR_16 >= 0x4000)
     VAR_18 = VAR_4 + VAR_16 - 0x4000 + VAR_6;
    else
     VAR_18 = VAR_13 + VAR_16 + VAR_6;
    if (VAR_6 & 1) {
     VAR_8 = VAR_18[0x400];
     VAR_9 = VAR_18[0x500];
     VAR_10 = VAR_18[0x600];
     VAR_11 = VAR_18[0x700];
    }
    else {
     if ((VAR_12 & 0x10) == 0)
      VAR_8 = VAR_18[0x400];
     if ((VAR_12 & 0x20) == 0)
      VAR_9 = VAR_18[0x500];
     if ((VAR_12 & 0x40) == 0)
      VAR_10 = VAR_18[0x600];
     if ((VAR_12 & 0x80) == 0)
      VAR_11 = VAR_18[0x700];
    }
   }
   else {
    if (VAR_4 != ((void*)0) && VAR_15 < 0x8000 && VAR_15 >= 0x4000)
     VAR_18 = VAR_4 + (VAR_15 - 0x4000) + (VAR_6 >> 1);
    else
     VAR_18 = VAR_13 + VAR_15 + (VAR_6 >> 1);
    if (VAR_6 & 1) {
     VAR_8 = VAR_18[0x200];
     VAR_9 = VAR_18[0x280];
     VAR_10 = VAR_18[0x300];
     VAR_11 = VAR_18[0x380];
    }
    else {
     if ((VAR_12 & 0x10) == 0)
      VAR_8 = VAR_18[0x200];
     if ((VAR_12 & 0x20) == 0)
      VAR_9 = VAR_18[0x280];
     if ((VAR_12 & 0x40) == 0)
      VAR_10 = VAR_18[0x300];
     if ((VAR_12 & 0x80) == 0)
      VAR_11 = VAR_18[0x380];
    }
   }
  }
  VAR_5 += 4;
 }
 if (VAR_0) {
  if (VAR_1) {
   UBYTE VAR_19;
   if (VAR_4 != ((void*)0) && VAR_16 < 0x8000 && VAR_16 >= 0x4000)
    VAR_19 = VAR_4[VAR_17 ? VAR_16 + VAR_6 + 0x300 - 0x4000 : VAR_15 + (VAR_6 >> 1) + 0x180 - 0x4000];
   else
    VAR_19 = FUNC_0(VAR_17 ? VAR_16 + VAR_6 + 0x300 : VAR_15 + (VAR_6 >> 1) + 0x180);

   VAR_7 = VAR_6 & 1 ? VAR_19 : ((VAR_7 ^ VAR_19) & VAR_14[VAR_12 & 0xf]) ^ VAR_19;
  }
  VAR_5++;
 }
}
