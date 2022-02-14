
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct bnx2x_phy *VAR_2,
        struct link_params *VAR_3, u8 VAR_4)
{
 u16 VAR_5 = 0;
 struct bnx2x *VAR_6 = VAR_3->bp;
 switch (VAR_4) {
 case 131:
 case 130:
  VAR_5 = 2;
  break;
 case 129:
  VAR_5 = 1;
  break;
 case 128:
  VAR_5 = 0;
  break;
 }
 FUNC_0(VAR_6, VAR_2,
    VAR_0,
    VAR_1,
    VAR_5);
}
