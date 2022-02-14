
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_audio {scalar_t__ index; } ;
struct file {int dummy; } ;
struct em28xx_fh {struct em28xx* dev; } ;
struct TYPE_3__ {int has_audio; } ;
struct em28xx {scalar_t__ ctl_aoutput; int ctl_ainput; TYPE_1__ audio_mode; } ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ aout; int amux; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4, struct v4l2_audio *VAR_5)
{
 struct em28xx_fh *VAR_6 = VAR_4;
 struct em28xx *VAR_7 = VAR_6->dev;


 if (!VAR_7->audio_mode.has_audio)
  return -VAR_0;

 if (VAR_5->index >= VAR_2)
  return -VAR_0;
 if (0 == FUNC_0(VAR_5->index)->type)
  return -VAR_0;

 VAR_7->ctl_ainput = FUNC_0(VAR_5->index)->amux;
 VAR_7->ctl_aoutput = FUNC_0(VAR_5->index)->aout;

 if (!VAR_7->ctl_aoutput)
  VAR_7->ctl_aoutput = VAR_1;

 return 0;
}
