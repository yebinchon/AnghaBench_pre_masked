
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (unsigned int) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_2 (unsigned int) ;
 unsigned long FUNC_3 (unsigned int) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_4 (int) ;
 unsigned long VAR_5 ;
 unsigned long FUNC_5 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(u64 VAR_19, unsigned long *VAR_20, unsigned long *VAR_21)
{
 unsigned int VAR_22, VAR_23, VAR_24;
 unsigned long VAR_25, VAR_26;

 VAR_25 = VAR_26 = 0;

 VAR_23 = (VAR_19 >> VAR_11) & VAR_10;
 VAR_22 = (VAR_19 >> VAR_18) & VAR_17;
 VAR_24 = (VAR_19 >> VAR_7) & VAR_6;

 if (VAR_23) {
  if (VAR_23 > 6)
   return -1;

  VAR_25 |= FUNC_2(VAR_23);
  VAR_26 |= FUNC_3(VAR_23);

  if (VAR_23 >= 5 && VAR_19 != 0x500fa && VAR_19 != 0x600f4)
   return -1;
 }

 if (VAR_23 <= 4) {






  VAR_25 |= VAR_2;
  VAR_26 |= VAR_3;
 }

 if (VAR_22 >= 6 && VAR_22 <= 9) {
  if (VAR_24)
   return -1;

 } else if (VAR_19 & VAR_8) {
  VAR_25 |= VAR_1;
  VAR_26 |= FUNC_1(VAR_24);
 }

 if (VAR_19 & VAR_9) {
  VAR_25 |= VAR_4;
  VAR_26 |= FUNC_4(VAR_19 >> VAR_12);
 }





 if (FUNC_6(VAR_19)) {
  VAR_25 |= VAR_0;
  VAR_26 |= FUNC_0(VAR_19 >> VAR_16);
 } else {




  unsigned int VAR_27, VAR_28;

  VAR_27 = (VAR_19 >> VAR_15) & VAR_14;
  VAR_28 = VAR_27 >> 7;

  if (VAR_28 && (VAR_27 & 0x60) == 0)
   return -1;

  VAR_25 |= VAR_5;
  VAR_26 |= FUNC_5(VAR_19 >> VAR_13);
 }

 *VAR_20 = VAR_25;
 *VAR_21 = VAR_26;

 return 0;
}
