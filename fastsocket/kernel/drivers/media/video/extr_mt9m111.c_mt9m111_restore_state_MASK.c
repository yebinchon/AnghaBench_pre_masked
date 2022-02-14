
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt9m111 {int autowhitebalance; int autoexposure; int gain; int vflip; int hflip; int rect; TYPE_1__* fmt; int context; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 struct mt9m111* FUNC_7 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_2)
{
 struct mt9m111 *VAR_3 = FUNC_7(VAR_2);

 FUNC_2(VAR_2, VAR_3->context);
 FUNC_5(VAR_2, VAR_3->fmt->code);
 FUNC_6(VAR_2, &VAR_3->rect);
 FUNC_3(VAR_2, VAR_3->hflip, VAR_0);
 FUNC_3(VAR_2, VAR_3->vflip, VAR_1);
 FUNC_4(VAR_2, VAR_3->gain);
 FUNC_0(VAR_2, VAR_3->autoexposure);
 FUNC_1(VAR_2, VAR_3->autowhitebalance);
 return 0;
}
