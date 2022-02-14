
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_audio {int capability; int index; int name; } ;
struct file {int dummy; } ;
struct em28xx_fh {struct em28xx* dev; } ;
struct TYPE_2__ {int has_audio; } ;
struct em28xx {int ctl_ainput; TYPE_1__ audio_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3, struct v4l2_audio *VAR_4)
{
 struct em28xx_fh *VAR_5 = VAR_3;
 struct em28xx *VAR_6 = VAR_5->dev;

 if (!VAR_6->audio_mode.has_audio)
  return -VAR_0;

 switch (VAR_4->index) {
 case 129:
  FUNC_0(VAR_4->name, "Television");
  break;
 case 133:
  FUNC_0(VAR_4->name, "Line In");
  break;
 case 128:
  FUNC_0(VAR_4->name, "Television alt");
  break;
 case 130:
  FUNC_0(VAR_4->name, "Phone");
  break;
 case 132:
  FUNC_0(VAR_4->name, "Mic");
  break;
 case 134:
  FUNC_0(VAR_4->name, "CD");
  break;
 case 135:
  FUNC_0(VAR_4->name, "Aux");
  break;
 case 131:
  FUNC_0(VAR_4->name, "PCM");
  break;
 default:
  return -VAR_0;
 }

 VAR_4->index = VAR_6->ctl_ainput;
 VAR_4->capability = VAR_1;

 return 0;
}
