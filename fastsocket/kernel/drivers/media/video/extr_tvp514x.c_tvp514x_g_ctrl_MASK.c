
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct tvp514x_decoder {TYPE_1__* tvp514x_regs; } ;
struct TYPE_2__ {int val; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;





 int VAR_6 ;
 struct tvp514x_decoder* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int,int) ;
 int FUNC_2 (struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct v4l2_subdev *VAR_7, struct v4l2_control *VAR_8)
{
 struct tvp514x_decoder *VAR_9 = FUNC_0(VAR_7);

 if (VAR_8 == ((void*)0))
  return -VAR_0;

 switch (VAR_8->id) {
 case 131:
  VAR_8->value = VAR_9->tvp514x_regs[VAR_2].val;
  break;
 case 130:
  VAR_8->value = VAR_9->tvp514x_regs[VAR_3].val;
  break;
 case 128:
  VAR_8->value = VAR_9->tvp514x_regs[VAR_5].val;
  break;
 case 129:
  VAR_8->value = VAR_9->tvp514x_regs[VAR_4].val;
  if (VAR_8->value == 0x7F)
   VAR_8->value = 180;
  else if (VAR_8->value == 0x80)
   VAR_8->value = -180;
  else
   VAR_8->value = 0;

  break;
 case 132:
  VAR_8->value = VAR_9->tvp514x_regs[VAR_1].val;
  if ((VAR_8->value & 0x3) == 3)
   VAR_8->value = 1;
  else
   VAR_8->value = 0;

  break;
 default:
  FUNC_2(VAR_7, "invalid control id %d\n", VAR_8->id);
  return -VAR_0;
 }

 FUNC_1(1, VAR_6, VAR_7, "Get Control: ID - %d - %d",
   VAR_8->id, VAR_8->value);
 return 0;
}
