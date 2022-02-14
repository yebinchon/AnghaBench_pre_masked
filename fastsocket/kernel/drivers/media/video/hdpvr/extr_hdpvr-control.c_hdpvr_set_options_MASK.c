
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sharpness; scalar_t__ saturation; scalar_t__ hue; scalar_t__ contrast; scalar_t__ brightness; scalar_t__ gop_mode; scalar_t__ bitrate_mode; int audio_codec; scalar_t__ audio_input; scalar_t__ video_input; scalar_t__ video_std; } ;
struct hdpvr_device {TYPE_1__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct hdpvr_device*,int ,scalar_t__) ;
 int FUNC_1 (struct hdpvr_device*,scalar_t__,int ) ;
 int FUNC_2 (struct hdpvr_device*) ;

int FUNC_3(struct hdpvr_device *VAR_9)
{
 FUNC_0(VAR_9, VAR_8, VAR_9->options.video_std);

 FUNC_0(VAR_9, VAR_7,
    VAR_9->options.video_input+1);

 FUNC_1(VAR_9, VAR_9->options.audio_input+1,
         VAR_9->options.audio_codec);

 FUNC_2(VAR_9);
 FUNC_0(VAR_9, VAR_0,
    VAR_9->options.bitrate_mode);
 FUNC_0(VAR_9, VAR_3, VAR_9->options.gop_mode);

 FUNC_0(VAR_9, VAR_1, VAR_9->options.brightness);
 FUNC_0(VAR_9, VAR_2, VAR_9->options.contrast);
 FUNC_0(VAR_9, VAR_4, VAR_9->options.hue);
 FUNC_0(VAR_9, VAR_5, VAR_9->options.saturation);
 FUNC_0(VAR_9, VAR_6, VAR_9->options.sharpness);

 return 0;
}
