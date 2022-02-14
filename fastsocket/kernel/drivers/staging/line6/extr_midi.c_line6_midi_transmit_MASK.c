
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_line6 {int max_packet_size; struct snd_line6_midi* line6midi; } ;
struct snd_rawmidi_substream {int dummy; } ;
struct MidiBuffer {int dummy; } ;
struct snd_line6_midi {int midi_transmit_lock; int midi_mask_transmit; struct MidiBuffer midibuf_out; } ;
struct TYPE_2__ {struct usb_line6* line6; } ;


 TYPE_1__* FUNC_0 (struct snd_rawmidi_substream*) ;
 int FUNC_1 (struct usb_line6*,char,unsigned char*,int) ;
 int FUNC_2 (struct MidiBuffer*) ;
 int FUNC_3 (struct MidiBuffer*,unsigned char*,int) ;
 scalar_t__ FUNC_4 (struct MidiBuffer*,int ) ;
 int FUNC_5 (struct MidiBuffer*,unsigned char*,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct usb_line6*,unsigned char*,int) ;
 int FUNC_8 (struct snd_rawmidi_substream*,int) ;
 int FUNC_9 (struct snd_rawmidi_substream*,unsigned char*,int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_12(struct snd_rawmidi_substream *VAR_0)
{
 struct usb_line6 *VAR_1 = FUNC_0(VAR_0)->line6;
 struct snd_line6_midi *VAR_2 = VAR_1->line6midi;
 struct MidiBuffer *VAR_3 = &VAR_2->midibuf_out;
 unsigned long VAR_4;
 unsigned char VAR_5[VAR_1->max_packet_size];
 int VAR_6, VAR_7;

 FUNC_10(&VAR_1->line6midi->midi_transmit_lock, VAR_4);

 for (;;) {
  VAR_6 = FUNC_6(FUNC_2(VAR_3), VAR_1->max_packet_size);
  VAR_7 = FUNC_9(VAR_0, VAR_5, VAR_6);

  if (VAR_7 == 0)
   break;




  FUNC_5(VAR_3, VAR_5, VAR_7);
  FUNC_8(VAR_0, VAR_7);
 }

 for (;;) {
  VAR_7 = FUNC_3(VAR_3, VAR_5, VAR_1->max_packet_size);

  if (VAR_7 == 0)
   break;

  if (FUNC_4(VAR_3, VAR_2->midi_mask_transmit))
   continue;

  FUNC_7(VAR_1, VAR_5, VAR_7);
 }

 FUNC_11(&VAR_1->line6midi->midi_transmit_lock, VAR_4);
}
