
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int width; int colorspace; int code; } ;
struct mt9m111_datafmt {int colorspace; int code; } ;
struct mt9m111 {struct mt9m111_datafmt* fmt; } ;
struct i2c_client {int dummy; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mt9m111_datafmt* FUNC_2 (int ,int ,int ) ;
 struct mt9m111* FUNC_3 (struct i2c_client*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_5,
      struct v4l2_mbus_framefmt *VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_4(VAR_5);
 struct mt9m111 *VAR_8 = FUNC_3(VAR_7);
 const struct mt9m111_datafmt *VAR_9;
 bool VAR_10 = VAR_6->code == VAR_3 ||
  VAR_6->code == VAR_2;

 VAR_9 = FUNC_2(VAR_6->code, VAR_4,
       FUNC_1(VAR_4));
 if (!VAR_9) {
  VAR_9 = VAR_8->fmt;
  VAR_6->code = VAR_9->code;
 }






 if (VAR_6->height > VAR_0)
  VAR_6->height = VAR_0;
 else if (VAR_6->height < 2)
  VAR_6->height = 2;
 else if (VAR_10)
  VAR_6->height = FUNC_0(VAR_6->height, 2);

 if (VAR_6->width > VAR_1)
  VAR_6->width = VAR_1;
 else if (VAR_6->width < 2)
  VAR_6->width = 2;
 else if (VAR_10)
  VAR_6->width = FUNC_0(VAR_6->width, 2);

 VAR_6->colorspace = VAR_9->colorspace;

 return 0;
}
