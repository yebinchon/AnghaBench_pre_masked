
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovcamchip_control {int id; unsigned char value; } ;
struct ovcamchip {struct ov76be* spriv; } ;
struct ov76be {unsigned char bandfilt; unsigned char auto_brt; unsigned char auto_exp; unsigned char mirror; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int,int *,char*,int,...) ;
 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ovcamchip* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,unsigned char*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_4,
         struct ovcamchip_control *VAR_5)
{
 struct ovcamchip *VAR_6 = FUNC_1(VAR_4);
 struct ov76be *VAR_7 = VAR_6->spriv;
 int VAR_8 = 0;
 unsigned char VAR_9 = 0;

 switch (VAR_5->id) {
 case 131:
  VAR_8 = FUNC_2(VAR_4, VAR_1, &VAR_9);
  VAR_5->value = VAR_9 << 8;
  break;
 case 128:
  VAR_8 = FUNC_2(VAR_4, VAR_3, &VAR_9);
  VAR_5->value = VAR_9 << 8;
  break;
 case 130:
  VAR_8 = FUNC_2(VAR_4, VAR_2, &VAR_9);
  VAR_5->value = VAR_9;
  break;
 case 132:
  VAR_5->value = VAR_7->bandfilt;
  break;
 case 134:
  VAR_5->value = VAR_7->auto_brt;
  break;
 case 133:
  VAR_5->value = VAR_7->auto_exp;
  break;
 case 129:
  VAR_5->value = VAR_7->mirror;
  break;
 default:
  FUNC_0(2, &VAR_4->dev, "control not supported: %d", VAR_5->id);
  return -VAR_0;
 }

 FUNC_0(3, &VAR_4->dev, "id=%d, arg=%d, rc=%d", VAR_5->id, VAR_5->value, VAR_8);
 return VAR_8;
}
