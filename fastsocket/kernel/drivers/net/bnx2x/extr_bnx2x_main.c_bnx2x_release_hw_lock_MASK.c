
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bnx2x*,int) ;
 int FUNC_3 (struct bnx2x*,int,int) ;

int FUNC_4(struct bnx2x *VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 u32 VAR_8 = (1 << VAR_6);
 int VAR_9 = FUNC_1(VAR_5);
 u32 VAR_10;


 if (VAR_6 > VAR_2) {
  FUNC_0("resource(0x%x) > HW_LOCK_MAX_RESOURCE_VALUE(0x%x)\n",
     VAR_6, VAR_2);
  return -VAR_1;
 }

 if (VAR_9 <= 5) {
  VAR_10 = (VAR_3 + VAR_9*8);
 } else {
  VAR_10 =
    (VAR_4 + (VAR_9 - 6)*8);
 }


 VAR_7 = FUNC_2(VAR_5, VAR_10);
 if (!(VAR_7 & VAR_8)) {
  FUNC_0("lock_status 0x%x resource_bit 0x%x. Unlock was called but lock wasn't taken!\n",
     VAR_7, VAR_8);
  return -VAR_0;
 }

 FUNC_3(VAR_5, VAR_10, VAR_8);
 return 0;
}
