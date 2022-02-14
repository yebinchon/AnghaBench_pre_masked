
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int value; int id; } ;
struct tvp514x_decoder {TYPE_1__* tvp514x_regs; } ;
struct TYPE_2__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;





 int VAR_7 ;
 struct tvp514x_decoder* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,size_t,int) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int,int) ;
 int FUNC_3 (struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct v4l2_subdev *VAR_8, struct v4l2_control *VAR_9)
{
 struct tvp514x_decoder *VAR_10 = FUNC_0(VAR_8);
 int VAR_11 = -VAR_0, VAR_12;

 if (VAR_9 == ((void*)0))
  return VAR_11;

 VAR_12 = VAR_9->value;

 switch (VAR_9->id) {
 case 131:
  if (VAR_9->value < 0 || VAR_9->value > 255) {
   FUNC_3(VAR_8, "invalid brightness setting %d\n",
     VAR_9->value);
   return -VAR_1;
  }
  VAR_11 = FUNC_1(VAR_8, VAR_3,
    VAR_12);
  if (VAR_11)
   return VAR_11;

  VAR_10->tvp514x_regs[VAR_3].val = VAR_12;
  break;
 case 130:
  if (VAR_9->value < 0 || VAR_9->value > 255) {
   FUNC_3(VAR_8, "invalid contrast setting %d\n",
     VAR_9->value);
   return -VAR_1;
  }
  VAR_11 = FUNC_1(VAR_8, VAR_4, VAR_12);
  if (VAR_11)
   return VAR_11;

  VAR_10->tvp514x_regs[VAR_4].val = VAR_12;
  break;
 case 128:
  if (VAR_9->value < 0 || VAR_9->value > 255) {
   FUNC_3(VAR_8, "invalid saturation setting %d\n",
     VAR_9->value);
   return -VAR_1;
  }
  VAR_11 = FUNC_1(VAR_8, VAR_6, VAR_12);
  if (VAR_11)
   return VAR_11;

  VAR_10->tvp514x_regs[VAR_6].val = VAR_12;
  break;
 case 129:
  if (VAR_12 == 180)
   VAR_12 = 0x7F;
  else if (VAR_12 == -180)
   VAR_12 = 0x80;
  else if (VAR_12 == 0)
   VAR_12 = 0;
  else {
   FUNC_3(VAR_8, "invalid hue setting %d\n", VAR_9->value);
   return -VAR_1;
  }
  VAR_11 = FUNC_1(VAR_8, VAR_5, VAR_12);
  if (VAR_11)
   return VAR_11;

  VAR_10->tvp514x_regs[VAR_5].val = VAR_12;
  break;
 case 132:
  if (VAR_12 == 1)
   VAR_12 = 0x0F;
  else if (VAR_12 == 0)
   VAR_12 = 0x0C;
  else {
   FUNC_3(VAR_8, "invalid auto gain setting %d\n",
     VAR_9->value);
   return -VAR_1;
  }
  VAR_11 = FUNC_1(VAR_8, VAR_2, VAR_12);
  if (VAR_11)
   return VAR_11;

  VAR_10->tvp514x_regs[VAR_2].val = VAR_12;
  break;
 default:
  FUNC_3(VAR_8, "invalid control id %d\n", VAR_9->id);
  return VAR_11;
 }

 FUNC_2(1, VAR_7, VAR_8, "Set Control: ID - %d - %d",
   VAR_9->id, VAR_9->value);

 return VAR_11;
}
