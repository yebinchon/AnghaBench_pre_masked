
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,int,int) ;
 int FUNC_1 (struct bnx2x*,int,int) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_0, u32 VAR_1, int VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 if (!(VAR_3%4) && !(VAR_1%4))
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4 += 4)
   FUNC_0(VAR_0, VAR_1 + VAR_4, VAR_2);
 else
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
   FUNC_1(VAR_0, VAR_1 + VAR_4, VAR_2);
}
