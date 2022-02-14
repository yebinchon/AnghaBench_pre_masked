
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int* VAR_13 ;
 unsigned long** VAR_14 ;

__attribute__((used)) static int FUNC_0(u64 VAR_15, unsigned long *VAR_16,
      unsigned long *VAR_17)
{
 int VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23;
 unsigned long VAR_24 = 0, VAR_25 = 0;

 VAR_18 = (VAR_15 >> VAR_10) & VAR_9;
 if (VAR_18) {
  if (VAR_18 > 6)
   return -1;
  VAR_21 = (VAR_18 - 1) * 2;
  VAR_24 |= 2 << VAR_21;
  VAR_25 |= 1 << VAR_21;
  if (VAR_18 >= 5 && !(VAR_15 == 0x500009 || VAR_15 == 0x600005))
   return -1;
 }
 if (VAR_15 & VAR_0) {
  VAR_20 = (VAR_15 >> VAR_12) & VAR_11;
  if (VAR_20 > VAR_7)
   return -1;
  if (VAR_20 == VAR_6)
   VAR_20 = VAR_5;
  VAR_24 |= VAR_14[VAR_20][0];
  VAR_25 |= VAR_14[VAR_20][1];
  VAR_19 = (VAR_15 >> VAR_2) & VAR_1;
  if (VAR_19 >= 4) {
   if (VAR_20 != VAR_8)
    return -1;

   ++VAR_20;
   VAR_19 &= 3;
  }
  if (VAR_20 == VAR_3) {
   VAR_22 = VAR_15 & 7;
   VAR_23 = (VAR_22 == 6)? 7: 3;
   VAR_21 = VAR_13[VAR_22];
   VAR_24 |= (unsigned long)VAR_23 << VAR_21;
   VAR_25 |= (unsigned long)((VAR_15 >> VAR_4) & VAR_23)
    << VAR_21;
  }

  VAR_24 |= 0xfUL << (24 - 4 * VAR_19);
  VAR_25 |= (unsigned long)VAR_20 << (24 - 4 * VAR_19);
 }
 if (VAR_18 < 5) {

  VAR_24 |= 0x8000000000000ul;
  VAR_25 |= 0x1000000000000ul;
 }
 *VAR_16 = VAR_24;
 *VAR_17 = VAR_25;
 return 0;
}
