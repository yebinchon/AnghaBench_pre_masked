
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_14__ ;
typedef struct TYPE_26__ TYPE_10__ ;


typedef int uint8_t ;
typedef int ac3_spdif_header ;
struct TYPE_36__ {scalar_t__ status; } ;
struct TYPE_35__ {TYPE_6__** output; TYPE_6__** input; TYPE_3__* priv; } ;
struct TYPE_34__ {int format; } ;
struct TYPE_33__ {TYPE_5__* priv; TYPE_14__* format; int name; } ;
struct TYPE_32__ {scalar_t__ (* pf_set_format ) (TYPE_6__*) ;TYPE_4__* module; } ;
struct TYPE_31__ {int queue; scalar_t__ needs_configuring; } ;
struct TYPE_30__ {TYPE_9__* module; } ;
struct TYPE_28__ {unsigned int sample_rate; } ;
struct TYPE_29__ {TYPE_1__ audio; } ;
struct TYPE_27__ {scalar_t__ encoding; TYPE_2__* es; } ;
struct TYPE_26__ {int length; int flags; unsigned int alloc_size; int* data; int offset; int dts; scalar_t__ pts; scalar_t__ cmd; } ;
typedef TYPE_6__ MMAL_PORT_T ;
typedef TYPE_7__ MMAL_EVENT_FORMAT_CHANGED_T ;
typedef TYPE_8__ MMAL_COMPONENT_T ;
typedef TYPE_9__ MMAL_COMPONENT_MODULE_T ;
typedef TYPE_10__ MMAL_BUFFER_HEADER_T ;
typedef int MMAL_BOOL_T ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,unsigned int,unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (unsigned int,unsigned int) ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_4 (int*,int const*,int) ;
 int FUNC_5 (int*,int ,unsigned int) ;
 int FUNC_6 (TYPE_10__*) ;
 int FUNC_7 (TYPE_10__*) ;
 scalar_t__ FUNC_8 (TYPE_8__*,scalar_t__) ;
 TYPE_7__* FUNC_9 (TYPE_10__*) ;
 scalar_t__ FUNC_10 (TYPE_14__*,int ) ;
 int FUNC_11 (TYPE_6__*,TYPE_10__*) ;
 TYPE_10__* FUNC_12 (int ) ;
 int FUNC_13 (int ,TYPE_10__*) ;
 int FUNC_14 (TYPE_8__*,TYPE_6__*,TYPE_14__*) ;
 scalar_t__ FUNC_15 (TYPE_6__*) ;

