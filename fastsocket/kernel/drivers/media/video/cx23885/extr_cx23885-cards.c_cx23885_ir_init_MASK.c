
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_ir_parameters {int enable; int shutdown; int invert_level; } ;
struct v4l2_subdev_io_pin_config {int const strength; int value; int const function; int const pin; int const flags; } ;
struct cx23885_dev {int board; int sd_cx25840; int * sd_ir; } ;


 size_t FUNC_0 (struct v4l2_subdev_io_pin_config*) ;
 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;


 int VAR_3 ;
 void* FUNC_1 (struct cx23885_dev*,int ) ;
 int FUNC_2 (struct cx23885_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int ,int ,...) ;

int FUNC_5(struct cx23885_dev *VAR_9)
{
 static struct v4l2_subdev_io_pin_config VAR_10[] = {
  {
   .flags = 129,
   .pin = 132,
   .function = 134,
   .value = 0,
   .strength = 130,
  }, {
   .flags = 128,
   .pin = 131,
   .function = 133,
   .value = 0,
   .strength = 130,
  }
 };
 const size_t VAR_11 = FUNC_0(VAR_10);

 static struct v4l2_subdev_io_pin_config VAR_12[] = {
  {
   .flags = 129,
   .pin = 132,
   .function = 134,
   .value = 0,
   .strength = 130,
  }
 };
 const size_t VAR_13 = FUNC_0(VAR_12);

 struct v4l2_subdev_ir_parameters VAR_14;
 int VAR_15 = 0;
 switch (VAR_9->board) {
 case 139:
 case 138:
 case 137:
 case 147:
 case 140:
 case 143:
 case 142:
 case 144:
 case 146:

  break;
 case 136:
 case 141:
  VAR_15 = FUNC_2(VAR_9);
  if (VAR_15)
   break;
  VAR_9->sd_ir = FUNC_1(VAR_9, VAR_0);
  FUNC_4(VAR_9->sd_cx25840, VAR_3, VAR_6,
     VAR_11, VAR_10);




  FUNC_4(*VAR_9->sd_ir, VAR_5, VAR_7, &VAR_14);
  VAR_14.enable = 0;
  VAR_14.shutdown = 0;
  VAR_14.invert_level = 1;
  FUNC_4(*VAR_9->sd_ir, VAR_5, VAR_8, &VAR_14);
  VAR_14.shutdown = 1;
  FUNC_4(*VAR_9->sd_ir, VAR_5, VAR_8, &VAR_14);
  break;
 case 135:
  if (!VAR_4)
   break;
  VAR_9->sd_ir = FUNC_1(VAR_9, VAR_1);
  if (VAR_9->sd_ir == ((void*)0)) {
   VAR_15 = -VAR_2;
   break;
  }
  FUNC_4(VAR_9->sd_cx25840, VAR_3, VAR_6,
     VAR_13, VAR_12);
  break;
 case 145:
  if (!VAR_4)
   break;
  VAR_9->sd_ir = FUNC_1(VAR_9, VAR_1);
  if (VAR_9->sd_ir == ((void*)0)) {
   VAR_15 = -VAR_2;
   break;
  }
  FUNC_4(VAR_9->sd_cx25840, VAR_3, VAR_6,
     VAR_11, VAR_10);
  break;
 case 148:
  FUNC_3("ir-kbd-i2c");
  break;
 }

 return VAR_15;
}
