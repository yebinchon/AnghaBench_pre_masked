
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int* VAR_10 ;
 int* VAR_11 ;

__attribute__((used)) static int FUNC_3(u64 VAR_12[], int VAR_13,
    unsigned int VAR_14[], unsigned long VAR_15[])
{
 u8 VAR_16[VAR_2][VAR_3];
 int VAR_17[VAR_2];
 int VAR_18, VAR_19, VAR_20, VAR_21;
 u32 VAR_22 = 0, VAR_23;
 u32 VAR_24 = 0, VAR_25 = 0, VAR_26 = 0;
 u32 VAR_27, VAR_28, VAR_29;

 if (VAR_13 > VAR_3)
  return -1;


 for (VAR_18 = 0; VAR_18 < VAR_2; ++VAR_18)
  VAR_17[VAR_18] = 0;
 for (VAR_18 = 0; VAR_18 < VAR_13; ++VAR_18) {
  VAR_20 = FUNC_1(VAR_12[VAR_18]);
  if (VAR_20 < 0)
   return -1;
  VAR_19 = VAR_17[VAR_20]++;
  VAR_16[VAR_20][VAR_19] = VAR_18;
 }


 for (VAR_20 = VAR_2 - 1; VAR_20 >= 0; --VAR_20) {
  for (VAR_18 = 0; VAR_18 < VAR_17[VAR_20]; ++VAR_18) {
   VAR_27 = VAR_12[VAR_16[VAR_20][VAR_18]];
   if (VAR_20 == 4) {
    VAR_28 = (VAR_27 >> VAR_5) & VAR_4;
    if (VAR_22 & (1 << (VAR_28 - 1)))
     return -1;
   } else {

    VAR_23 = VAR_9[VAR_20] & ~VAR_22;
    if (!VAR_23)
     return -1;
    VAR_28 = FUNC_0(VAR_23);
   }
   VAR_22 |= 1 << (VAR_28 - 1);

   VAR_21 = FUNC_2(VAR_27);
   if (VAR_21) {
    VAR_29 = (VAR_27 >> VAR_7) & VAR_6;
    VAR_24 |= VAR_29 << 16;
    if (VAR_21 == 2 && (VAR_27 & VAR_8))
     VAR_26 = 0x80000000;
   }
   VAR_27 &= VAR_10[VAR_28 - 1];
   VAR_27 <<= VAR_11[VAR_28 - 1];
   if (VAR_28 <= 2)
    VAR_24 |= VAR_27;
   else
    VAR_25 |= VAR_27;
   VAR_14[VAR_16[VAR_20][VAR_18]] = VAR_28 - 1;
  }
 }

 if (VAR_22 & 1)
  VAR_24 |= VAR_0;
 if (VAR_22 & 0x3e)
  VAR_24 |= VAR_1;


 VAR_15[0] = VAR_24;
 VAR_15[1] = VAR_25;
 VAR_15[2] = VAR_26;
 return 0;
}
