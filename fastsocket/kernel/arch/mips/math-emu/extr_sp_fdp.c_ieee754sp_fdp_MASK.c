
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int ieee754sp ;
typedef int ieee754dp ;
struct TYPE_2__ {int rm; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,char*,int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,scalar_t__,int) ;
 TYPE_1__ VAR_13 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

ieee754sp FUNC_10(ieee754dp VAR_18)
{
 VAR_1;
 ieee754sp VAR_19;

 VAR_3;

 VAR_0;

 VAR_4;

 switch (VAR_14) {
 case 129:
  FUNC_0(VAR_6);
  return FUNC_7(FUNC_3(), "fdp");
 case 130:
  VAR_19 = FUNC_2(VAR_17, VAR_11 + 1 + VAR_10, (u32)
    (VAR_16 >> (VAR_2 - VAR_12)));
  if (!FUNC_5(VAR_19))
   VAR_19 = FUNC_3();
  return FUNC_7(VAR_19, "fdp", VAR_18);
 case 132:
  return FUNC_4(VAR_17);
 case 128:
  return FUNC_9(VAR_17);
 case 133:

  FUNC_0(VAR_9);
  FUNC_0(VAR_5);
  if ((VAR_13.rm == VAR_8 && !VAR_17) ||
    (VAR_13.rm == VAR_7 && VAR_17))
   return FUNC_8(FUNC_6(VAR_17), "fdp", VAR_18);
  return FUNC_8(FUNC_9(VAR_17), "fdp", VAR_18);
 case 131:
  break;
 }

 {
  u32 VAR_20;



  VAR_20 = (VAR_16 >> (VAR_2 - (VAR_12 + 3))) |
      ((VAR_16 << (64 - (VAR_2 - (VAR_12 + 3)))) != 0);

  FUNC_1(VAR_17, VAR_15, VAR_20, "fdp", VAR_18);
 }
}
