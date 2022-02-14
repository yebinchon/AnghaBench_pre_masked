
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
 int FUNC_0 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

u32 FUNC_3(u32 VAR_17, u32 VAR_18)
{
 u32 VAR_19, VAR_20, VAR_21;
 VAR_19 = 1 << VAR_18;

 VAR_21 = FUNC_1(VAR_17 + VAR_16);
 VAR_21 &= VAR_19;
 FUNC_2(VAR_21, VAR_17 + VAR_15);
 VAR_20 = VAR_21 >> VAR_18;

 VAR_21 = FUNC_1(VAR_17 + VAR_14);
 VAR_21 &= VAR_19;
 FUNC_2(VAR_21, VAR_17 + VAR_13);
 VAR_20 |= (VAR_21 >> VAR_18) << 1;

 VAR_21 = FUNC_1(VAR_17 + VAR_10);
 VAR_21 &= VAR_19;
 FUNC_2(VAR_21, VAR_17 + VAR_9);
 VAR_20 |= (VAR_21 >> VAR_18) << 2;

 VAR_21 = FUNC_1(VAR_17 + VAR_7);
 VAR_21 &= (VAR_19 << VAR_0) | (VAR_19 << VAR_1);
 FUNC_2(VAR_21, VAR_17 + VAR_5);

 if (VAR_21 & (VAR_19 << VAR_1))
  VAR_20 |= 1 << 3;
 if (VAR_21 & (VAR_19 << VAR_0))
  VAR_20 |= 1 << 4;

 VAR_21 = FUNC_1(VAR_17 + VAR_11);
 VAR_19 <<= VAR_2;
 if (((VAR_21 >> FUNC_0(0)) & VAR_12)
   == VAR_18)
  VAR_19 |= 1 << VAR_3;
 if (((VAR_21 >> FUNC_0(1)) & VAR_12)
   == VAR_18)
  VAR_19 |= 1 << (VAR_3 + 1);
 if (((VAR_21 >> FUNC_0(2)) & VAR_12)
   == VAR_18)
  VAR_19 |= 1 << (VAR_3 + 2);

 VAR_21 = FUNC_1(VAR_17 + VAR_8) & VAR_19;
 FUNC_2(VAR_21, VAR_17 + VAR_6);
 VAR_20 |= ((VAR_21 >> VAR_18) & 1) << 5;
 VAR_20 |= ((VAR_21 >> VAR_3) & VAR_4) << 6;

 return VAR_20;
}
