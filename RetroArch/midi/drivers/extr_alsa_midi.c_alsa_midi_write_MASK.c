
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_28__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_16__ {TYPE_9__ time; } ;
struct TYPE_25__ {int* ptr; int len; } ;
struct TYPE_24__ {int channel; int param; int value; } ;
struct TYPE_23__ {int channel; int note; int velocity; } ;
struct TYPE_26__ {TYPE_6__ ext; TYPE_5__ control; TYPE_4__ note; } ;
struct TYPE_22__ {int client; } ;
struct TYPE_20__ {int port; } ;
struct TYPE_17__ {scalar_t__ type; int flags; TYPE_10__ time; TYPE_7__ data; TYPE_3__ dest; TYPE_1__ source; int queue; } ;
typedef TYPE_11__ snd_seq_event_t ;
struct TYPE_18__ {int* data; int delta_time; int data_size; } ;
typedef TYPE_12__ midi_event_t ;
struct TYPE_27__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_21__ {int port; } ;
struct TYPE_19__ {TYPE_8__ out_ev_time; int seq; TYPE_2__ out_src; int out_queue; } ;
typedef TYPE_13__ alsa_midi_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__* VAR_12 ;
 int FUNC_1 (int ,TYPE_11__*) ;

__attribute__((used)) static bool FUNC_2(void *VAR_13, const midi_event_t *VAR_14)
{
   int VAR_15;
   snd_seq_event_t VAR_16;
   alsa_midi_t *VAR_17 = (alsa_midi_t*)VAR_13;

   VAR_16.type = VAR_12[(VAR_14->data[0] >> 4) & 7];
   VAR_16.flags = VAR_11 | VAR_10;
   VAR_16.queue = VAR_17->out_queue;
   VAR_16.time.time.tv_sec = VAR_17->out_ev_time.tv_sec + VAR_14->delta_time / 1000000;
   VAR_16.time.time.tv_nsec = VAR_17->out_ev_time.tv_nsec +
         (VAR_14->delta_time % 1000000) * 1000;
   if(VAR_16.time.time.tv_nsec >= 1000000000)
   {
       VAR_16.time.time.tv_sec += 1;
       VAR_16.time.time.tv_nsec -= 1000000000;
   }
   VAR_16.source.port = VAR_17->out_src.port;
   VAR_16.dest.client = VAR_0;

   if (VAR_16.type == VAR_5 || VAR_16.type == VAR_6 ||
         VAR_16.type == VAR_3)
   {
      VAR_16.data.note.channel = VAR_14->data[0] & 0x0F;
      VAR_16.data.note.note = VAR_14->data[1];
      VAR_16.data.note.velocity = VAR_14->data[2];
   }
   else if (VAR_16.type == VAR_2)
   {
      VAR_16.data.control.channel = VAR_14->data[0] & 0x0F;
      VAR_16.data.control.param = VAR_14->data[1];
      VAR_16.data.control.value = VAR_14->data[2];
   }
   else if (VAR_16.type == VAR_7 ||
         VAR_16.type == VAR_1)
   {
      VAR_16.data.control.channel = VAR_14->data[0] & 0x0F;
      VAR_16.data.control.value = VAR_14->data[1];
   }
   else if (VAR_16.type == VAR_8)
   {
      VAR_16.data.control.channel = VAR_14->data[0] & 0x0F;
      VAR_16.data.control.value = (VAR_14->data[1] | (VAR_14->data[2] << 7)) - 0x2000;
   }
   else if (VAR_16.type == VAR_9)
   {
      VAR_16.flags |= VAR_4;
      VAR_16.data.ext.ptr = VAR_14->data;
      VAR_16.data.ext.len = VAR_14->data_size;
   }

   VAR_15 = FUNC_1(VAR_17->seq, &VAR_16);





   VAR_17->out_ev_time.tv_sec = VAR_16.time.time.tv_sec;
   VAR_17->out_ev_time.tv_nsec = VAR_16.time.time.tv_nsec;

   return VAR_15 >= 0;
}
