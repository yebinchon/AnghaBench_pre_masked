
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;
struct saa717x_state {int audio_main_bass; int audio_main_treble; int audio_main_balance; int audio_main_volume; int audio_main_mute; } ;
 int FUNC_0 (struct v4l2_subdev*,int,int ) ;
 int FUNC_1 (struct v4l2_subdev*,struct saa717x_state*) ;
 struct v4l2_subdev* FUNC_2 (struct v4l2_ctrl*) ;
 struct saa717x_state* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_ctrl *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_2(VAR_0);
 struct saa717x_state *VAR_2 = FUNC_3(VAR_1);

 switch (VAR_0->id) {
 case 131:
  FUNC_0(VAR_1, 0x10a, VAR_0->val);
  return 0;

 case 130:
  FUNC_0(VAR_1, 0x10b, VAR_0->val);
  return 0;

 case 128:
  FUNC_0(VAR_1, 0x10c, VAR_0->val);
  return 0;

 case 129:
  FUNC_0(VAR_1, 0x10d, VAR_0->val);
  return 0;

 case 134:
  VAR_2->audio_main_mute = VAR_0->val;
  break;

 case 132:
  VAR_2->audio_main_volume = VAR_0->val;
  break;

 case 136:
  VAR_2->audio_main_balance = VAR_0->val;
  break;

 case 133:
  VAR_2->audio_main_treble = VAR_0->val;
  break;

 case 135:
  VAR_2->audio_main_bass = VAR_0->val;
  break;

 default:
  return 0;
 }
 FUNC_1(VAR_1, VAR_2);
 return 0;
}
