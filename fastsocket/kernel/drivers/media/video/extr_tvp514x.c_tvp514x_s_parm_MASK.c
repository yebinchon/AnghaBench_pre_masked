
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_fract {int dummy; } ;
struct TYPE_7__ {struct v4l2_fract timeperframe; } ;
struct TYPE_8__ {TYPE_3__ capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_4__ parm; } ;
struct tvp514x_decoder {int current_std; TYPE_2__* std_list; } ;
typedef enum tvp514x_std { ____Placeholder_tvp514x_std } tvp514x_std ;
struct TYPE_5__ {struct v4l2_fract frameperiod; } ;
struct TYPE_6__ {TYPE_1__ standard; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct tvp514x_decoder* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int
FUNC_2(struct v4l2_subdev *VAR_3, struct v4l2_streamparm *VAR_4)
{
 struct tvp514x_decoder *VAR_5 = FUNC_0(VAR_3);
 struct v4l2_fract *VAR_6;
 enum tvp514x_std VAR_7;

 if (VAR_4 == ((void*)0))
  return -VAR_0;

 if (VAR_4->type != VAR_2)

  return -VAR_0;

 VAR_6 = &VAR_4->parm.capture.timeperframe;


 VAR_7 = FUNC_1(VAR_3);
 if (VAR_7 == VAR_1)
  return -VAR_0;

 VAR_5->current_std = VAR_7;

 *VAR_6 =
     VAR_5->std_list[VAR_7].standard.frameperiod;

 return 0;
}
