
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_8, unsigned int VAR_9)
{
 unsigned int VAR_10;

 if (VAR_8 <= 10)
  VAR_10 = 1 << VAR_8;
 else
  VAR_10 = FUNC_0(VAR_8);

 if (VAR_9 == VAR_7) {
  if ((VAR_3 | VAR_1) & VAR_10)
   return 0;
  VAR_9 = VAR_6 | VAR_5;
 }

 if (VAR_9 & VAR_6) {
  VAR_3 |= VAR_10;
 } else
  VAR_3 &= ~VAR_10;
 if (VAR_9 & VAR_5) {
  VAR_1 |= VAR_10;
 } else
  VAR_1 &= ~VAR_10;

 VAR_4 = VAR_3 & VAR_2;
 VAR_0 = VAR_1 & VAR_2;

 return 0;
}
