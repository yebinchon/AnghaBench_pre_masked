
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct ephy_info {int member_0; int member_1; int member_2; } ;


 int FUNC_0 (struct ephy_info const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rtl8169_private*,struct ephy_info const*,int ) ;
 int FUNC_2 (struct rtl8169_private*) ;
 int FUNC_3 (struct rtl8169_private*,int,int ,int,int,int ) ;

__attribute__((used)) static void FUNC_4(struct rtl8169_private *VAR_2)
{
 static const struct ephy_info VAR_3[] = {
  { 0x06, 0x00c0, 0x0020 },
  { 0x0f, 0xffff, 0x5200 },
  { 0x1e, 0x0000, 0x4000 },
  { 0x19, 0x0000, 0x0224 }
 };

 FUNC_2(VAR_2);

 FUNC_1(VAR_2, VAR_3, FUNC_0(VAR_3));

 FUNC_3(VAR_2, 0x0d4, VAR_1, 0x0c00, 0x0000, VAR_0);
}
