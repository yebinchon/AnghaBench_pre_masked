
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint ;
struct v4l2_ext_control {int id; int value; } ;
struct hdpvr_options {int audio_codec; void* bitrate; void* peak_bitrate; int bitrate_mode; int audio_input; } ;
struct hdpvr_device {int flags; struct hdpvr_options options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hdpvr_device*,int ,int ) ;
 int FUNC_1 (struct hdpvr_device*,int ,int) ;
 int FUNC_2 (struct hdpvr_device*) ;

__attribute__((used)) static int FUNC_3(struct hdpvr_device *VAR_7,
     struct v4l2_ext_control *VAR_8)
{
 struct hdpvr_options *VAR_9 = &VAR_7->options;
 int VAR_10 = 0;

 switch (VAR_8->id) {
 case 133:
  if (VAR_7->flags & VAR_3) {
   VAR_9->audio_codec = VAR_8->value;
   VAR_10 = FUNC_1(VAR_7, VAR_9->audio_input,
           VAR_9->audio_codec);
  }
  break;
 case 128:
  break;
 case 130:
  if (VAR_8->value == VAR_5 &&
      VAR_9->bitrate_mode != VAR_2) {
   VAR_9->bitrate_mode = VAR_2;
   FUNC_0(VAR_7, VAR_0,
       VAR_9->bitrate_mode);
  }
  if (VAR_8->value == VAR_6 &&
      VAR_9->bitrate_mode == VAR_2) {
   VAR_9->bitrate_mode = VAR_4;
   FUNC_0(VAR_7, VAR_0,
       VAR_9->bitrate_mode);
  }
  break;
 case 131: {
  uint VAR_11 = VAR_8->value / 100000;

  VAR_9->bitrate = VAR_11;
  if (VAR_11 >= VAR_9->peak_bitrate)
   VAR_9->peak_bitrate = VAR_11+1;

  FUNC_2(VAR_7);
  break;
 }
 case 129: {
  uint VAR_12 = VAR_8->value / 100000;

  if (VAR_9->bitrate_mode == VAR_2)
   break;

  if (VAR_9->bitrate < VAR_12) {
   VAR_9->peak_bitrate = VAR_12;
   FUNC_2(VAR_7);
  } else
   VAR_10 = -VAR_1;
  break;
 }
 case 132:
  break;
 default:
  return -VAR_1;
 }
 return VAR_10;
}
