
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int FUNC_0 (unsigned long) ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned long FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned long,unsigned int) ;
 unsigned long FUNC_3 (unsigned int) ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 scalar_t__ FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(u64 VAR_21[], int VAR_22,
      unsigned int VAR_23[], unsigned long VAR_24[])
{
 unsigned long VAR_25 = 0;
 unsigned long VAR_26 = VAR_7 | VAR_8;
 int VAR_27;
 unsigned int VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 unsigned int VAR_34 = 0;
 unsigned int VAR_35 = 0;

 if (VAR_22 > 6)
  return -1;
 for (VAR_27 = 0; VAR_27 < VAR_22; ++VAR_27) {
  VAR_28 = (VAR_21[VAR_27] >> VAR_16) & VAR_15;
  if (VAR_28) {
   if (VAR_35 & (1 << (VAR_28 - 1)))
    return -1;
   VAR_35 |= 1 << (VAR_28 - 1);
  }
 }
 for (VAR_27 = 0; VAR_27 < VAR_22; ++VAR_27) {
  VAR_29 = VAR_21[VAR_27];
  VAR_28 = (VAR_29 >> VAR_16) & VAR_15;
  if (VAR_28) {
   --VAR_28;
  } else {

   for (VAR_28 = 0; VAR_28 < 4; ++VAR_28)
    if (!(VAR_35 & (1 << VAR_28)))
     break;
   if (VAR_28 >= 4)
    return -1;
   VAR_35 |= 1 << VAR_28;
  }
  VAR_23[VAR_27] = VAR_28;
  VAR_33 = VAR_29 & VAR_14;
  if (VAR_29 & VAR_9) {

   VAR_30 = (VAR_29 >> VAR_11) & VAR_10;
   VAR_31 = (VAR_29 >> VAR_20) & VAR_19;

   if ((VAR_34 & (1 << VAR_30)) && FUNC_2(VAR_25, VAR_30) != VAR_31)
    return -1;
   VAR_25 |= (unsigned long)VAR_31 << FUNC_3(VAR_30);
   VAR_34 |= 1 << VAR_30;
   if (VAR_31 == 5) {

    VAR_32 = (VAR_29 >> VAR_18) & VAR_17;
    if ((VAR_34 & 0x10) &&
        FUNC_0(VAR_25) != VAR_32)
     return -1;
    VAR_34 |= 0x10;
    VAR_25 |= (unsigned long)VAR_32 << VAR_2;
   }
   if (0x30 <= VAR_33 && VAR_33 <= 0x3d) {

    if (VAR_30 >= 2)
     VAR_25 |= VAR_3 >> VAR_28;
   }

   if (VAR_28 >= 2 && (VAR_33 & 0x90) == 0x80)
    VAR_33 ^= 0x20;
  }
  if (VAR_29 & VAR_12) {
   VAR_25 |= VAR_4 >> VAR_28;
   if (VAR_29 & VAR_13)
    VAR_25 |= VAR_5 >> VAR_28;
  }
  if (FUNC_4(VAR_21[VAR_27]))
   VAR_26 |= VAR_6;
  if (VAR_28 < 4)
   VAR_25 |= (unsigned long)VAR_33 << FUNC_1(VAR_28);
 }
 VAR_24[0] = 0;
 if (VAR_35 & 1)
  VAR_24[0] = VAR_0;
 if (VAR_35 & 0xe)
  VAR_24[0] |= VAR_1;
 VAR_24[1] = VAR_25;
 VAR_24[2] = VAR_26;
 return 0;
}
