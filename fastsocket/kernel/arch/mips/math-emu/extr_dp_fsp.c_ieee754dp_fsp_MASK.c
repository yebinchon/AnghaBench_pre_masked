
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int ieee754sp ;
typedef int ieee754dp ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

ieee754dp FUNC_6(ieee754sp VAR_14)
{
 VAR_1;

 VAR_5;

 VAR_0;

 VAR_6;

 switch (VAR_10) {
 case 129:
  FUNC_0(VAR_7);
  return FUNC_4(FUNC_2(), "fsp");
 case 130:
  return FUNC_4(FUNC_1(VAR_13,
       VAR_3 + 1 + VAR_2,
       ((u64) VAR_12
        << (VAR_4 -
            VAR_9))), "fsp",
      VAR_14);
 case 132:
  return FUNC_3(VAR_13);
 case 128:
  return FUNC_5(VAR_13);
 case 133:

  while ((VAR_12 >> VAR_9) == 0) {
   VAR_12 <<= 1;
   VAR_11--;
  }
  break;
 case 131:
  break;
 }





 VAR_12 &= ~VAR_8;

 return FUNC_1(VAR_13, VAR_11 + VAR_2,
         (u64) VAR_12 << (VAR_4 - VAR_9));
}
