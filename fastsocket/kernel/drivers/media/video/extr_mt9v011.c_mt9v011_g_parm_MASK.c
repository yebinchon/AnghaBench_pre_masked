
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_4__ {int denominator; int numerator; } ;
struct v4l2_captureparm {TYPE_2__ timeperframe; int capability; } ;
struct TYPE_3__ {struct v4l2_captureparm capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_1__ parm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,int *,int *) ;
 int FUNC_1 (struct v4l2_captureparm*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_3, struct v4l2_streamparm *VAR_4)
{
 struct v4l2_captureparm *VAR_5 = &VAR_4->parm.capture;

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 FUNC_1(VAR_5, 0, sizeof(struct v4l2_captureparm));
 VAR_5->capability = VAR_2;
 FUNC_0(VAR_3,
   &VAR_5->timeperframe.numerator,
   &VAR_5->timeperframe.denominator);

 return 0;
}
