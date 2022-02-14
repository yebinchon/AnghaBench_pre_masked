
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int width; int height; int left; int top; } ;
struct v4l2_crop {struct v4l2_rect c; } ;
struct mt9v022 {scalar_t__ fmts; int y_skip_top; struct v4l2_rect rect; } ;
struct i2c_client {int dev; } ;


 void* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int *,char*,int,int) ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (int*,int*,int ,int ,int ) ;
 struct mt9v022* FUNC_5 (struct i2c_client*) ;
 struct i2c_client* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_16, struct v4l2_crop *VAR_17)
{
 struct i2c_client *VAR_18 = FUNC_6(VAR_16);
 struct mt9v022 *VAR_19 = FUNC_5(VAR_18);
 struct v4l2_rect VAR_20 = VAR_17->c;
 int VAR_21;


 if (VAR_19->fmts == VAR_15) {
  VAR_20.width = FUNC_0(VAR_20.width, 2);
  VAR_20.height = FUNC_0(VAR_20.height, 2);

 }

 FUNC_4(&VAR_20.left, &VAR_20.width,
       VAR_1, VAR_8, VAR_6);

 FUNC_4(&VAR_20.top, &VAR_20.height,
       VAR_9, VAR_7, VAR_4);


 VAR_21 = FUNC_2(VAR_18, VAR_0);
 if (VAR_21 >= 0) {
  if (VAR_21 & 1)
   VAR_21 = FUNC_3(VAR_18, VAR_5,
     VAR_20.height + VAR_19->y_skip_top + 43);
  else
   VAR_21 = FUNC_3(VAR_18, VAR_11,
     VAR_20.height + VAR_19->y_skip_top + 43);
 }

 if (!VAR_21)
  VAR_21 = FUNC_3(VAR_18, VAR_2, VAR_20.left);
 if (!VAR_21)
  VAR_21 = FUNC_3(VAR_18, VAR_10, VAR_20.top);
 if (!VAR_21)




  VAR_21 = FUNC_3(VAR_18, VAR_3,
    VAR_20.width > 660 - 43 ? 43 :
    660 - VAR_20.width);
 if (!VAR_21)
  VAR_21 = FUNC_3(VAR_18, VAR_12, 45);
 if (!VAR_21)
  VAR_21 = FUNC_3(VAR_18, VAR_14, VAR_20.width);
 if (!VAR_21)
  VAR_21 = FUNC_3(VAR_18, VAR_13,
    VAR_20.height + VAR_19->y_skip_top);

 if (VAR_21 < 0)
  return VAR_21;

 FUNC_1(&VAR_18->dev, "Frame %dx%d pixel\n", VAR_20.width, VAR_20.height);

 VAR_19->rect = VAR_20;

 return 0;
}
