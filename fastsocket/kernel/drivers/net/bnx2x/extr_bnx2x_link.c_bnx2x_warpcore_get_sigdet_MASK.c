
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bnx2x_phy*,struct link_params*) ;

__attribute__((used)) static int FUNC_2(struct bnx2x_phy *VAR_2,
         struct link_params *VAR_3)
{
 u16 VAR_4, VAR_5;
 struct bnx2x *VAR_6 = VAR_3->bp;

 VAR_5 = FUNC_1(VAR_2, VAR_3);

 FUNC_0(VAR_6, VAR_2, VAR_0, VAR_1,
     &VAR_4);

 return (VAR_4 >> (8+VAR_5)) & 0x1;
}
