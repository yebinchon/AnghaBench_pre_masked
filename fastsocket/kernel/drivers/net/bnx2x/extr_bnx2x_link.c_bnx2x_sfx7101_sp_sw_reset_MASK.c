
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_2 (int) ;

void FUNC_3(struct bnx2x *VAR_2, struct bnx2x_phy *VAR_3)
{
 u16 VAR_4, VAR_5;

 FUNC_0(VAR_2, VAR_3,
   VAR_0,
   VAR_1, &VAR_4);

 for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {
  FUNC_2(50);

  FUNC_1(VAR_2, VAR_3,
     VAR_0,
     VAR_1,
     (VAR_4 | (1<<15)));

  FUNC_0(VAR_2, VAR_3,
    VAR_0,
    VAR_1, &VAR_4);

  if ((VAR_4 & (1<<15)) == 0)
   break;
 }
}
