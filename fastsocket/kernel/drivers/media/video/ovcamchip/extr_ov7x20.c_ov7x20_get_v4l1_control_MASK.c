
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovcamchip_control {int id; int value; } ;
struct ovcamchip {struct ov7x20* spriv; } ;
struct ov7x20 {unsigned char bandfilt; unsigned char auto_brt; unsigned char auto_exp; unsigned char backlight; unsigned char mirror; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int,int *,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ovcamchip* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,int,unsigned char) ;
 int FUNC_3 (struct i2c_client*,int,unsigned char*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_5,
       struct ovcamchip_control *VAR_6)
{
 struct ovcamchip *VAR_7 = FUNC_1(VAR_5);
 struct ov7x20 *VAR_8 = VAR_7->spriv;
 int VAR_9 = 0;
 unsigned char VAR_10 = 0;

 switch (VAR_6->id) {
 case 131:
  VAR_9 = FUNC_3(VAR_5, 0x64, &VAR_10);
  VAR_6->value = FUNC_2(VAR_4, 16, VAR_10) << 12;
  break;
 case 132:
  VAR_9 = FUNC_3(VAR_5, VAR_1, &VAR_10);
  VAR_6->value = VAR_10 << 8;
  break;
 case 128:
  VAR_9 = FUNC_3(VAR_5, VAR_3, &VAR_10);
  VAR_6->value = VAR_10 << 8;
  break;
 case 130:
  VAR_9 = FUNC_3(VAR_5, VAR_2, &VAR_10);
  VAR_6->value = VAR_10;
  break;
 case 133:
  VAR_6->value = VAR_8->bandfilt;
  break;
 case 136:
  VAR_6->value = VAR_8->auto_brt;
  break;
 case 135:
  VAR_6->value = VAR_8->auto_exp;
  break;
 case 134:
  VAR_6->value = VAR_8->backlight;
  break;
 case 129:
  VAR_6->value = VAR_8->mirror;
  break;
 default:
  FUNC_0(2, &VAR_5->dev, "control not supported: %d", VAR_6->id);
  return -VAR_0;
 }

 FUNC_0(3, &VAR_5->dev, "id=%d, arg=%d, rc=%d", VAR_6->id, VAR_6->value, VAR_9);
 return VAR_9;
}
