
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x_phy {int def_md_devad; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct bnx2x*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct bnx2x_phy *VAR_2,
         struct link_params *VAR_3,
         u32 VAR_4)
{
 struct bnx2x *VAR_5 = VAR_3->bp;
 switch (VAR_4) {
 case 128:

  FUNC_0(VAR_5, VAR_1 + VAR_3->port*0x18, 0);
  FUNC_0(VAR_5, VAR_0 + VAR_3->port*0x18,
         VAR_2->def_md_devad);
  break;
 }
}
