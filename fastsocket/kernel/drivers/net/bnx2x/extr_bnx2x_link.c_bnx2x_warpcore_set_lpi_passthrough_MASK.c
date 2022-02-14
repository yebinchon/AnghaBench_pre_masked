
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct bnx2x_phy *VAR_4,
            struct link_params *VAR_5)
{
 struct bnx2x *VAR_6 = VAR_5->bp;

 FUNC_0(VAR_3, "Configure WC for LPI pass through\n");
 FUNC_2(VAR_6, VAR_4, VAR_0,
    VAR_2, 0x7c);
 FUNC_1(VAR_6, VAR_4, VAR_0,
     VAR_1, 0xc000);
}
