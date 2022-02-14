
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ovcamchip {struct ov6x20* spriv; } ;
struct ov6x20 {int auto_brt; int auto_exp; } ;
struct i2c_client {int dev; TYPE_1__* adapter; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int,int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (int *,char*) ;
 struct ovcamchip* FUNC_2 (struct i2c_client*) ;
 struct ov6x20* FUNC_3 (int,int ) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_5)
{
 struct ovcamchip *VAR_6 = FUNC_2(VAR_5);
 struct ov6x20 *VAR_7;
 int VAR_8;

 FUNC_0(4, &VAR_5->dev, "entered");

 switch (VAR_5->adapter->id) {
 case 129:
  VAR_8 = FUNC_4(VAR_5, VAR_3);
  break;
 case 128:
  VAR_8 = FUNC_4(VAR_5, VAR_4);
  break;
 default:
  FUNC_1(&VAR_5->dev, "ov6x20: Unsupported adapter\n");
  VAR_8 = -VAR_0;
 }

 if (VAR_8 < 0)
  return VAR_8;

 VAR_6->spriv = VAR_7 = FUNC_3(sizeof *VAR_7, VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->auto_brt = 1;
 VAR_7->auto_exp = 1;

 return VAR_8;
}
