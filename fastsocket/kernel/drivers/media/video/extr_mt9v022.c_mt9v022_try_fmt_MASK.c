
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int colorspace; int code; int height; int width; } ;
struct mt9v022_datafmt {int colorspace; int code; } ;
struct mt9v022 {struct mt9v022_datafmt* fmt; int num_fmts; int fmts; scalar_t__ y_skip_top; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mt9v022_datafmt* FUNC_0 (int ,int ,int ) ;
 struct mt9v022* FUNC_1 (struct i2c_client*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int *,int ,int ,int,int *,scalar_t__,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_6,
      struct v4l2_mbus_framefmt *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_2(VAR_6);
 struct mt9v022 *VAR_9 = FUNC_1(VAR_8);
 const struct mt9v022_datafmt *VAR_10;
 int VAR_11 = VAR_7->code == VAR_5 ||
  VAR_7->code == VAR_4;

 FUNC_3(&VAR_7->width, VAR_3,
  VAR_1, VAR_11,
  &VAR_7->height, VAR_2 + VAR_9->y_skip_top,
  VAR_0 + VAR_9->y_skip_top, VAR_11, 0);

 VAR_10 = FUNC_0(VAR_7->code, VAR_9->fmts,
       VAR_9->num_fmts);
 if (!VAR_10) {
  VAR_10 = VAR_9->fmt;
  VAR_7->code = VAR_10->code;
 }

 VAR_7->colorspace = VAR_10->colorspace;

 return 0;
}
