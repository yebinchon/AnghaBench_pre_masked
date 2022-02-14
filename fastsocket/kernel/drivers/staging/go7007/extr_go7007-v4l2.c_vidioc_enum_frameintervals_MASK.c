
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numerator; int denominator; } ;
struct v4l2_frmivalenum {scalar_t__ index; TYPE_1__ discrete; int type; } ;
struct go7007_file {struct go7007* go; } ;
struct go7007 {TYPE_2__* board_info; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int flags; int sensor_flags; int sensor_framerate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_4, void *VAR_5,
          struct v4l2_frmivalenum *VAR_6)
{
 struct go7007 *VAR_7 = ((struct go7007_file *) VAR_5)->go;


 if ((VAR_7->board_info->flags & VAR_1) ||
     (VAR_7->board_info->sensor_flags & VAR_2))
  return -VAR_0;

 if (VAR_6->index > 0)
  return -VAR_0;

 VAR_6->type = VAR_3;
 VAR_6->discrete.numerator = 1001;
 VAR_6->discrete.denominator = VAR_7->board_info->sensor_framerate;

 return 0;
}
