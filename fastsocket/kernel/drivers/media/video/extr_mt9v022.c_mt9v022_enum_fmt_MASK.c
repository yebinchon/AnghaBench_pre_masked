
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct mt9v022 {unsigned int num_fmts; TYPE_1__* fmts; } ;
struct i2c_client {int dummy; } ;
typedef enum v4l2_mbus_pixelcode { ____Placeholder_v4l2_mbus_pixelcode } v4l2_mbus_pixelcode ;
struct TYPE_2__ {int code; } ;


 int VAR_0 ;
 struct mt9v022* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, unsigned int VAR_2,
       enum v4l2_mbus_pixelcode *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_1(VAR_1);
 struct mt9v022 *VAR_5 = FUNC_0(VAR_4);

 if (VAR_2 >= VAR_5->num_fmts)
  return -VAR_0;

 *VAR_3 = VAR_5->fmts[VAR_2].code;
 return 0;
}
