
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovcamchip_control {int id; unsigned char value; } ;
struct ovcamchip {struct ov6x30* spriv; } ;
struct ov6x30 {unsigned char bandfilt; unsigned char auto_brt; unsigned char auto_exp; unsigned char backlight; unsigned char mirror; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int,int *,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ovcamchip* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,unsigned char*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_6,
         struct ovcamchip_control *VAR_7)
{
 struct ovcamchip *VAR_8 = FUNC_1(VAR_6);
 struct ov6x30 *VAR_9 = VAR_8->spriv;
 int VAR_10 = 0;
 unsigned char VAR_11 = 0;

 switch (VAR_7->id) {
 case 132:
  VAR_10 = FUNC_2(VAR_6, VAR_3, &VAR_11);
  VAR_7->value = (VAR_11 & 0x0f) << 12;
  break;
 case 133:
  VAR_10 = FUNC_2(VAR_6, VAR_2, &VAR_11);
  VAR_7->value = VAR_11 << 8;
  break;
 case 128:
  VAR_10 = FUNC_2(VAR_6, VAR_5, &VAR_11);
  VAR_7->value = VAR_11 << 8;
  break;
 case 130:
  VAR_10 = FUNC_2(VAR_6, VAR_1, &VAR_11);
  VAR_7->value = VAR_11 << 8;
  break;
 case 131:
  VAR_10 = FUNC_2(VAR_6, VAR_4, &VAR_11);
  VAR_7->value = VAR_11;
  break;
 case 134:
  VAR_7->value = VAR_9->bandfilt;
  break;
 case 137:
  VAR_7->value = VAR_9->auto_brt;
  break;
 case 136:
  VAR_7->value = VAR_9->auto_exp;
  break;
 case 135:
  VAR_7->value = VAR_9->backlight;
  break;
 case 129:
  VAR_7->value = VAR_9->mirror;
  break;
 default:
  FUNC_0(2, &VAR_6->dev, "control not supported: %d", VAR_7->id);
  return -VAR_0;
 }

 FUNC_0(3, &VAR_6->dev, "id=%d, arg=%d, rc=%d", VAR_7->id, VAR_7->value, VAR_10);
 return VAR_10;
}
