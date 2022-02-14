
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct link_vars {int link_attr_sync; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_reg_set {int member_2; int val; int reg; int devad; int member_1; int const member_0; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 size_t FUNC_0 (struct bnx2x_reg_set*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int const,int ,int) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int ) ;
 int FUNC_4 (struct link_params*,int ) ;

__attribute__((used)) static void FUNC_5(struct bnx2x_phy *VAR_3,
      struct link_params *VAR_4,
      struct link_vars *VAR_5)
{
 struct bnx2x *VAR_6 = VAR_4->bp;
 u16 VAR_7;
 static struct bnx2x_reg_set VAR_8[] = {

  {143, 136, 0xa157},
  {143, 134, 0xcbe2},
  {143, 135, 0x7537},
  {143, 133, 0xa157},
  {143, 137, 0xcbe2},
  {143, 138, 0x7537},

  {143, 139, 0x000a},
  {143, 141, 0x6400},
  {143, 140, 0x0620},
  {143, 142, 0x0157},
  {143, 130, 0x6464},
  {143, 129, 0x3150},
  {143, 128, 0x3150},
  {143, 132, 0x0157},
  {143, 131, 0x0620}
 };
 FUNC_1(VAR_2, "Enabling 20G-KR2\n");

 FUNC_2(VAR_6, VAR_3, 143,
     VAR_1, (3<<6));

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_8); VAR_7++)
  FUNC_3(VAR_6, VAR_3, VAR_8[VAR_7].devad, VAR_8[VAR_7].reg,
     VAR_8[VAR_7].val);


 VAR_5->link_attr_sync |= VAR_0;
 FUNC_4(VAR_4, VAR_5->link_attr_sync);
}
