
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

__attribute__((used)) static int FUNC_0(u64 VAR_9, unsigned long *VAR_10,
        unsigned long *VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned long VAR_16 = 0, VAR_17 = 0;

 VAR_12 = (VAR_9 >> VAR_4) & VAR_3;
 if (VAR_12) {
  if (VAR_12 > 4 && !(VAR_9 == 0x500009 || VAR_9 == 0x600005))
   return -1;
  VAR_14 = (VAR_12 - 1) * 2;
  VAR_16 |= 2 << VAR_14;
  VAR_17 |= 1 << VAR_14;
 }
 if (VAR_9 & VAR_0) {
  VAR_13 = (VAR_9 >> VAR_2) & VAR_1;
  VAR_14 = VAR_13 * 4 + (16 - VAR_8);
  VAR_16 |= VAR_7 << VAR_14;
  VAR_17 |= (unsigned long)(VAR_9 & VAR_7) << VAR_14;
  if ((VAR_9 & VAR_7) == (5 << VAR_8)) {
   VAR_15 = (VAR_9 >> VAR_6) & VAR_5;
   VAR_16 |= (unsigned long)VAR_5 << 32;
   VAR_17 |= (unsigned long)VAR_15 << 32;
  }
 }
 if (VAR_12 <= 4) {
  VAR_16 |= 0x8000;
  VAR_17 |= 0x1000;
 }
 *VAR_10 = VAR_16;
 *VAR_11 = VAR_17;
 return 0;
}
