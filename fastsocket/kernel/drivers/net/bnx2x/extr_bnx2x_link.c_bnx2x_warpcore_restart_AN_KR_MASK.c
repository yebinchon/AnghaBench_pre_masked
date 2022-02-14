
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_2 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_3 (struct link_params*,struct bnx2x_phy*) ;

__attribute__((used)) static void FUNC_4(struct bnx2x_phy *VAR_4,
      struct link_params *VAR_5)
{

 struct bnx2x *VAR_6 = VAR_5->bp;
 u16 VAR_7 = FUNC_2(VAR_4, VAR_5);
 FUNC_0(VAR_6, VAR_4, VAR_2,
     VAR_0, VAR_7);
 FUNC_1(VAR_6, VAR_4, VAR_1,
    VAR_3, 0x1200);


 FUNC_3(VAR_5, VAR_4);
}
