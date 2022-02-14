
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct phy_reg {int member_0; int member_1; } ;


 int FUNC_0 (struct phy_reg const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtl8169_private*) ;
 int FUNC_3 (struct rtl8169_private*,int,int ,int,int ) ;
 int FUNC_4 (struct rtl8169_private*,int,int) ;
 int FUNC_5 (struct rtl8169_private*,struct phy_reg const*,int ) ;

__attribute__((used)) static void FUNC_6(struct rtl8169_private *VAR_2)
{
 static const struct phy_reg VAR_3[] = {
  { 0x1f, 0x0004 },
  { 0x10, 0xc07f },
  { 0x19, 0x7030 },
  { 0x1f, 0x0000 }
 };


 FUNC_4(VAR_2, 0x1f, 0x0000);
 FUNC_4(VAR_2, 0x18, 0x0310);
 FUNC_1(100);

 FUNC_2(VAR_2);

 FUNC_3(VAR_2, 0x1b0, VAR_1, 0x0000, VAR_0);
 FUNC_5(VAR_2, VAR_3, FUNC_0(VAR_3));

 FUNC_3(VAR_2, 0x1d0, VAR_1, 0x0000, VAR_0);
}
