
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_control {int id; int value; } ;
struct saa6752hs_mpeg_params {int ts_pid_pmt; int ts_pid_audio; int ts_pid_video; int ts_pid_pcr; int au_encoding; int au_l2_bitrate; int au_ac3_bitrate; int vi_aspect; int vi_bitrate; int vi_bitrate_peak; int vi_bitrate_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(int VAR_4, struct saa6752hs_mpeg_params *VAR_5,
  struct v4l2_ext_control *VAR_6)
{
 switch (VAR_6->id) {
 case 133:
  VAR_6->value = VAR_2;
  break;
 case 135:
  VAR_6->value = VAR_5->ts_pid_pmt;
  break;
 case 137:
  VAR_6->value = VAR_5->ts_pid_audio;
  break;
 case 134:
  VAR_6->value = VAR_5->ts_pid_video;
  break;
 case 136:
  VAR_6->value = VAR_5->ts_pid_pcr;
  break;
 case 140:
  VAR_6->value = VAR_5->au_encoding;
  break;
 case 139:
  VAR_6->value = VAR_5->au_l2_bitrate;
  break;
 case 141:
  if (!VAR_4)
   return -VAR_0;
  VAR_6->value = VAR_5->au_ac3_bitrate;
  break;
 case 138:
  VAR_6->value = VAR_1;
  break;
 case 128:
  VAR_6->value = VAR_3;
  break;
 case 132:
  VAR_6->value = VAR_5->vi_aspect;
  break;
 case 131:
  VAR_6->value = VAR_5->vi_bitrate * 1000;
  break;
 case 129:
  VAR_6->value = VAR_5->vi_bitrate_peak * 1000;
  break;
 case 130:
  VAR_6->value = VAR_5->vi_bitrate_mode;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
