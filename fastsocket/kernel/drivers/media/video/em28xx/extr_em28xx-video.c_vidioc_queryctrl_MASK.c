
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_queryctrl {int id; scalar_t__ type; } ;
struct file {int dummy; } ;
struct em28xx_fh {struct em28xx* dev; } ;
struct TYPE_2__ {scalar_t__ ac97; } ;
struct em28xx {int v4l2_dev; TYPE_1__ audio_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct v4l2_queryctrl*) ;
 int FUNC_1 (struct em28xx*) ;
 int VAR_2 ;
 int FUNC_2 (struct v4l2_queryctrl*,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,int ,int ,struct v4l2_queryctrl*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, void *VAR_5,
    struct v4l2_queryctrl *VAR_6)
{
 struct em28xx_fh *VAR_7 = VAR_5;
 struct em28xx *VAR_8 = VAR_7->dev;
 int VAR_9 = VAR_6->id;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_2(VAR_6, 0, sizeof(*VAR_6));

 VAR_6->id = VAR_9;


 if (VAR_8->audio_mode.ac97 != VAR_1) {
  VAR_10 = FUNC_0(VAR_6);
  if (!VAR_10)
   return 0;
 }


 FUNC_3(&VAR_8->v4l2_dev, 0, VAR_2, VAR_3, VAR_6);

 if (VAR_6->type)
  return 0;
 else
  return -VAR_0;
}
