
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_line6 {TYPE_1__* line6midi; } ;
struct snd_rawmidi_substream {int dummy; } ;
struct TYPE_4__ {struct usb_line6* line6; } ;
struct TYPE_3__ {scalar_t__ num_active_send_urbs; int send_urb_lock; struct snd_rawmidi_substream* substream_transmit; } ;


 int FUNC_0 (struct snd_rawmidi_substream*) ;
 TYPE_2__* FUNC_1 (struct snd_rawmidi_substream*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct snd_rawmidi_substream *VAR_0,
          int VAR_1)
{
 unsigned long VAR_2;
 struct usb_line6 *VAR_3 = FUNC_1(VAR_0)->line6;

 VAR_3->line6midi->substream_transmit = VAR_0;
 FUNC_2(&VAR_3->line6midi->send_urb_lock, VAR_2);

 if (VAR_3->line6midi->num_active_send_urbs == 0)
  FUNC_0(VAR_0);

 FUNC_3(&VAR_3->line6midi->send_urb_lock, VAR_2);
}
