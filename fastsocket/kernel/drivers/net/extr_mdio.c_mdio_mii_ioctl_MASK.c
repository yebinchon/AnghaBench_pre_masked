
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_ioctl_data {int reg_num; int phy_id; int val_out; int val_in; } ;
struct mdio_if_info {int prtad; int mode_support; int mmds; int (* mdio_read ) (int ,int,int,int) ;int (* mdio_write ) (int ,int,int,int,int ) ;int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,int,int) ;
 int FUNC_5 (int ,int,int,int,int ) ;

int FUNC_6(const struct mdio_if_info *VAR_11,
     struct mii_ioctl_data *VAR_12, int VAR_13)
{
 int VAR_14, VAR_15;
 u16 VAR_16 = VAR_12->reg_num;


 switch (VAR_13) {
 case 130:
  if (VAR_11->prtad == VAR_8)
   return -VAR_1;
  VAR_12->phy_id = VAR_11->prtad;
  VAR_13 = 129;
  break;
 case 129:
 case 128:
  break;
 default:
  return -VAR_1;
 }


 if ((VAR_11->mode_support & VAR_10) &&
     FUNC_2(VAR_12->phy_id)) {
  VAR_14 = FUNC_3(VAR_12->phy_id);
  VAR_15 = FUNC_1(VAR_12->phy_id);
 } else if ((VAR_11->mode_support & VAR_9) &&
     VAR_12->phy_id < 0x20) {
  VAR_14 = VAR_12->phy_id;
  VAR_15 = VAR_4;
  VAR_16 &= 0x1f;
 } else if ((VAR_11->mode_support & VAR_6) &&
     VAR_11->prtad != VAR_8 &&
     VAR_12->phy_id == VAR_11->prtad) {

  VAR_14 = VAR_11->prtad;
  switch (VAR_16) {
  case 135:
  case 134:
  case 132:
  case 131:
   VAR_15 = FUNC_0(VAR_11->mmds);
   break;
  case 136:
  case 133:
   if (!(VAR_11->mmds & VAR_5))
    return -VAR_0;
   VAR_15 = VAR_7;
   if (VAR_16 == 136)
    VAR_16 = VAR_2;
   else
    VAR_16 = VAR_3;
   break;
  default:
   return -VAR_0;
  }
 } else {
  return -VAR_0;
 }

 if (VAR_13 == 129) {
  int VAR_17 = VAR_11->mdio_read(VAR_11->dev, VAR_14, VAR_15, VAR_16);
  if (VAR_17 < 0)
   return VAR_17;
  VAR_12->val_out = VAR_17;
  return 0;
 } else {
  return VAR_11->mdio_write(VAR_11->dev, VAR_14, VAR_15, VAR_16,
     VAR_12->val_in);
 }
}
