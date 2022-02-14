
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_control {int id; } ;
struct file {int dummy; } ;
struct em28xx_fh {struct em28xx* dev; } ;
struct TYPE_2__ {scalar_t__ ac97; } ;
struct em28xx {int v4l2_dev; TYPE_1__ audio_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct em28xx*,struct v4l2_control*) ;
 int FUNC_1 (struct em28xx*) ;
 scalar_t__ FUNC_2 (struct em28xx*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,int ,int ,struct v4l2_control*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, void *VAR_5,
    struct v4l2_control *VAR_6)
{
 struct em28xx_fh *VAR_7 = VAR_5;
 struct em28xx *VAR_8 = VAR_7->dev;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_8);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = 0;


 if (VAR_8->audio_mode.ac97 != VAR_1)
  VAR_9 = FUNC_0(VAR_8, VAR_6);
 else
  VAR_9 = 1;


 if (VAR_9 == 1) {
  if (FUNC_2(VAR_8, VAR_6->id))
   return -VAR_0;

  FUNC_3(&VAR_8->v4l2_dev, 0, VAR_2, VAR_3, VAR_6);
  VAR_9 = 0;
 }

 return VAR_9;
}
