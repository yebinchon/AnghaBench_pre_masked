
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct bnx2x_phy *VAR_3,
         struct link_params *VAR_4,
         u32 VAR_5)
{
 struct bnx2x *VAR_6 = VAR_4->bp;
 switch (VAR_5) {
 case 128:

  FUNC_0(VAR_6, VAR_3,
     VAR_0, VAR_2, (1<<2));
  FUNC_0(VAR_6, VAR_3,
     VAR_0, VAR_1, 0x0004);
  break;
 }
}
