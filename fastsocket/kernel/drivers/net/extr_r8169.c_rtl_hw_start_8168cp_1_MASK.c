
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct ephy_info {int member_0; int member_1; int member_2; } ;


 int FUNC_0 (struct ephy_info const*) ;
 int FUNC_1 (struct rtl8169_private*) ;
 int FUNC_2 (struct rtl8169_private*) ;
 int FUNC_3 (struct rtl8169_private*,struct ephy_info const*,int ) ;

__attribute__((used)) static void FUNC_4(struct rtl8169_private *VAR_0)
{
 static const struct ephy_info VAR_1[] = {
  { 0x01, 0, 0x0001 },
  { 0x02, 0x0800, 0x1000 },
  { 0x03, 0, 0x0042 },
  { 0x06, 0x0080, 0x0000 },
  { 0x07, 0, 0x2000 }
 };

 FUNC_2(VAR_0);

 FUNC_3(VAR_0, VAR_1, FUNC_0(VAR_1));

 FUNC_1(VAR_0);
}
