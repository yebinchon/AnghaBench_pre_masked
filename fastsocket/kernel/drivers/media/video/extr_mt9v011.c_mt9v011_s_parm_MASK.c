
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_fract {int denominator; int numerator; } ;
struct v4l2_captureparm {scalar_t__ extendedmode; struct v4l2_fract timeperframe; } ;
struct TYPE_2__ {struct v4l2_captureparm capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_1__ parm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,int *,int *) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct v4l2_subdev*,int ,int ) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_4, struct v4l2_streamparm *VAR_5)
{
 struct v4l2_captureparm *VAR_6 = &VAR_5->parm.capture;
 struct v4l2_fract *VAR_7 = &VAR_6->timeperframe;
 u16 VAR_8;

 if (VAR_5->type != VAR_2)
  return -VAR_0;
 if (VAR_6->extendedmode != 0)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_4, VAR_7->numerator, VAR_7->denominator);

 FUNC_2(VAR_4, VAR_1, VAR_8);
 FUNC_3(1, VAR_3, VAR_4, "Setting speed to %d\n", VAR_8);


 FUNC_0(VAR_4, &VAR_7->numerator, &VAR_7->denominator);

 return 0;
}
