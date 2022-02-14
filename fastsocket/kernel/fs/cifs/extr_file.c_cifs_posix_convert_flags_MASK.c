
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static u32 FUNC_0(unsigned int VAR_21)
{
 u32 VAR_22 = 0;

 if ((VAR_21 & VAR_0) == VAR_6)
  VAR_22 = VAR_16;
 else if ((VAR_21 & VAR_0) == VAR_10)
  VAR_22 = VAR_20;
 else if ((VAR_21 & VAR_0) == VAR_7)
  VAR_22 = VAR_17;

 if (VAR_21 & VAR_1)
  VAR_22 |= VAR_11;
 if (VAR_21 & VAR_4)
  VAR_22 |= VAR_14;
 if (VAR_21 & VAR_9)
  VAR_22 |= VAR_19;
 if (VAR_21 & VAR_8)
  VAR_22 |= VAR_18;
 if (VAR_21 & VAR_3)
  VAR_22 |= VAR_13;
 if (VAR_21 & VAR_5)
  VAR_22 |= VAR_15;
 if (VAR_21 & VAR_2)
  VAR_22 |= VAR_12;

 return VAR_22;
}
