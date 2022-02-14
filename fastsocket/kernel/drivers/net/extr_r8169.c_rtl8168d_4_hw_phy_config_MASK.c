
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct phy_reg {int member_0; int member_1; } ;


 int FUNC_0 (struct phy_reg const*) ;
 int FUNC_1 (struct rtl8169_private*,int,int) ;
 int FUNC_2 (struct rtl8169_private*,struct phy_reg const*,int ) ;

__attribute__((used)) static void FUNC_3(struct rtl8169_private *VAR_0)
{
 static const struct phy_reg VAR_1[] = {
  { 0x1f, 0x0001 },
  { 0x17, 0x0cc0 },

  { 0x1f, 0x0007 },
  { 0x1e, 0x002d },
  { 0x18, 0x0040 },
  { 0x1f, 0x0000 }
 };

 FUNC_2(VAR_0, VAR_1, FUNC_0(VAR_1));
 FUNC_1(VAR_0, 0x0d, 1 << 5);
}
