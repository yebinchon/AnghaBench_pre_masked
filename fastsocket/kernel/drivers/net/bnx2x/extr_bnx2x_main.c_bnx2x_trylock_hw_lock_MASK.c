
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bnx2x*,int) ;
 int FUNC_3 (struct bnx2x*,int,int) ;

__attribute__((used)) static bool FUNC_4(struct bnx2x *VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 u32 VAR_8 = (1 << VAR_6);
 int VAR_9 = FUNC_0(VAR_5);
 u32 VAR_10;

 FUNC_1(VAR_3 | VAR_4,
    "Trying to take a lock on resource %d\n", VAR_6);


 if (VAR_6 > VAR_0) {
  FUNC_1(VAR_3 | VAR_4,
     "resource(0x%x) > HW_LOCK_MAX_RESOURCE_VALUE(0x%x)\n",
     VAR_6, VAR_0);
  return 0;
 }

 if (VAR_9 <= 5)
  VAR_10 = (VAR_1 + VAR_9*8);
 else
  VAR_10 =
    (VAR_2 + (VAR_9 - 6)*8);


 FUNC_3(VAR_5, VAR_10 + 4, VAR_8);
 VAR_7 = FUNC_2(VAR_5, VAR_10);
 if (VAR_7 & VAR_8)
  return 1;

 FUNC_1(VAR_3 | VAR_4,
    "Failed to get a lock on resource %d\n", VAR_6);
 return 0;
}
