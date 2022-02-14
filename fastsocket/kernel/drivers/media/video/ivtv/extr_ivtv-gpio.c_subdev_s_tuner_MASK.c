
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct v4l2_tuner {int audmode; } ;
struct v4l2_subdev {int dummy; } ;
struct ivtv {TYPE_1__* card; } ;
struct TYPE_4__ {int mask; int lang1; int lang2; int mono; int stereo; } ;
struct TYPE_3__ {TYPE_2__ gpio_audio_mode; } ;


 int VAR_0 ;





 int FUNC_0 (int ) ;
 struct ivtv* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, struct v4l2_tuner *VAR_2)
{
 struct ivtv *VAR_3 = FUNC_1(VAR_1);
 u16 VAR_4, VAR_5;

 VAR_4 = VAR_3->card->gpio_audio_mode.mask;
 switch (VAR_2->audmode) {
 case 132:
  VAR_5 = VAR_3->card->gpio_audio_mode.lang1;
  break;
 case 130:
  VAR_5 = VAR_3->card->gpio_audio_mode.lang2;
  break;
 case 129:
  VAR_5 = VAR_3->card->gpio_audio_mode.mono;
  break;
 case 128:
 case 131:
 default:
  VAR_5 = VAR_3->card->gpio_audio_mode.stereo;
  break;
 }
 if (VAR_4)
  FUNC_2((FUNC_0(VAR_0) & ~VAR_4) | (VAR_5 & VAR_4), VAR_0);
 return 0;
}
