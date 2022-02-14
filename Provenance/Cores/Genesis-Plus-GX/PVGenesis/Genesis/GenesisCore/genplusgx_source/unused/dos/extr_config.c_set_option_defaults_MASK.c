
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int video_width; int video_height; int video_depth; int skip; int sndcard; int sndrate; int joy_driver; scalar_t__ swap; scalar_t__ sound; scalar_t__ throttle; scalar_t__ vsync; scalar_t__ scale; scalar_t__ scanlines; scalar_t__ remap; int video_driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

void FUNC_0(void)
{
    VAR_2.video_driver = VAR_0;
    VAR_2.video_width = 640;
    VAR_2.video_height = 480;
    VAR_2.video_depth = 16;

    VAR_2.remap = 0;
    VAR_2.scanlines = 0;
    VAR_2.scale = 0;

    VAR_2.vsync = 0;
    VAR_2.throttle = 0;
    VAR_2.skip = 1;

    VAR_2.sound = 0;
    VAR_2.sndcard = -1;
    VAR_2.sndrate = 48000;
    VAR_2.swap = 0;

    VAR_2.joy_driver = VAR_1;
}
