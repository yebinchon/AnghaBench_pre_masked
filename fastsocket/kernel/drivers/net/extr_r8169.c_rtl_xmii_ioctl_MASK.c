
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct mii_ioctl_data {int phy_id; int reg_num; int val_in; int val_out; } ;


 int VAR_0 ;



 int FUNC_0 (struct rtl8169_private*,int) ;
 int FUNC_1 (struct rtl8169_private*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct rtl8169_private *VAR_1,
     struct mii_ioctl_data *VAR_2, int VAR_3)
{
 switch (VAR_3) {
 case 130:
  VAR_2->phy_id = 32;
  return 0;

 case 129:
  VAR_2->val_out = FUNC_0(VAR_1, VAR_2->reg_num & 0x1f);
  return 0;

 case 128:
  FUNC_1(VAR_1, VAR_2->reg_num & 0x1f, VAR_2->val_in);
  return 0;
 }
 return -VAR_0;
}
