
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct saa717x_state {int audio_input; int audio_main_volume; long audio_main_vol_l; long audio_main_vol_r; int audio_main_bass; int audio_main_treble; scalar_t__ audio_main_mute; scalar_t__ audio_main_balance; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct v4l2_subdev*,int,int) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1,
  struct saa717x_state *VAR_2)
{
 u8 VAR_3 = 0xac;
 u32 VAR_4;
 unsigned int VAR_5, VAR_6;


 FUNC_1(VAR_1, 0x0594, VAR_2->audio_input);
 FUNC_2(1, VAR_0, VAR_1, "set audio input %d\n",
   VAR_2->audio_input);


 VAR_5 = (FUNC_0(65536 - VAR_2->audio_main_balance, 32768) * VAR_2->audio_main_volume) / 32768;
 VAR_6 = (FUNC_0(VAR_2->audio_main_balance, (u16)32768) * VAR_2->audio_main_volume) / 32768;
 VAR_2->audio_main_vol_l = (long)VAR_5 * (24 - (-40)) / 65535 - 40;
 VAR_2->audio_main_vol_r = (long)VAR_6 * (24 - (-40)) / 65535 - 40;





 if (VAR_2->audio_main_mute) {
  VAR_4 = VAR_3 | (VAR_3 << 8);
 } else {
  VAR_4 = (u8)VAR_2->audio_main_vol_l |
   ((u8)VAR_2->audio_main_vol_r << 8);
 }

 FUNC_1(VAR_1, 0x480, VAR_4);


 VAR_4 = VAR_2->audio_main_bass & 0x1f;
 VAR_4 |= (VAR_2->audio_main_treble & 0x1f) << 5;
 FUNC_1(VAR_1, 0x488, VAR_4);
 return 0;
}
