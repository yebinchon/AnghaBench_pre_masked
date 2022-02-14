
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct phy_reg {int member_0; int member_1; } ;


 int FUNC_0 (struct phy_reg const*) ;
 int FUNC_1 (struct rtl8169_private*) ;
 int FUNC_2 (struct rtl8169_private*) ;
 int FUNC_3 (struct rtl8169_private*,int,int,int) ;
 int FUNC_4 (struct rtl8169_private*,int,int) ;
 int FUNC_5 (struct rtl8169_private*,struct phy_reg const*,int ) ;

__attribute__((used)) static void FUNC_6(struct rtl8169_private *VAR_0)
{
 static const struct phy_reg VAR_1[] = {

  { 0x1f, 0x0003 },
  { 0x09, 0xa20f },
  { 0x1f, 0x0000 },


  { 0x1f, 0x0005 },
  { 0x05, 0x8b55 },
  { 0x06, 0x0000 },
  { 0x05, 0x8b5e },
  { 0x06, 0x0000 },
  { 0x05, 0x8b67 },
  { 0x06, 0x0000 },
  { 0x05, 0x8b70 },
  { 0x06, 0x0000 },
  { 0x1f, 0x0000 },
  { 0x1f, 0x0007 },
  { 0x1e, 0x0078 },
  { 0x17, 0x0000 },
  { 0x19, 0x00fb },
  { 0x1f, 0x0000 },


  { 0x1f, 0x0005 },
  { 0x05, 0x8b79 },
  { 0x06, 0xaa00 },
  { 0x1f, 0x0000 },


  { 0x1f, 0x0003 },
  { 0x01, 0x328a },
  { 0x1f, 0x0000 }
 };

 FUNC_2(VAR_0);

 FUNC_5(VAR_0, VAR_1, FUNC_0(VAR_1));

 FUNC_1(VAR_0);


 FUNC_4(VAR_0, 0x1f, 0x0005);
 FUNC_4(VAR_0, 0x05, 0x8b85);
 FUNC_3(VAR_0, 0x06, 0x4000, 0x0000);
 FUNC_4(VAR_0, 0x1f, 0x0000);
}
