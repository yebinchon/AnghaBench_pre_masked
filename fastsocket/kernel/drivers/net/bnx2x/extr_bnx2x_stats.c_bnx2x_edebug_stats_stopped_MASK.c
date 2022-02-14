
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bnx2x*,int ) ;
 scalar_t__ FUNC_1 (struct bnx2x*,int ) ;
 int * VAR_1 ;

__attribute__((used)) static bool FUNC_2(struct bnx2x *VAR_2)
{
 u32 VAR_3;

 if (FUNC_0(VAR_2, VAR_1[1])) {
  VAR_3 = FUNC_1(VAR_2, VAR_1[1]);

  if (VAR_3 == VAR_0)
   return 1;
 }

 return 0;
}
