
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

__attribute__((used)) static u32 FUNC_0(u32 VAR_22)
{
 u32 VAR_23 = 0;

 if (VAR_22 & VAR_18)
  VAR_23 |= (1 << VAR_6);
 if (VAR_22 & VAR_17)
  VAR_23 |= (1 << VAR_5);
 if (VAR_22 & VAR_16)
  VAR_23 |= (1 << VAR_4);
 if (VAR_22 & VAR_15)
  VAR_23 |= (1 << VAR_3);
 if (VAR_22 & VAR_14)
  VAR_23 |= (1 << VAR_2);
 if (VAR_22 & (VAR_13 | VAR_12))
  VAR_23 |= (1 << VAR_1);
 if (VAR_22 & (VAR_11 | VAR_10))
  VAR_23 |= (1 << VAR_0);
 if (VAR_22 & VAR_21)
  VAR_23 |= (1 << VAR_9);
 if (VAR_22 & VAR_19)
  VAR_23 |= (1 << VAR_8);
 if (VAR_22 & VAR_20)
  VAR_23 |= (1 << VAR_7);

 return VAR_23;
}
