
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_control {int id; int value; } ;
struct hdpvr_options {int audio_codec; int bitrate; int peak_bitrate; int bitrate_mode; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(struct hdpvr_options *VAR_6,
     struct v4l2_ext_control *VAR_7)
{
 switch (VAR_7->id) {
 case 133:
  VAR_7->value = VAR_6->audio_codec;
  break;
 case 128:
  VAR_7->value = VAR_5;
  break;



 case 130:
  VAR_7->value = VAR_6->bitrate_mode == VAR_1
   ? VAR_3
   : VAR_4;
  break;
 case 131:
  VAR_7->value = VAR_6->bitrate * 100000;
  break;
 case 129:
  VAR_7->value = VAR_6->peak_bitrate * 100000;
  break;
 case 132:
  VAR_7->value = VAR_2;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
