
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
 int FUNC_2 (struct bnx2x*,int ) ;

int FUNC_3(struct bnx2x *VAR_7, int VAR_8, u8 VAR_9)
{

 int VAR_10 = (FUNC_2(VAR_7, VAR_5) &&
    FUNC_2(VAR_7, VAR_6)) ^ VAR_9;
 int VAR_11 = VAR_8 +
   (VAR_10 ? VAR_2 : 0);
 u32 VAR_12 = (1 << VAR_11);
 u32 VAR_13;
 int VAR_14;

 if (VAR_8 > VAR_1) {
  FUNC_0("Invalid GPIO %d\n", VAR_8);
  return -VAR_0;
 }


 VAR_13 = FUNC_2(VAR_7, VAR_3);


 if ((VAR_13 & VAR_12) == VAR_12)
  VAR_14 = 1;
 else
  VAR_14 = 0;

 FUNC_1(VAR_4, "pin %d  value 0x%x\n", VAR_8, VAR_14);

 return VAR_14;
}
