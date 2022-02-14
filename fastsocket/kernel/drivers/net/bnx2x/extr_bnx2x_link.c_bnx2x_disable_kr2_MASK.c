
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_vars {int check_kr2_recovery_cnt; int link_attr_sync; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_reg_set {int member_2; int val; int reg; int devad; int member_1; int const member_0; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x_reg_set*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int ) ;
 int FUNC_3 (struct link_params*,int ) ;

__attribute__((used)) static void FUNC_4(struct link_params *VAR_3,
         struct link_vars *VAR_4,
         struct bnx2x_phy *VAR_5)
{
 struct bnx2x *VAR_6 = VAR_3->bp;
 int VAR_7;
 static struct bnx2x_reg_set VAR_8[] = {

  {143, 136, 0x7690},
  {143, 134, 0xe647},
  {143, 135, 0xc4f0},
  {143, 133, 0x7690},
  {143, 137, 0xe647},
  {143, 138, 0xc4f0},
  {143, 139, 0x000c},
  {143, 141, 0x6000},
  {143, 140, 0x0000},
  {143, 142, 0x0002},
  {143, 130, 0x0000},
  {143, 129, 0x0af7},
  {143, 128, 0x0af7},
  {143, 132, 0x0002},
  {143, 131, 0x0000}
 };
 FUNC_1(VAR_2, "Disabling 20G-KR2\n");

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_8); VAR_7++)
  FUNC_2(VAR_6, VAR_5, VAR_8[VAR_7].devad, VAR_8[VAR_7].reg,
     VAR_8[VAR_7].val);
 VAR_4->link_attr_sync &= ~VAR_1;
 FUNC_3(VAR_3, VAR_4->link_attr_sync);

 VAR_4->check_kr2_recovery_cnt = VAR_0;
}