__attribute__((used)) static MMAL_BOOL_T FUNC_16(MMAL_COMPONENT_T *VAR_6)
{
   static const uint8_t VAR_7[6] = {0x72,0xF8,0x1F,0x4E,0x1, 0};
   MMAL_COMPONENT_MODULE_T *VAR_8 = VAR_6->priv->module;
   MMAL_PORT_T *VAR_9 = VAR_6->input[0];
   MMAL_PORT_T *VAR_10 = VAR_6->output[0];
   MMAL_BUFFER_HEADER_T *VAR_11, *VAR_12;
   unsigned int VAR_13, VAR_14, VAR_15, VAR_16;
   uint8_t *VAR_17;

   if (VAR_10->priv->module->needs_configuring)
      return 0;

   VAR_11 = FUNC_12(VAR_9->priv->module->queue);
   if (!VAR_11)
      return 0;


   if (VAR_11->cmd)
   {
      MMAL_EVENT_FORMAT_CHANGED_T *VAR_18 = FUNC_9(VAR_11);
      if (VAR_18)
      {
         VAR_8->status = FUNC_10(VAR_9->format, VAR_18->format);
         if (VAR_8->status == VAR_3)
            VAR_8->status = VAR_9->priv->pf_set_format(VAR_9);
         if (VAR_8->status != VAR_3)
         {
            FUNC_1("format not set on port %s %p (%i)", VAR_9->name, VAR_9, VAR_8->status);
            if (FUNC_8(VAR_6, VAR_8->status) != VAR_3)
               FUNC_1("unable to send an error event buffer");
         }
      }
      else
      {
         FUNC_1("discarding event %i on port %s %p", (int)VAR_11->cmd, VAR_9->name, VAR_9);
      }

      VAR_11->length = 0;
      FUNC_11(VAR_9, VAR_11);
      return 1;
   }


   if (VAR_8->status != VAR_3)
   {
      FUNC_13(VAR_9->priv->module->queue, VAR_11);
      return 0;
   }


   if (!VAR_11->length && !VAR_11->flags)
   {
      FUNC_11(VAR_9, VAR_11);
      return 1;
   }

   if (VAR_11->flags & VAR_0)
   {
      FUNC_0("config buffer %ibytes", VAR_11->length);
      VAR_11->length = 0;
      FUNC_11(VAR_9, VAR_11);
      return 1;
   }

   VAR_12 = FUNC_12(VAR_10->priv->module->queue);
   if (!VAR_12)
   {
      FUNC_13(VAR_9->priv->module->queue, VAR_11);
      return 0;
   }

   VAR_16 = VAR_4;
   if (VAR_10->format->encoding == VAR_2)
      VAR_16 = VAR_5;


   if (VAR_12->alloc_size < VAR_16)
   {
      VAR_8->status = VAR_1;
      if (FUNC_8(VAR_6, VAR_8->status) != VAR_3)
         FUNC_1("unable to send an error event buffer");
      FUNC_13(VAR_9->priv->module->queue, VAR_11);
      FUNC_13(VAR_10->priv->module->queue, VAR_12);
      return 0;
   }


   if (!VAR_11->length && VAR_11->flags)
   {
      VAR_12->length = 0;
      goto end;
   }

   FUNC_0("frame: %lld, size %i", VAR_11->pts, VAR_11->length);
   FUNC_6(VAR_12);
   FUNC_6(VAR_11);
   VAR_17 = VAR_11->data + VAR_11->offset;


   if (VAR_11->length < 5)
   {
      FUNC_1("invalid data size (%i bytes)", VAR_11->length);
      goto discard;
   }

   if (!(VAR_17[0] == 0x0B || VAR_17[1] == 0x77) &&
       !(VAR_17[0] == 0x77 || VAR_17[1] == 0x0B))
   {
      FUNC_1("invalid data (%i bytes): %2.2x,%2.2x,%2.2x,%2.2x",
         VAR_11->length, VAR_17[0], VAR_17[1], VAR_17[2], VAR_17[3]);
      goto discard;
   }



   if ((VAR_17[4] & 0xC0) == 0x40) VAR_14 = 44100;
   else if ((VAR_17[4] & 0xC0) == 0x80) VAR_14 = 32000;
   else VAR_14 = 48000;



   if (VAR_14 != VAR_10->format->es->audio.sample_rate)
   {
      FUNC_2("format change: %i->%i",
         VAR_10->format->es->audio.sample_rate, VAR_14);
      VAR_9->format->es->audio.sample_rate = VAR_14;
      FUNC_14(VAR_6, VAR_10, VAR_9->format);
      FUNC_7(VAR_11);
      FUNC_7(VAR_12);
      FUNC_13(VAR_9->priv->module->queue, VAR_11);
      FUNC_13(VAR_10->priv->module->queue, VAR_12);
      return 0;
   }



   if (VAR_11->length > VAR_16 - 8)
      FUNC_1("frame too big, truncating (%i/%i bytes)",
         VAR_11->length, VAR_16 - 8);
   VAR_15 = FUNC_3(VAR_11->length, VAR_16 - 8) / 2;
   FUNC_4(VAR_12->data, VAR_7, sizeof(VAR_7));
   VAR_12->data[5] = VAR_17[5] & 0x7;
   VAR_12->data[6] = VAR_15 & 0xFF;
   VAR_12->data[7] = VAR_15 >> 8;


   if (VAR_17[0] == 0x0B)
   {
      for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++)
      {
         VAR_12->data[8+VAR_13*2] = VAR_17[VAR_11->offset+VAR_13*2+1];
         VAR_12->data[8+VAR_13*2+1] = VAR_17[VAR_11->offset+VAR_13*2];
      }
   }
   else
      FUNC_4(VAR_12->data + 8, VAR_17, VAR_11->length);


   FUNC_5(VAR_12->data + 8 + VAR_15 * 2, 0,
      VAR_16 - VAR_15 * 2 - 8);
   FUNC_7(VAR_11);
   FUNC_7(VAR_12);
   VAR_12->length = VAR_16;
 end:
   VAR_12->offset = 0;
   VAR_12->flags = VAR_11->flags;
   VAR_12->pts = VAR_11->pts;
   VAR_12->dts = VAR_11->dts;


   VAR_11->length = 0;
   FUNC_11(VAR_9, VAR_11);
   FUNC_11(VAR_10, VAR_12);
   return 1;

 discard:
   FUNC_7(VAR_11);
   FUNC_7(VAR_12);
   VAR_11->length = 0;
   FUNC_13(VAR_10->priv->module->queue, VAR_12);
   FUNC_11(VAR_9, VAR_11);
   return 1;
}
