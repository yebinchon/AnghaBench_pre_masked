
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_crop {int type; int c; } ;
struct mt9m001 {int rect; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct mt9m001* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, struct v4l2_crop *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_1(VAR_1);
 struct mt9m001 *VAR_4 = FUNC_0(VAR_3);

 VAR_2->c = VAR_4->rect;
 VAR_2->type = VAR_0;

 return 0;
}
