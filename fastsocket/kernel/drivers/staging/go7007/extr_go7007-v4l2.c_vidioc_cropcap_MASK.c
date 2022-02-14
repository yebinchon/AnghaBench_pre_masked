
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; int left; int top; } ;
struct TYPE_4__ {int width; int height; int left; int top; } ;
struct v4l2_cropcap {scalar_t__ type; TYPE_2__ defrect; TYPE_1__ bounds; } ;
struct go7007_file {struct go7007* go; } ;
struct go7007 {int standard; TYPE_3__* board_info; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int sensor_width; int sensor_height; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3,
     struct v4l2_cropcap *VAR_4)
{
 struct go7007 *VAR_5 = ((struct go7007_file *) VAR_3)->go;

 if (VAR_4->type != VAR_1)
  return -VAR_0;


 switch (VAR_5->standard) {
 case 130:
  VAR_4->bounds.top = 0;
  VAR_4->bounds.left = 0;
  VAR_4->bounds.width = 720;
  VAR_4->bounds.height = 480;
  VAR_4->defrect.top = 0;
  VAR_4->defrect.left = 0;
  VAR_4->defrect.width = 720;
  VAR_4->defrect.height = 480;
  break;
 case 128:
  VAR_4->bounds.top = 0;
  VAR_4->bounds.left = 0;
  VAR_4->bounds.width = 720;
  VAR_4->bounds.height = 576;
  VAR_4->defrect.top = 0;
  VAR_4->defrect.left = 0;
  VAR_4->defrect.width = 720;
  VAR_4->defrect.height = 576;
  break;
 case 129:
  VAR_4->bounds.top = 0;
  VAR_4->bounds.left = 0;
  VAR_4->bounds.width = VAR_5->board_info->sensor_width;
  VAR_4->bounds.height = VAR_5->board_info->sensor_height;
  VAR_4->defrect.top = 0;
  VAR_4->defrect.left = 0;
  VAR_4->defrect.width = VAR_5->board_info->sensor_width;
  VAR_4->defrect.height = VAR_5->board_info->sensor_height;
  break;
 }

 return 0;
}
