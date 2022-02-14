
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovcamchip {struct ov7x20* spriv; scalar_t__ mono; } ;
struct ov7x20 {int auto_brt; int auto_gain; int auto_exp; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int,int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ovcamchip* FUNC_1 (struct i2c_client*) ;
 struct ov7x20* FUNC_2 (int,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_6)
{
 struct ovcamchip *VAR_7 = FUNC_1(VAR_6);
 struct ov7x20 *VAR_8;
 int VAR_9;

 FUNC_0(4, &VAR_6->dev, "entered");

 if (VAR_7->mono)
  VAR_9 = FUNC_3(VAR_6, VAR_4);
 else
  VAR_9 = FUNC_3(VAR_6, VAR_5);

 if (VAR_9 < 0)
  return VAR_9;

 VAR_7->spriv = VAR_8 = FUNC_2(sizeof *VAR_8, VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->auto_brt = 1;
 VAR_8->auto_exp = VAR_0;
 VAR_8->auto_gain = VAR_1;

 return 0;
}
