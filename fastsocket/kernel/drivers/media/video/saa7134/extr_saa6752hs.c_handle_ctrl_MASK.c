
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_control {int value; int id; } ;
struct saa6752hs_mpeg_params {int ts_pid_pmt; int ts_pid_audio; int ts_pid_video; int ts_pid_pcr; int au_encoding; int au_l2_bitrate; int au_ac3_bitrate; int vi_aspect; int vi_bitrate; int vi_bitrate_peak; int vi_bitrate_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_0(int VAR_15, struct saa6752hs_mpeg_params *VAR_16,
  struct v4l2_ext_control *VAR_17, int VAR_18)
{
 int VAR_19 = 0, VAR_20;

 VAR_20 = VAR_17->value;
 switch (VAR_17->id) {
 case 133:
  VAR_19 = VAR_11;
  if (VAR_18 && VAR_20 != VAR_19)
   return -VAR_1;
  VAR_20 = VAR_19;
  break;
 case 135:
  VAR_19 = VAR_16->ts_pid_pmt;
  if (VAR_18 && VAR_20 > VAR_2)
   return -VAR_1;
  if (VAR_20 > VAR_2)
   VAR_20 = VAR_2;
  VAR_16->ts_pid_pmt = VAR_20;
  break;
 case 137:
  VAR_19 = VAR_16->ts_pid_audio;
  if (VAR_18 && VAR_20 > VAR_2)
   return -VAR_1;
  if (VAR_20 > VAR_2)
   VAR_20 = VAR_2;
  VAR_16->ts_pid_audio = VAR_20;
  break;
 case 134:
  VAR_19 = VAR_16->ts_pid_video;
  if (VAR_18 && VAR_20 > VAR_2)
   return -VAR_1;
  if (VAR_20 > VAR_2)
   VAR_20 = VAR_2;
  VAR_16->ts_pid_video = VAR_20;
  break;
 case 136:
  VAR_19 = VAR_16->ts_pid_pcr;
  if (VAR_18 && VAR_20 > VAR_2)
   return -VAR_1;
  if (VAR_20 > VAR_2)
   VAR_20 = VAR_2;
  VAR_16->ts_pid_pcr = VAR_20;
  break;
 case 140:
  VAR_19 = VAR_16->au_encoding;
  if (VAR_18 && VAR_20 != VAR_7 &&
      (!VAR_15 || VAR_20 != VAR_6))
   return -VAR_1;
  VAR_16->au_encoding = VAR_20;
  break;
 case 139:
  VAR_19 = VAR_16->au_l2_bitrate;
  if (VAR_18 && VAR_20 != VAR_8 &&
      VAR_20 != VAR_9)
   return -VAR_1;
  if (VAR_20 <= VAR_8)
   VAR_20 = VAR_8;
  else
   VAR_20 = VAR_9;
  VAR_16->au_l2_bitrate = VAR_20;
  break;
 case 141:
  if (!VAR_15)
   return -VAR_0;
  VAR_19 = VAR_16->au_ac3_bitrate;
  if (VAR_18 && VAR_20 != VAR_4 &&
      VAR_20 != VAR_5)
   return -VAR_1;
  if (VAR_20 <= VAR_4)
   VAR_20 = VAR_4;
  else
   VAR_20 = VAR_5;
  VAR_16->au_ac3_bitrate = VAR_20;
  break;
 case 138:
  VAR_19 = VAR_10;
  if (VAR_18 && VAR_20 != VAR_19)
   return -VAR_1;
  VAR_20 = VAR_19;
  break;
 case 128:
  VAR_19 = VAR_14;
  if (VAR_18 && VAR_20 != VAR_19)
   return -VAR_1;
  VAR_20 = VAR_19;
  break;
 case 132:
  VAR_19 = VAR_16->vi_aspect;
  if (VAR_18 && VAR_20 != VAR_12 &&
      VAR_20 != VAR_13)
   return -VAR_1;
  if (VAR_20 != VAR_12)
   VAR_20 = VAR_13;
  VAR_16->vi_aspect = VAR_20;
  break;
 case 131:
  VAR_19 = VAR_16->vi_bitrate * 1000;
  VAR_20 = 1000 * (VAR_20 / 1000);
  if (VAR_18 && VAR_20 > VAR_3 * 1000)
   return -VAR_1;
  if (VAR_20 > VAR_3 * 1000)
   VAR_20 = VAR_3 * 1000;
  VAR_16->vi_bitrate = VAR_20 / 1000;
  break;
 case 129:
  VAR_19 = VAR_16->vi_bitrate_peak * 1000;
  VAR_20 = 1000 * (VAR_20 / 1000);
  if (VAR_18 && VAR_20 > VAR_3 * 1000)
   return -VAR_1;
  if (VAR_20 > VAR_3 * 1000)
   VAR_20 = VAR_3 * 1000;
  VAR_16->vi_bitrate_peak = VAR_20 / 1000;
  break;
 case 130:
  VAR_19 = VAR_16->vi_bitrate_mode;
  VAR_16->vi_bitrate_mode = VAR_20;
  break;
 default:
  return -VAR_0;
 }
 VAR_17->value = VAR_20;
 return 0;
}
