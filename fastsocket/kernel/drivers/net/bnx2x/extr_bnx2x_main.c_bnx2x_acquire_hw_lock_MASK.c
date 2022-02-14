
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct bnx2x*,int) ;
 int FUNC_3 (struct bnx2x*,int,int) ;
 int FUNC_4 (int,int) ;

int FUNC_5(struct bnx2x *VAR_6, u32 VAR_7)
{
 u32 VAR_8;
 u32 VAR_9 = (1 << VAR_7);
 int VAR_10 = FUNC_1(VAR_6);
 u32 VAR_11;
 int VAR_12;


 if (VAR_7 > VAR_3) {
  FUNC_0("resource(0x%x) > HW_LOCK_MAX_RESOURCE_VALUE(0x%x)\n",
     VAR_7, VAR_3);
  return -VAR_2;
 }

 if (VAR_10 <= 5) {
  VAR_11 = (VAR_4 + VAR_10*8);
 } else {
  VAR_11 =
    (VAR_5 + (VAR_10 - 6)*8);
 }


 VAR_8 = FUNC_2(VAR_6, VAR_11);
 if (VAR_8 & VAR_9) {
  FUNC_0("lock_status 0x%x  resource_bit 0x%x\n",
     VAR_8, VAR_9);
  return -VAR_1;
 }


 for (VAR_12 = 0; VAR_12 < 1000; VAR_12++) {

  FUNC_3(VAR_6, VAR_11 + 4, VAR_9);
  VAR_8 = FUNC_2(VAR_6, VAR_11);
  if (VAR_8 & VAR_9)
   return 0;

  FUNC_4(5000, 10000);
 }
 FUNC_0("Timeout\n");
 return -VAR_0;
}
