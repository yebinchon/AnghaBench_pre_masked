
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_streamparm {scalar_t__ type; } ;
struct file {int dummy; } ;
struct em28xx_fh {struct em28xx* dev; } ;
struct TYPE_2__ {int is_webcam; } ;
struct em28xx {int v4l2_dev; TYPE_1__ board; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ,struct v4l2_streamparm*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
    struct v4l2_streamparm *VAR_6)
{
 struct em28xx_fh *VAR_7 = VAR_5;
 struct em28xx *VAR_8 = VAR_7->dev;

 if (!VAR_8->board.is_webcam)
  return -VAR_0;

 if (VAR_6->type != VAR_1)
  return -VAR_0;

 return FUNC_0(&VAR_8->v4l2_dev, 0, VAR_3, VAR_2, VAR_6);
}
