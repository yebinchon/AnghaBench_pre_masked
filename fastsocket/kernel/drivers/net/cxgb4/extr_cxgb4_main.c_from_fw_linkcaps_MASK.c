
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
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
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
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_26, unsigned int VAR_27)
{
 unsigned int VAR_28 = 0;

 if (VAR_26 == VAR_6 || VAR_26 == VAR_8 ||
     VAR_26 == VAR_7) {
  VAR_28 |= VAR_25;
  if (VAR_27 & VAR_1)
   VAR_28 |= VAR_21;
  if (VAR_27 & VAR_3)
   VAR_28 |= VAR_20;
  if (VAR_27 & VAR_2)
   VAR_28 |= VAR_18;
 } else if (VAR_26 == VAR_13 || VAR_26 == VAR_12) {
  VAR_28 |= VAR_23;
  if (VAR_27 & VAR_3)
   VAR_28 |= VAR_19;
  if (VAR_27 & VAR_2)
   VAR_28 |= VAR_16;
 } else if (VAR_26 == VAR_11)
  VAR_28 |= VAR_23 | VAR_15;
 else if (VAR_26 == VAR_5)
  VAR_28 |= VAR_23 | VAR_17 |
       VAR_15 | VAR_19;
 else if (VAR_26 == VAR_4)
  VAR_28 |= VAR_23 | VAR_17 |
       VAR_15 | VAR_19 |
       VAR_16;
 else if (VAR_26 == VAR_10 ||
   VAR_26 == VAR_9 || VAR_26 == VAR_14)
  VAR_28 |= VAR_24;

 if (VAR_27 & VAR_0)
  VAR_28 |= VAR_22;
 return VAR_28;
}
