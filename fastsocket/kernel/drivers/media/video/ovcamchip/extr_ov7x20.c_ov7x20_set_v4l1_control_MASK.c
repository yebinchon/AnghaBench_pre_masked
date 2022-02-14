
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovcamchip_control {int value; int id; } ;
struct ovcamchip {struct ov7x20* spriv; } ;
struct ov7x20 {int auto_brt; int auto_exp; int bandfilt; int backlight; int mirror; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int,int *,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 struct ovcamchip* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 int FUNC_3 (struct i2c_client*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_6,
       struct ovcamchip_control *VAR_7)
{
 struct ovcamchip *VAR_8 = FUNC_1(VAR_6);
 struct ov7x20 *VAR_9 = VAR_8->spriv;
 int VAR_10;
 int VAR_11 = VAR_7->value;

 switch (VAR_7->id) {
 case 132:
 {

  VAR_10 = FUNC_2(VAR_6, 0x64, VAR_5[VAR_11 >> 12]);
  break;
 }
 case 133:

  if (!VAR_9->auto_brt)
   VAR_10 = FUNC_2(VAR_6, VAR_2, VAR_11 >> 8);
  else
   VAR_10 = 0;
  break;
 case 128:
  VAR_10 = FUNC_2(VAR_6, VAR_4, VAR_11 >> 8);
  break;
 case 131:
  if (!VAR_9->auto_exp)
   VAR_10 = FUNC_2(VAR_6, VAR_3, VAR_11);
  else
   VAR_10 = -VAR_0;
  break;
 case 130:
 {
  int VAR_12 = (VAR_11 == 60);

  VAR_10 = FUNC_3(VAR_6, 0x2a, VAR_12?0x00:0x80, 0x80);
  if (VAR_10 < 0)
   goto out;

  VAR_10 = FUNC_2(VAR_6, 0x2b, VAR_12?0x00:0xac);
  if (VAR_10 < 0)
   goto out;

  VAR_10 = FUNC_3(VAR_6, 0x76, 0x01, 0x01);
  break;
 }
 case 134:
  VAR_10 = FUNC_3(VAR_6, 0x2d, VAR_11?0x04:0x00, 0x04);
  VAR_9->bandfilt = VAR_11;
  break;
 case 137:
  VAR_10 = FUNC_3(VAR_6, 0x2d, VAR_11?0x10:0x00, 0x10);
  VAR_9->auto_brt = VAR_11;
  break;
 case 136:
  VAR_10 = FUNC_3(VAR_6, 0x13, VAR_11?0x01:0x00, 0x01);
  VAR_9->auto_exp = VAR_11;
  break;
 case 135:
 {
  VAR_10 = FUNC_3(VAR_6, 0x68, VAR_11?0xe0:0xc0, 0xe0);
  if (VAR_10 < 0)
   goto out;

  VAR_10 = FUNC_3(VAR_6, 0x29, VAR_11?0x08:0x00, 0x08);
  if (VAR_10 < 0)
   goto out;

  VAR_10 = FUNC_3(VAR_6, 0x28, VAR_11?0x02:0x00, 0x02);
  VAR_9->backlight = VAR_11;
  break;
 }
 case 129:
  VAR_10 = FUNC_3(VAR_6, 0x12, VAR_11?0x40:0x00, 0x40);
  VAR_9->mirror = VAR_11;
  break;
 default:
  FUNC_0(2, &VAR_6->dev, "control not supported: %d", VAR_7->id);
  return -VAR_1;
 }

out:
 FUNC_0(3, &VAR_6->dev, "id=%d, arg=%d, rc=%d", VAR_7->id, VAR_11, VAR_10);
 return VAR_10;
}
