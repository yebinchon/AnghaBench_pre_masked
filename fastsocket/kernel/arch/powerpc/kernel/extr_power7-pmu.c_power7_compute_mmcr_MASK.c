
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(u64 VAR_17[], int VAR_18,
          unsigned int VAR_19[], unsigned long VAR_20[])
{
 unsigned long VAR_21 = 0;
 unsigned long VAR_22 = VAR_6 | VAR_7;
 unsigned int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 unsigned int VAR_28 = 0;
 int VAR_29;


 for (VAR_29 = 0; VAR_29 < VAR_18; ++VAR_29) {
  VAR_23 = (VAR_17[VAR_29] >> VAR_14) & VAR_13;
  if (VAR_23) {
   if (VAR_23 > 6)
    return -1;
   if (VAR_28 & (1 << (VAR_23 - 1)))
    return -1;
   VAR_28 |= 1 << (VAR_23 - 1);
  }
 }


 for (VAR_29 = 0; VAR_29 < VAR_18; ++VAR_29) {
  VAR_23 = (VAR_17[VAR_29] >> VAR_14) & VAR_13;
  VAR_24 = (VAR_17[VAR_29] >> VAR_16) & VAR_15;
  VAR_25 = (VAR_17[VAR_29] >> VAR_9) & VAR_8;
  VAR_26 = (VAR_17[VAR_29] >> VAR_11) & VAR_10;
  VAR_27 = VAR_17[VAR_29] & VAR_12;
  if (!VAR_23) {

   for (VAR_23 = 0; VAR_23 < 4; ++VAR_23) {
    if (!(VAR_28 & (1 << VAR_23)))
     break;
   }
   if (VAR_23 >= 4)
    return -1;
   VAR_28 |= 1 << VAR_23;
  } else {

   --VAR_23;
  }
  if (VAR_23 <= 3) {
   VAR_21 |= (unsigned long) VAR_24
    << (VAR_4 - 4 * VAR_23);
   VAR_21 |= (unsigned long) VAR_25
    << (VAR_3 - VAR_23);
   VAR_21 |= VAR_27 << FUNC_0(VAR_23);
   if (VAR_24 == 6)
    VAR_21 |= (unsigned long) VAR_26
     << VAR_2;
  }
  if (FUNC_1(VAR_17[VAR_29]))
   VAR_22 |= VAR_5;
  VAR_19[VAR_29] = VAR_23;
 }


 VAR_20[0] = 0;
 if (VAR_28 & 1)
  VAR_20[0] = VAR_0;
 if (VAR_28 & 0x3e)
  VAR_20[0] |= VAR_1;
 VAR_20[1] = VAR_21;
 VAR_20[2] = VAR_22;
 return 0;
}
