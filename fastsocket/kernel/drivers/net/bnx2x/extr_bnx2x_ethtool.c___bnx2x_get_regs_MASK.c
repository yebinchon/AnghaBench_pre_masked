
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*,int*,int) ;
 int FUNC_1 (struct bnx2x*,int) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_1, u32 *VAR_2)
{
 u32 VAR_3;


 for (VAR_3 = 1; VAR_3 <= VAR_0; VAR_3++) {

  if ((VAR_3 == 2) ||
      (VAR_3 == 5) ||
      (VAR_3 == 8) ||
      (VAR_3 == 11))
   continue;
  FUNC_0(VAR_1, VAR_2, VAR_3);
  VAR_2 += FUNC_1(VAR_1, VAR_3);
 }
}
