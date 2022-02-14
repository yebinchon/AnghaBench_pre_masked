
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_25, u32 VAR_26)
{
 u32 VAR_27 = 0;

 switch (VAR_25) {
 case 130:
  VAR_27 |= VAR_21;
  if (VAR_26 & (1 << VAR_1))
   VAR_27 |= VAR_12;
  if (VAR_26 & (1 << VAR_0))
   VAR_27 |= VAR_10;
  break;

 case 128:
 case 129:
  VAR_27 |= VAR_22;
  break;

 case 131:
  VAR_27 |= VAR_24;
  if (VAR_26 & (1 << VAR_6))
   VAR_27 |= VAR_18;
  if (VAR_26 & (1 << VAR_5))
   VAR_27 |= VAR_17;
  if (VAR_26 & (1 << VAR_4))
   VAR_27 |= VAR_16;
  if (VAR_26 & (1 << VAR_3))
   VAR_27 |= VAR_15;
  if (VAR_26 & (1 << VAR_2))
   VAR_27 |= VAR_14;
  if (VAR_26 & (1 << VAR_1))
   VAR_27 |= VAR_13;
  if (VAR_26 & (1 << VAR_0))
   VAR_27 |= VAR_11;
  break;
 }

 if (VAR_26 & (1 << VAR_9))
  VAR_27 |= VAR_23;
 if (VAR_26 & (1 << VAR_8))
  VAR_27 |= VAR_19;
 if (VAR_26 & (1 << VAR_7))
  VAR_27 |= VAR_20;

 return VAR_27;
}
