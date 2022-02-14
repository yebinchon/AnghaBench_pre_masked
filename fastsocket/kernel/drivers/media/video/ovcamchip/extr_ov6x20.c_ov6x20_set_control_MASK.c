
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovcamchip_control {int value; int id; } ;
struct ovcamchip {struct ov6x20* spriv; } ;
struct ov6x20 {int bandfilt; int auto_brt; int auto_exp; int backlight; int mirror; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int,int *,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ovcamchip* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 int FUNC_3 (struct i2c_client*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_7,
         struct ovcamchip_control *VAR_8)
{
 struct ovcamchip *VAR_9 = FUNC_1(VAR_7);
 struct ov6x20 *VAR_10 = VAR_9->spriv;
 int VAR_11;
 int VAR_12 = VAR_8->value;

 switch (VAR_8->id) {
 case 133:
  VAR_11 = FUNC_2(VAR_7, VAR_3, VAR_12 >> 8);
  break;
 case 134:
  VAR_11 = FUNC_2(VAR_7, VAR_2, VAR_12 >> 8);
  break;
 case 128:
  VAR_11 = FUNC_2(VAR_7, VAR_6, VAR_12 >> 8);
  break;
 case 130:
  VAR_11 = FUNC_2(VAR_7, VAR_5, 0xFF - (VAR_12 >> 8));
  if (VAR_11 < 0)
   goto out;

  VAR_11 = FUNC_2(VAR_7, VAR_1, VAR_12 >> 8);
  break;
 case 132:
  VAR_11 = FUNC_2(VAR_7, VAR_4, VAR_12);
  break;
 case 131:
 {
  int VAR_13 = (VAR_12 == 60);

  VAR_11 = FUNC_2(VAR_7, 0x2b, VAR_13?0xa8:0x28);
  if (VAR_11 < 0)
   goto out;

  VAR_11 = FUNC_2(VAR_7, 0x2a, VAR_13?0x84:0xa4);
  break;
 }
 case 135:
  VAR_11 = FUNC_3(VAR_7, 0x2d, VAR_12?0x04:0x00, 0x04);
  VAR_10->bandfilt = VAR_12;
  break;
 case 138:
  VAR_11 = FUNC_3(VAR_7, 0x2d, VAR_12?0x10:0x00, 0x10);
  VAR_10->auto_brt = VAR_12;
  break;
 case 137:
  VAR_11 = FUNC_3(VAR_7, 0x13, VAR_12?0x01:0x00, 0x01);
  VAR_10->auto_exp = VAR_12;
  break;
 case 136:
 {
  VAR_11 = FUNC_3(VAR_7, 0x4e, VAR_12?0xe0:0xc0, 0xe0);
  if (VAR_11 < 0)
   goto out;

  VAR_11 = FUNC_3(VAR_7, 0x29, VAR_12?0x08:0x00, 0x08);
  if (VAR_11 < 0)
   goto out;

  VAR_11 = FUNC_3(VAR_7, 0x0e, VAR_12?0x80:0x00, 0x80);
  VAR_10->backlight = VAR_12;
  break;
 }
 case 129:
  VAR_11 = FUNC_3(VAR_7, 0x12, VAR_12?0x40:0x00, 0x40);
  VAR_10->mirror = VAR_12;
  break;
 default:
  FUNC_0(2, &VAR_7->dev, "control not supported: %d", VAR_8->id);
  return -VAR_0;
 }

out:
 FUNC_0(3, &VAR_7->dev, "id=%d, arg=%d, rc=%d", VAR_8->id, VAR_12, VAR_11);
 return VAR_11;
}
