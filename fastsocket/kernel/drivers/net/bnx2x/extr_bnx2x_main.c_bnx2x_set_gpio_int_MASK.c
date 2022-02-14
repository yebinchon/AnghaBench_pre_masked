
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*,int,int) ;
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
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,int ,int) ;
 int FUNC_4 (struct bnx2x*,int ) ;
 int FUNC_5 (struct bnx2x*,int ) ;

int FUNC_6(struct bnx2x *VAR_10, int VAR_11, u32 VAR_12, u8 VAR_13)
{

 int VAR_14 = (FUNC_2(VAR_10, VAR_8) &&
    FUNC_2(VAR_10, VAR_9)) ^ VAR_13;
 int VAR_15 = VAR_11 +
   (VAR_14 ? VAR_5 : 0);
 u32 VAR_16 = (1 << VAR_15);
 u32 VAR_17;

 if (VAR_11 > VAR_2) {
  FUNC_0("Invalid GPIO %d\n", VAR_11);
  return -VAR_0;
 }

 FUNC_4(VAR_10, VAR_1);

 VAR_17 = FUNC_2(VAR_10, VAR_6);

 switch (VAR_12) {
 case 129:
  FUNC_1(VAR_7,
     "Clear GPIO INT %d (shift %d) -> output low\n",
     VAR_11, VAR_15);

  VAR_17 &= ~(VAR_16 << VAR_4);
  VAR_17 |= (VAR_16 << VAR_3);
  break;

 case 128:
  FUNC_1(VAR_7,
     "Set GPIO INT %d (shift %d) -> output high\n",
     VAR_11, VAR_15);

  VAR_17 &= ~(VAR_16 << VAR_3);
  VAR_17 |= (VAR_16 << VAR_4);
  break;

 default:
  break;
 }

 FUNC_3(VAR_10, VAR_6, VAR_17);
 FUNC_5(VAR_10, VAR_1);

 return 0;
}
