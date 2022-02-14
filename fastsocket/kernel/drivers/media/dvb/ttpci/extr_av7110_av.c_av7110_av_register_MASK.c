
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int video_size_t ;
struct TYPE_6__ {scalar_t__ overflow; scalar_t__ eventr; scalar_t__ eventw; int lock; int wait_queue; } ;
struct TYPE_5__ {int display_format; void* video_format; int stream_source; int play_state; scalar_t__ video_blank; } ;
struct TYPE_4__ {scalar_t__ bypass_mode; int channel_select; int stream_source; int play_state; scalar_t__ mute_state; scalar_t__ AV_sync_state; } ;
struct av7110 {int audio_dev; int dvb_adapter; int video_dev; int video_size; TYPE_3__ video_events; int display_panscan; void* display_ar; TYPE_2__ videostate; TYPE_1__ audiostate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int *,int *,struct av7110*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct av7110 *VAR_12)
{
 VAR_12->audiostate.AV_sync_state = 0;
 VAR_12->audiostate.mute_state = 0;
 VAR_12->audiostate.play_state = VAR_2;
 VAR_12->audiostate.stream_source = VAR_0;
 VAR_12->audiostate.channel_select = VAR_1;
 VAR_12->audiostate.bypass_mode = 0;

 VAR_12->videostate.video_blank = 0;
 VAR_12->videostate.play_state = VAR_8;
 VAR_12->videostate.stream_source = VAR_7;
 VAR_12->videostate.video_format = VAR_5;
 VAR_12->videostate.display_format = VAR_6;
 VAR_12->display_ar = VAR_5;
 VAR_12->display_panscan = VAR_9;

 FUNC_1(&VAR_12->video_events.wait_queue);
 FUNC_3(&VAR_12->video_events.lock);
 VAR_12->video_events.eventw = VAR_12->video_events.eventr = 0;
 VAR_12->video_events.overflow = 0;
 FUNC_2(&VAR_12->video_size, 0, sizeof (video_size_t));

 FUNC_0(&VAR_12->dvb_adapter, &VAR_12->video_dev,
       &VAR_11, VAR_12, VAR_4);

 FUNC_0(&VAR_12->dvb_adapter, &VAR_12->audio_dev,
       &VAR_10, VAR_12, VAR_3);

 return 0;
}
