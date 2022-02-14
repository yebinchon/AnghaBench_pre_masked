
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int mode_t ;


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

mode_t
FUNC_0(u32 VAR_18)
{
 int VAR_19 = 0;

 if (!(VAR_18 & VAR_5))
  VAR_19 |= VAR_14;
 if (!(VAR_18 & VAR_4))
  VAR_19 |= VAR_11;
 if (!(VAR_18 & VAR_3))
  VAR_19 |= VAR_17;
 if (VAR_18 & VAR_2)
  VAR_19 |= VAR_12;
 if (VAR_18 & VAR_1)
  VAR_19 |= VAR_9;
 if (VAR_18 & VAR_0)
  VAR_19 |= VAR_15;
 if (VAR_18 & VAR_8)
  VAR_19 |= VAR_13;
 if (VAR_18 & VAR_7)
  VAR_19 |= VAR_10;
 if (VAR_18 & VAR_6)
  VAR_19 |= VAR_16;

 return VAR_19;
}
