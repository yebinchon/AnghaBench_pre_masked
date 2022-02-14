
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int left; int top; } ;
struct v4l2_crop {scalar_t__ type; TYPE_1__ c; } ;
struct go7007_file {struct go7007* go; } ;
struct go7007 {int standard; TYPE_2__* board_info; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int sensor_width; int sensor_height; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3, struct v4l2_crop *VAR_4)
{
 struct go7007 *VAR_5 = ((struct go7007_file *) VAR_3)->go;

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 VAR_4->type = VAR_1;


 switch (VAR_5->standard) {
 case 130:
  VAR_4->c.top = 0;
  VAR_4->c.left = 0;
  VAR_4->c.width = 720;
  VAR_4->c.height = 480;
  break;
 case 128:
  VAR_4->c.top = 0;
  VAR_4->c.left = 0;
  VAR_4->c.width = 720;
  VAR_4->c.height = 576;
  break;
 case 129:
  VAR_4->c.top = 0;
  VAR_4->c.left = 0;
  VAR_4->c.width = VAR_5->board_info->sensor_width;
  VAR_4->c.height = VAR_5->board_info->sensor_height;
  break;
 }

 return 0;
}
