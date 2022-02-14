
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {int numerator; int denominator; } ;
struct v4l2_captureparm {TYPE_1__ timeperframe; int capability; } ;
struct TYPE_4__ {struct v4l2_captureparm capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_2__ parm; } ;
struct ov7670_info {int clock_speed; int clkrc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_captureparm*,int ,int) ;
 struct ov7670_info* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_5, struct v4l2_streamparm *VAR_6)
{
 struct v4l2_captureparm *VAR_7 = &VAR_6->parm.capture;
 struct ov7670_info *VAR_8 = FUNC_1(VAR_5);

 if (VAR_6->type != VAR_3)
  return -VAR_2;

 FUNC_0(VAR_7, 0, sizeof(struct v4l2_captureparm));
 VAR_7->capability = VAR_4;
 VAR_7->timeperframe.numerator = 1;
 VAR_7->timeperframe.denominator = VAR_8->clock_speed;
 if ((VAR_8->clkrc & VAR_0) == 0 && (VAR_8->clkrc & VAR_1) > 1)
  VAR_7->timeperframe.denominator /= (VAR_8->clkrc & VAR_1);
 return 0;
}
