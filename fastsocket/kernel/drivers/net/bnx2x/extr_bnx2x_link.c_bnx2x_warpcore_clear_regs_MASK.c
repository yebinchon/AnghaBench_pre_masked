
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_reg_set {int member_2; int val; scalar_t__ reg; int const devad; int member_1; int const member_0; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 size_t FUNC_0 (struct bnx2x_reg_set*) ;
 int VAR_0 ;




 scalar_t__ VAR_1 ;

 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int const,int ,int) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int const,scalar_t__,int) ;
 size_t FUNC_3 (struct bnx2x_phy*,struct link_params*) ;

__attribute__((used)) static void FUNC_4(struct bnx2x_phy *VAR_2,
          struct link_params *VAR_3,
          u16 VAR_4)
{
 struct bnx2x *VAR_5 = VAR_3->bp;
 u16 VAR_6;
 static struct bnx2x_reg_set VAR_7[] = {
  {140, 139, 0},
  {138, 135, 0x014a},
  {138, 134, 0x0800},
  {138, 136, 0x8008},
  {138, 132,
   0x0195},
  {138, 131,
   0x0007},
  {138, 130,
   0x0002},
  {138, 129, 0x6000},
  {138, 128, 0x0000},
  {138, 133, 0x2040},
  {138, 137, 0x0140}
 };

 FUNC_1(VAR_5, VAR_2, 138,
     VAR_0, (3<<13));

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_7); VAR_6++)
  FUNC_2(VAR_5, VAR_2, VAR_7[VAR_6].devad, VAR_7[VAR_6].reg,
     VAR_7[VAR_6].val);

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 FUNC_2(VAR_5, VAR_2, 138,
    VAR_1 + 0x10*VAR_4, 0x0990);

}
