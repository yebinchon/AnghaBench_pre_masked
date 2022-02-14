
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {int width; int height; int left; int top; } ;
struct mt9m111 {TYPE_1__* fmt; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {scalar_t__ code; } ;


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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int) ;
 struct mt9m111* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_16,
         struct v4l2_rect *VAR_17)
{
 struct mt9m111 *VAR_18 = FUNC_1(VAR_16);
 int VAR_19, VAR_20;
 int VAR_21 = VAR_17->width;
 int VAR_22 = VAR_17->height;

 if (VAR_18->fmt->code == VAR_13 ||
     VAR_18->fmt->code == VAR_12)
  VAR_20 = 1;
 else
  VAR_20 = 0;

 VAR_19 = FUNC_0(VAR_0, VAR_17->left);
 if (!VAR_19)
  VAR_19 = FUNC_0(VAR_11, VAR_17->top);

 if (VAR_20) {
  if (!VAR_19)
   VAR_19 = FUNC_0(VAR_15, VAR_21);
  if (!VAR_19)
   VAR_19 = FUNC_0(VAR_14, VAR_22);
 } else {
  if (!VAR_19)
   VAR_19 = FUNC_0(VAR_6, VAR_2);
  if (!VAR_19)
   VAR_19 = FUNC_0(VAR_10, VAR_1);
  if (!VAR_19)
   VAR_19 = FUNC_0(VAR_4, VAR_21);
  if (!VAR_19)
   VAR_19 = FUNC_0(VAR_8, VAR_22);
  if (!VAR_19)
   VAR_19 = FUNC_0(VAR_5, VAR_2);
  if (!VAR_19)
   VAR_19 = FUNC_0(VAR_9, VAR_1);
  if (!VAR_19)
   VAR_19 = FUNC_0(VAR_3, VAR_21);
  if (!VAR_19)
   VAR_19 = FUNC_0(VAR_7, VAR_22);
 }

 return VAR_19;
}
