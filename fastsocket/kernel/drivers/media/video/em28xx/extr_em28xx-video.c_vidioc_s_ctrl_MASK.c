
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_control {int value; int id; } ;
struct file {int dummy; } ;
struct em28xx_fh {struct em28xx* dev; } ;
struct TYPE_2__ {scalar_t__ ac97; } ;
struct em28xx {int volume; int mute; int v4l2_dev; TYPE_1__ audio_mode; } ;


 scalar_t__ VAR_0 ;


 int FUNC_0 (struct em28xx*,struct v4l2_control*) ;
 int FUNC_1 (struct em28xx*) ;
 int FUNC_2 (struct em28xx*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct em28xx*) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,int ,int ,struct v4l2_control*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, void *VAR_4,
    struct v4l2_control *VAR_5)
{
 struct em28xx_fh *VAR_6 = VAR_4;
 struct em28xx *VAR_7 = VAR_6->dev;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8 < 0)
  return VAR_8;


 if (VAR_7->audio_mode.ac97 != VAR_0)
  VAR_8 = FUNC_0(VAR_7, VAR_5);
 else
  VAR_8 = 1;


 if (VAR_8 == 1) {
  VAR_8 = FUNC_2(VAR_7, VAR_5->id);
  if (!VAR_8)
   FUNC_4(&VAR_7->v4l2_dev, 0,
          VAR_1, VAR_2, VAR_5);






  switch (VAR_5->id) {
  case 129:
   VAR_7->mute = VAR_5->value;
   VAR_8 = FUNC_3(VAR_7);
   break;
  case 128:
   VAR_7->volume = VAR_5->value;
   VAR_8 = FUNC_3(VAR_7);
  }
 }
 return (VAR_8 < 0) ? VAR_8 : 0;
}
