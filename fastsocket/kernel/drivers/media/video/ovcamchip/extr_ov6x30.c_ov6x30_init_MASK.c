
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovcamchip {struct ov6x30* spriv; } ;
struct ov6x30 {int auto_brt; int auto_exp; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int,int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ovcamchip* FUNC_1 (struct i2c_client*) ;
 struct ov6x30* FUNC_2 (int,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3)
{
 struct ovcamchip *VAR_4 = FUNC_1(VAR_3);
 struct ov6x30 *VAR_5;
 int VAR_6;

 FUNC_0(4, &VAR_3->dev, "entered");

 VAR_6 = FUNC_3(VAR_3, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4->spriv = VAR_5 = FUNC_2(sizeof *VAR_5, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->auto_brt = 1;
 VAR_5->auto_exp = 1;

 return VAR_6;
}
