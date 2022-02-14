
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int numerator; int denominator; } ;
struct TYPE_5__ {scalar_t__ capturemode; TYPE_1__ timeperframe; } ;
struct TYPE_6__ {TYPE_2__ capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_3__ parm; } ;
struct go7007_file {struct go7007* go; } ;
struct go7007 {unsigned int sensor_framerate; unsigned int fps_scale; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3,
  struct v4l2_streamparm *VAR_4)
{
 struct go7007 *VAR_5 = ((struct go7007_file *) VAR_3)->go;
 unsigned int VAR_6, VAR_7;

 if (VAR_4->type != VAR_1)
  return -VAR_0;
 if (VAR_4->parm.capture.capturemode != 0)
  return -VAR_0;

 VAR_6 = VAR_5->sensor_framerate *
  VAR_4->parm.capture.timeperframe.numerator;
 VAR_7 = 1001 * VAR_4->parm.capture.timeperframe.denominator;
 if (VAR_6 != 0 && VAR_7 != 0 && VAR_6 > VAR_7)
  VAR_5->fps_scale = (VAR_6 + VAR_7/2) / VAR_7;
 else
  VAR_5->fps_scale = 1;

 return 0;
}
