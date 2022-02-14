
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_fract {int numerator; int denominator; } ;
struct TYPE_3__ {struct v4l2_fract timeperframe; int capability; } ;
struct TYPE_4__ {TYPE_1__ capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_2__ parm; } ;
struct go7007_file {struct go7007* go; } ;
struct go7007 {int fps_scale; int sensor_framerate; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_3, void *VAR_4,
  struct v4l2_streamparm *VAR_5)
{
 struct go7007 *VAR_6 = ((struct go7007_file *) VAR_4)->go;
 struct v4l2_fract VAR_7 = {
  .numerator = 1001 * VAR_6->fps_scale,
  .denominator = VAR_6->sensor_framerate,
 };

 if (VAR_5->type != VAR_1)
  return -VAR_0;

 VAR_5->parm.capture.capability |= VAR_2;
 VAR_5->parm.capture.timeperframe = VAR_7;

 return 0;
}
