
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovcamchip_control {int value; int id; } ;
struct ovcamchip {struct ov76be* spriv; } ;
struct ov76be {int bandfilt; int auto_brt; int auto_exp; int mirror; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int,int *,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ovcamchip* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 int FUNC_3 (struct i2c_client*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4,
         struct ovcamchip_control *VAR_5)
{
 struct ovcamchip *VAR_6 = FUNC_1(VAR_4);
 struct ov76be *VAR_7 = VAR_6->spriv;
 int VAR_8;
 int VAR_9 = VAR_5->value;

 switch (VAR_5->id) {
 case 132:
  VAR_8 = FUNC_2(VAR_4, VAR_1, VAR_9 >> 8);
  break;
 case 128:
  VAR_8 = FUNC_2(VAR_4, VAR_3, VAR_9 >> 8);
  break;
 case 131:
  VAR_8 = FUNC_2(VAR_4, VAR_2, VAR_9);
  break;
 case 130:
 {
  int VAR_10 = (VAR_9 == 60);

  VAR_8 = FUNC_3(VAR_4, 0x2a, VAR_10?0x00:0x80, 0x80);
  if (VAR_8 < 0)
   goto out;

  VAR_8 = FUNC_2(VAR_4, 0x2b, VAR_10?0x00:0xac);
  if (VAR_8 < 0)
   goto out;

  VAR_8 = FUNC_3(VAR_4, 0x76, 0x01, 0x01);
  break;
 }
 case 133:
  VAR_8 = FUNC_3(VAR_4, 0x2d, VAR_9?0x04:0x00, 0x04);
  VAR_7->bandfilt = VAR_9;
  break;
 case 135:
  VAR_8 = FUNC_3(VAR_4, 0x2d, VAR_9?0x10:0x00, 0x10);
  VAR_7->auto_brt = VAR_9;
  break;
 case 134:
  VAR_8 = FUNC_3(VAR_4, 0x13, VAR_9?0x01:0x00, 0x01);
  VAR_7->auto_exp = VAR_9;
  break;
 case 129:
  VAR_8 = FUNC_3(VAR_4, 0x12, VAR_9?0x40:0x00, 0x40);
  VAR_7->mirror = VAR_9;
  break;
 default:
  FUNC_0(2, &VAR_4->dev, "control not supported: %d", VAR_5->id);
  return -VAR_0;
 }

out:
 FUNC_0(3, &VAR_4->dev, "id=%d, arg=%d, rc=%d", VAR_5->id, VAR_9, VAR_8);
 return VAR_8;
}
