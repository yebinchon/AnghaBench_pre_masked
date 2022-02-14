
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int len; scalar_t__ ptr; } ;
struct TYPE_12__ {int channel; int param; int value; } ;
struct TYPE_11__ {int channel; int note; int velocity; } ;
struct TYPE_14__ {TYPE_3__ ext; TYPE_2__ control; TYPE_1__ note; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_4__ data; } ;
typedef TYPE_5__ snd_seq_event_t ;
struct TYPE_16__ {int* data; int data_size; scalar_t__ delta_time; } ;
typedef TYPE_6__ midi_event_t ;
struct TYPE_17__ {int seq; } ;
typedef TYPE_7__ alsa_midi_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,TYPE_5__**) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static bool FUNC_3(void *VAR_9, midi_event_t *VAR_10)
{
   int VAR_11;
   snd_seq_event_t *VAR_12;
   alsa_midi_t *VAR_13 = (alsa_midi_t*)VAR_9;

   VAR_11 = FUNC_1(VAR_13->seq, &VAR_12);
   if (VAR_11 < 0)
   {




      return 0;
   }

   if (VAR_12->type == VAR_4)
   {
      VAR_10->data[0] = 0x80 | VAR_12->data.note.channel;
      VAR_10->data[1] = VAR_12->data.note.note;
      VAR_10->data[2] = VAR_12->data.note.velocity;
      VAR_10->data_size = 3;
   }
   else if (VAR_12->type == VAR_5)
   {
      VAR_10->data[0] = 0x90 | VAR_12->data.note.channel;
      VAR_10->data[1] = VAR_12->data.note.note;
      VAR_10->data[2] = VAR_12->data.note.velocity;
      VAR_10->data_size = 3;
   }
   else if (VAR_12->type == VAR_3)
   {
      VAR_10->data[0] = 0xA0 | VAR_12->data.note.channel;
      VAR_10->data[1] = VAR_12->data.note.note;
      VAR_10->data[2] = VAR_12->data.note.velocity;
      VAR_10->data_size = 3;
   }
   else if (VAR_12->type == VAR_2)
   {
      VAR_10->data[0] = 0xB0 | VAR_12->data.control.channel;
      VAR_10->data[1] = VAR_12->data.control.param;
      VAR_10->data[2] = VAR_12->data.control.value;
      VAR_10->data_size = 3;
   }
   else if (VAR_12->type == VAR_6)
   {
      VAR_10->data[0] = 0xC0 | VAR_12->data.control.channel;
      VAR_10->data[1] = VAR_12->data.control.value;
      VAR_10->data_size = 2;
   }
   else if (VAR_12->type == VAR_1)
   {
      VAR_10->data[0] = 0xD0 | VAR_12->data.control.channel;
      VAR_10->data[1] = VAR_12->data.control.value;
      VAR_10->data_size = 2;
   }
   else if (VAR_12->type == VAR_7)
   {
      VAR_10->data[0] = 0xE0 | VAR_12->data.control.channel;
      VAR_10->data[1] = VAR_12->data.control.value & 127;
      VAR_10->data[2] = VAR_12->data.control.value >> 7;
      VAR_10->data_size = 3;
   }
   else if (VAR_12->type == VAR_8)
   {
      if (VAR_12->data.ext.len <= VAR_10->data_size)
      {
         size_t VAR_14;
         uint8_t *VAR_15 = (uint8_t*)VAR_12->data.ext.ptr;

         for (VAR_14 = 0; VAR_14 < VAR_12->data.ext.len; ++VAR_14)
            VAR_10->data[VAR_14] = VAR_15[VAR_14];

         VAR_10->data_size = VAR_12->data.ext.len;
      }







   }
   else
      VAR_11 = -1;

   VAR_10->delta_time = 0;
   FUNC_2(VAR_12);

   return VAR_11 >= 0;
}
