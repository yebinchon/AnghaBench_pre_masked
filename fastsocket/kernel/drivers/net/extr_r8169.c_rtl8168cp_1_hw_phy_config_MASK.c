
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct phy_reg {int member_0; int member_1; } ;


 int FUNC_0 (struct phy_reg const*) ;
 int FUNC_1 (struct rtl8169_private*,struct phy_reg const*,int ) ;

__attribute__((used)) static void FUNC_2(struct rtl8169_private *VAR_0)
{
 static const struct phy_reg VAR_1[] = {
  { 0x1f, 0x0000 },
  { 0x1d, 0x0f00 },
  { 0x1f, 0x0002 },
  { 0x0c, 0x1ec8 },
  { 0x1f, 0x0000 }
 };

 FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_1));
}
