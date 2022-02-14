
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int FUNC_0 (unsigned long,unsigned long) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static unsigned int FUNC_1(unsigned long VAR_13, unsigned long VAR_14)
{
 unsigned int VAR_15;

 if (VAR_11) {
  VAR_15 = FUNC_0(VAR_13, VAR_14);
  VAR_15 <<= VAR_5;
  VAR_15 &= VAR_6;
 } else {
  if (VAR_12 == VAR_9 || VAR_12 == VAR_10) {
   unsigned long VAR_16;

   __asm__ ("rdpr %%ver, %0" : "=r" (VAR_16));
   if ((VAR_16 >> 32UL) == VAR_7 ||
       (VAR_16 >> 32UL) == VAR_8) {
    VAR_15 = VAR_14 << VAR_5;
    VAR_15 &= VAR_4;
   } else {
    unsigned int VAR_17 = VAR_14 & 0x1f;
    unsigned int VAR_18 = (VAR_14 >> 5) & 0x1f;

    VAR_15 = ((VAR_17 << VAR_1) |
           (VAR_18 << VAR_3));
    VAR_15 &= (VAR_0 |
     VAR_2);
   }
  } else {
   VAR_15 = VAR_14 << VAR_5;
   VAR_15 &= VAR_6;
  }
 }

 return VAR_15;
}
