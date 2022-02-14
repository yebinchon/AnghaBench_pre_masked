
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int height; int width; } ;
struct v4l2_mbus_framefmt {int colorspace; int code; int height; int width; } ;
struct mt9t031 {struct v4l2_rect rect; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*,struct v4l2_rect*,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 struct mt9t031* FUNC_2 (struct i2c_client*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_4,
    struct v4l2_mbus_framefmt *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_3(VAR_4);
 struct mt9t031 *VAR_7 = FUNC_2(VAR_6);
 u16 VAR_8, VAR_9;
 struct v4l2_rect VAR_10 = VAR_7->rect;





 VAR_8 = FUNC_1(&VAR_10.width, VAR_5->width, VAR_1);
 VAR_9 = FUNC_1(&VAR_10.height, VAR_5->height, VAR_0);

 VAR_5->code = VAR_3;
 VAR_5->colorspace = VAR_2;


 return FUNC_0(VAR_6, &VAR_10, VAR_8, VAR_9);
}
