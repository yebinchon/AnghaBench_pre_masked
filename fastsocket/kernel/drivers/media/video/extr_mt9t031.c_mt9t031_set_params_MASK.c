
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct v4l2_rect {int left; int top; int width; int height; } ;
struct v4l2_queryctrl {unsigned int maximum; unsigned int minimum; } ;
struct mt9t031 {int yskip; int xskip; int y_skip_top; unsigned int exposure; struct v4l2_rect rect; scalar_t__ autoexposure; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
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
 int FUNC_0 (int *,char*,int,int,...) ;
 int FUNC_1 (int,int) ;
 struct v4l2_queryctrl* VAR_14 ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (struct i2c_client*,int ,int const) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct i2c_client*,unsigned int) ;
 struct mt9t031* FUNC_7 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_15,
         struct v4l2_rect *VAR_16, u16 VAR_17, u16 VAR_18)
{
 struct mt9t031 *VAR_19 = FUNC_7(VAR_15);
 int VAR_20;
 u16 VAR_21, VAR_22;
 const u16 VAR_23 = VAR_4,
  VAR_24 = VAR_10;

 VAR_21 = FUNC_1(VAR_17, (u16)3);
 VAR_22 = FUNC_1(VAR_18, (u16)3);
 switch (VAR_21) {
 case 1:
  VAR_16->left &= ~1;
  break;
 case 2:
  VAR_16->left &= ~3;
  break;
 case 3:
  VAR_16->left = VAR_16->left > FUNC_5(VAR_1, 6) ?
   (VAR_16->left / 6) * 6 : FUNC_5(VAR_1, 6);
 }

 VAR_16->top &= ~1;

 FUNC_0(&VAR_15->dev, "skip %u:%u, rect %ux%u@%u:%u\n",
  VAR_17, VAR_18, VAR_16->width, VAR_16->height, VAR_16->left, VAR_16->top);


 VAR_20 = FUNC_3(VAR_15, VAR_7, 1);
 if (VAR_20 < 0)
  return VAR_20;


 VAR_20 = FUNC_4(VAR_15, VAR_5, VAR_23);
 if (VAR_20 >= 0)
  VAR_20 = FUNC_4(VAR_15, VAR_11, VAR_24);

 if (VAR_18 != VAR_19->yskip || VAR_17 != VAR_19->xskip) {

  if (VAR_20 >= 0)
   VAR_20 = FUNC_4(VAR_15, VAR_0,
     ((VAR_21 - 1) << 4) | (VAR_17 - 1));
  if (VAR_20 >= 0)
   VAR_20 = FUNC_4(VAR_15, VAR_8,
     ((VAR_22 - 1) << 4) | (VAR_18 - 1));
 }
 FUNC_0(&VAR_15->dev, "new physical left %u, top %u\n",
  VAR_16->left, VAR_16->top);





 if (VAR_20 >= 0)
  VAR_20 = FUNC_4(VAR_15, VAR_2, VAR_16->left);
 if (VAR_20 >= 0)
  VAR_20 = FUNC_4(VAR_15, VAR_9, VAR_16->top);
 if (VAR_20 >= 0)
  VAR_20 = FUNC_4(VAR_15, VAR_13, VAR_16->width - 1);
 if (VAR_20 >= 0)
  VAR_20 = FUNC_4(VAR_15, VAR_12,
    VAR_16->height + VAR_19->y_skip_top - 1);
 if (VAR_20 >= 0 && VAR_19->autoexposure) {
  unsigned int VAR_25 = VAR_16->height + VAR_19->y_skip_top + VAR_24;
  VAR_20 = FUNC_6(VAR_15, VAR_25);
  if (VAR_20 >= 0) {
   const u32 VAR_26 = VAR_6 + VAR_24;
   const struct v4l2_queryctrl *VAR_27 =
    &VAR_14[VAR_3];
   VAR_19->exposure = (VAR_26 / 2 + (VAR_25 - 1) *
     (VAR_27->maximum - VAR_27->minimum)) /
    VAR_26 + VAR_27->minimum;
  }
 }


 if (VAR_20 >= 0)
  VAR_20 = FUNC_2(VAR_15, VAR_7, 1);

 if (VAR_20 >= 0) {
  VAR_19->rect = *VAR_16;
  VAR_19->xskip = VAR_17;
  VAR_19->yskip = VAR_18;
 }

 return VAR_20 < 0 ? VAR_20 : 0;
}
