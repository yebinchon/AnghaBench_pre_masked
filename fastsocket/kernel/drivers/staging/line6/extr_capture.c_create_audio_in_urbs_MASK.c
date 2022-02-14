
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int start_frame; int complete; scalar_t__ error_count; int interval; int number_of_packets; int transfer_flags; int pipe; int dev; } ;
struct snd_line6_pcm {int ep_audio_read; TYPE_1__* line6; struct urb** urb_audio_in; } ;
struct TYPE_2__ {int usbdev; int ifcdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 struct urb* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct snd_line6_pcm *VAR_8)
{
 int VAR_9;


 for (VAR_9 = 0; VAR_9 < VAR_2; ++VAR_9) {
  struct urb *VAR_10;


  VAR_10 = VAR_8->urb_audio_in[VAR_9] = FUNC_1(VAR_4, VAR_1);

  if (VAR_10 == ((void*)0)) {
   FUNC_0(VAR_8->line6->ifcdev, "Out of memory\n");
   return -VAR_0;
  }

  VAR_10->dev = VAR_8->line6->usbdev;
  VAR_10->pipe = FUNC_2(VAR_8->line6->usbdev, VAR_8->ep_audio_read & VAR_6);
  VAR_10->transfer_flags = VAR_5;
  VAR_10->start_frame = -1;
  VAR_10->number_of_packets = VAR_4;
  VAR_10->interval = VAR_3;
  VAR_10->error_count = 0;
  VAR_10->complete = VAR_7;
 }

 return 0;
}
