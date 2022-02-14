
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_fw_phy_action {size_t size; int * code; } ;
struct rtl8169_private {int dev; } ;
struct net_device {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rtl8169_private*,int ,int ,char*,...) ;

__attribute__((used)) static bool FUNC_2(struct rtl8169_private *VAR_1, struct net_device *VAR_2,
      struct rtl_fw_phy_action *VAR_3)
{
 bool VAR_4 = 0;
 size_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->size; VAR_5++) {
  u32 VAR_6 = FUNC_0(VAR_3->code[VAR_5]);
  u32 VAR_7 = (VAR_6 & 0x0fff0000) >> 16;

  switch(VAR_6 & 0xf0000000) {
  case 136:
  case 138:
  case 139:
  case 134:
  case 142:
  case 131:
  case 128:
  case 137:
   break;

  case 143:
   if (VAR_7 > VAR_5) {
    FUNC_1(VAR_1, VAR_0, VAR_1->dev,
       "Out of range of firmware\n");
    goto out;
   }
   break;
  case 135:
   if (VAR_5 + 2 >= VAR_3->size) {
    FUNC_1(VAR_1, VAR_0, VAR_1->dev,
       "Out of range of firmware\n");
    goto out;
   }
   break;
  case 141:
  case 140:
  case 132:
   if (VAR_5 + 1 + VAR_7 >= VAR_3->size) {
    FUNC_1(VAR_1, VAR_0, VAR_1->dev,
       "Out of range of firmware\n");
    goto out;
   }
   break;

  case 133:
  case 129:
  case 130:
  default:
   FUNC_1(VAR_1, VAR_0, VAR_1->dev,
      "Invalid action 0x%08x\n", VAR_6);
   goto out;
  }
 }
 VAR_4 = 1;
out:
 return VAR_4;
}
