
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int colorspace; int code; scalar_t__ height; int width; } ;
struct mt9m001_datafmt {int colorspace; int code; } ;
struct mt9m001 {scalar_t__ fmts; struct mt9m001_datafmt* fmt; int num_fmts; scalar_t__ y_skip_top; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct mt9m001_datafmt* FUNC_1 (int ,scalar_t__,int ) ;
 struct mt9m001* FUNC_2 (struct i2c_client*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int *,int ,int ,int,scalar_t__*,scalar_t__,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_5,
      struct v4l2_mbus_framefmt *VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_3(VAR_5);
 struct mt9m001 *VAR_8 = FUNC_2(VAR_7);
 const struct mt9m001_datafmt *VAR_9;

 FUNC_4(&VAR_6->width, VAR_3,
  VAR_1, 1,
  &VAR_6->height, VAR_2 + VAR_8->y_skip_top,
  VAR_0 + VAR_8->y_skip_top, 0, 0);

 if (VAR_8->fmts == VAR_4)
  VAR_6->height = FUNC_0(VAR_6->height - 1, 2);

 VAR_9 = FUNC_1(VAR_6->code, VAR_8->fmts,
       VAR_8->num_fmts);
 if (!VAR_9) {
  VAR_9 = VAR_8->fmt;
  VAR_6->code = VAR_9->code;
 }

 VAR_6->colorspace = VAR_9->colorspace;

 return 0;
}
