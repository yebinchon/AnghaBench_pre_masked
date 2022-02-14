
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct tvp514x_reg {int dummy; } ;
struct tvp514x_decoder {int streaming; } ;
struct i2c_client {TYPE_2__* driver; } ;
struct TYPE_4__ {TYPE_1__* id_table; } ;
struct TYPE_3__ {scalar_t__ driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tvp514x_decoder* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,struct tvp514x_decoder*) ;
 int FUNC_2 (struct v4l2_subdev*,struct tvp514x_decoder*) ;
 int FUNC_3 (struct v4l2_subdev*,int ,int) ;
 int FUNC_4 (struct v4l2_subdev*,struct tvp514x_reg*) ;
 int FUNC_5 (struct v4l2_subdev*,char*) ;
 struct i2c_client* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 struct i2c_client *VAR_5 = FUNC_6(VAR_2);
 struct tvp514x_decoder *VAR_6 = FUNC_0(VAR_2);

 if (VAR_6->streaming == VAR_3)
  return 0;

 switch (VAR_3) {
 case 0:
 {

  VAR_4 = FUNC_3(VAR_2, VAR_1, 0x01);
  if (VAR_4) {
   FUNC_5(VAR_2, "Unable to turn off decoder\n");
   return VAR_4;
  }
  VAR_6->streaming = VAR_3;
  break;
 }
 case 1:
 {
  struct tvp514x_reg *VAR_7 = (struct tvp514x_reg *)
    VAR_5->driver->id_table->driver_data;


  VAR_4 = FUNC_4(VAR_2, VAR_7);
  if (VAR_4) {
   FUNC_5(VAR_2, "Unable to turn on decoder\n");
   return VAR_4;
  }

  VAR_4 = FUNC_2(VAR_2, VAR_6);
  if (VAR_4) {
   FUNC_5(VAR_2, "Unable to detect decoder\n");
   return VAR_4;
  }
  VAR_4 = FUNC_1(VAR_2, VAR_6);
  if (VAR_4) {
   FUNC_5(VAR_2, "Unable to configure decoder\n");
   return VAR_4;
  }
  VAR_6->streaming = VAR_3;
  break;
 }
 default:
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}
