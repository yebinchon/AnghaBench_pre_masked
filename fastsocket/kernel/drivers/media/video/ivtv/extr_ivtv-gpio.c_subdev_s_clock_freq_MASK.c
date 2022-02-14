
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct ivtv {TYPE_2__* card; } ;
struct TYPE_3__ {int mask; int f32000; int f44100; int f48000; } ;
struct TYPE_4__ {TYPE_1__ gpio_audio_freq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct ivtv* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, u32 VAR_2)
{
 struct ivtv *VAR_3 = FUNC_1(VAR_1);
 u16 VAR_4, VAR_5;

 VAR_4 = VAR_3->card->gpio_audio_freq.mask;
 switch (VAR_2) {
 case 32000:
  VAR_5 = VAR_3->card->gpio_audio_freq.f32000;
  break;
 case 44100:
  VAR_5 = VAR_3->card->gpio_audio_freq.f44100;
  break;
 case 48000:
 default:
  VAR_5 = VAR_3->card->gpio_audio_freq.f48000;
  break;
 }
 if (VAR_4)
  FUNC_2((FUNC_0(VAR_0) & ~VAR_4) | (VAR_5 & VAR_4), VAR_0);
 return 0;
}
