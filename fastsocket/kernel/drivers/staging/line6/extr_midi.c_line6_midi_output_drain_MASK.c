
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct usb_line6 {TYPE_1__* line6midi; } ;
struct snd_rawmidi_substream {int dummy; } ;
struct TYPE_8__ {struct usb_line6* line6; } ;
struct TYPE_7__ {int state; } ;
struct TYPE_6__ {scalar_t__ num_active_send_urbs; int send_wait; } ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 TYPE_2__* VAR_2 ;
 TYPE_3__* FUNC_2 (struct snd_rawmidi_substream*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(struct snd_rawmidi_substream *VAR_4)
{
 struct usb_line6 *VAR_5 = FUNC_2(VAR_4)->line6;
 wait_queue_head_t *VAR_6 = &VAR_5->line6midi->send_wait;
 FUNC_0(VAR_3, VAR_2);
 FUNC_1(VAR_6, &VAR_3);
 VAR_2->state = VAR_0;

 while (VAR_5->line6midi->num_active_send_urbs > 0)
  if (FUNC_5(VAR_2))
   break;
  else
   FUNC_4();

 VAR_2->state = VAR_1;
 FUNC_3(VAR_6, &VAR_3);
}
