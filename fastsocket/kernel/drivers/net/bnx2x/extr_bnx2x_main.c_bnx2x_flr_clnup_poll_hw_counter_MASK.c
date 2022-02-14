
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct bnx2x*,scalar_t__,int ,scalar_t__) ;

int FUNC_2(struct bnx2x *VAR_0, u32 VAR_1,
        char *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_0, VAR_1, 0, VAR_3);
 if (VAR_4 != 0) {
  FUNC_0("%s usage count=%d\n", VAR_2, VAR_4);
  return 1;
 }
 return 0;
}
