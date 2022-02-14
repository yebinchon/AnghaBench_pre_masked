
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnx2x_reg_set {int member_1; int member_2; int val; int reg; int const devad; int const member_0; } ;
struct bnx2x_phy {scalar_t__ type; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x_reg_set*) ;






 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int const,int ,int*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int const,int,int ) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int const,int ,int) ;

__attribute__((used)) static void FUNC_4(struct bnx2x *VAR_6,
    struct bnx2x_phy *VAR_7)
{
 u16 VAR_8, VAR_9, VAR_10;
 static struct bnx2x_reg_set VAR_11[] = {
  {134, 133, 0x0080},
  {134, 132, 0x0018},
  {134, 130, 0x0006},
  {134, 131, 0x0000},
  {134, 128,
   129},
  {135, 0xFFFB, 0xFFFD}
 };

 FUNC_1(VAR_6, VAR_7,
   134,
   VAR_0, &VAR_8);
 VAR_8 &= 0xFE00;
 VAR_8 |= 0x0092;

 FUNC_3(VAR_6, VAR_7,
    134,
    VAR_0, VAR_8);

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_11); VAR_10++)
  FUNC_3(VAR_6, VAR_7, VAR_11[VAR_10].devad, VAR_11[VAR_10].reg,
     VAR_11[VAR_10].val);

 if ((VAR_7->type == VAR_4) ||
     (VAR_7->type == VAR_5))
  VAR_9 = VAR_3;
 else
  VAR_9 = VAR_1;


 FUNC_2(VAR_6, VAR_7,
     134, VAR_9,
     VAR_2);
}
