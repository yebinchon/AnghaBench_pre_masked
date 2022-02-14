
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_fw_phy_action {size_t size; int * code; } ;
struct rtl_fw {struct rtl_fw_phy_action phy_action; } ;
struct rtl8169_private {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct rtl8169_private*,int) ;
 int FUNC_4 (struct rtl8169_private*,int) ;
 int FUNC_5 (struct rtl8169_private*,int,int) ;

__attribute__((used)) static void FUNC_6(struct rtl8169_private *VAR_0, struct rtl_fw *VAR_1)
{
 struct rtl_fw_phy_action *VAR_2 = &VAR_1->phy_action;
 u32 VAR_3, VAR_4;
 size_t VAR_5;

 VAR_3 = VAR_4 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2->size; ) {
  u32 VAR_6 = FUNC_1(VAR_2->code[VAR_5]);
  u32 VAR_7 = VAR_6 & 0x0000ffff;
  u32 VAR_8 = (VAR_6 & 0x0fff0000) >> 16;

  if (!VAR_6)
   break;

  switch(VAR_6 & 0xf0000000) {
  case 136:
   VAR_3 = FUNC_4(VAR_0, VAR_8);
   VAR_4++;
   VAR_5++;
   break;
  case 138:
   VAR_3 |= VAR_7;
   VAR_5++;
   break;
  case 139:
   VAR_3 &= VAR_7;
   VAR_5++;
   break;
  case 143:
   VAR_5 -= VAR_8;
   break;
  case 134:
   VAR_3 = FUNC_3(VAR_0, VAR_8);
   VAR_5++;
   break;
  case 142:
   VAR_4 = 0;
   VAR_5++;
   break;
  case 131:
   FUNC_5(VAR_0, VAR_8, VAR_7);
   VAR_5++;
   break;
  case 135:
   VAR_5 += (VAR_4 == VAR_7) ? 2 : 1;
   break;
  case 141:
   if (VAR_3 == VAR_7)
    VAR_5 += VAR_8;
   VAR_5++;
   break;
  case 140:
   if (VAR_3 != VAR_7)
    VAR_5 += VAR_8;
   VAR_5++;
   break;
  case 128:
   FUNC_5(VAR_0, VAR_8, VAR_3);
   VAR_5++;
   break;
  case 132:
   VAR_5 += VAR_8 + 1;
   break;
  case 137:
   FUNC_2(VAR_7);
   VAR_5++;
   break;

  case 133:
  case 129:
  case 130:
  default:
   FUNC_0();
  }
 }
}
