
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_fract {int numerator; int denominator; } ;
struct v4l2_captureparm {scalar_t__ extendedmode; struct v4l2_fract timeperframe; } ;
struct TYPE_2__ {struct v4l2_captureparm capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_1__ parm; } ;
struct ov7670_info {int clock_speed; int clkrc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int) ;
 struct ov7670_info* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_4, struct v4l2_streamparm *VAR_5)
{
 struct v4l2_captureparm *VAR_6 = &VAR_5->parm.capture;
 struct v4l2_fract *VAR_7 = &VAR_6->timeperframe;
 struct ov7670_info *VAR_8 = FUNC_1(VAR_4);
 int VAR_9;

 if (VAR_5->type != VAR_3)
  return -VAR_1;
 if (VAR_6->extendedmode != 0)
  return -VAR_1;

 if (VAR_7->numerator == 0 || VAR_7->denominator == 0)
  VAR_9 = 1;
 else
  VAR_9 = (VAR_7->numerator * VAR_8->clock_speed) / VAR_7->denominator;
 if (VAR_9 == 0)
  VAR_9 = 1;
 else if (VAR_9 > VAR_0)
  VAR_9 = VAR_0;
 VAR_8->clkrc = (VAR_8->clkrc & 0x80) | VAR_9;
 VAR_7->numerator = 1;
 VAR_7->denominator = VAR_8->clock_speed / VAR_9;
 return FUNC_0(VAR_4, VAR_2, VAR_8->clkrc);
}
