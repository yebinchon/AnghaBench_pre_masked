
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int uint32_t ;
struct TYPE_26__ {scalar_t__ bits_per_sample; scalar_t__ sample_rate; scalar_t__ channels; } ;
struct TYPE_25__ {scalar_t__ cmd; scalar_t__ data; } ;
struct TYPE_24__ {scalar_t__ type; TYPE_4__* es; } ;
struct TYPE_23__ {int buffer_size_min; int buffer_num_min; int format; } ;
struct TYPE_19__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_18__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_22__ {TYPE_2__ crop; scalar_t__ height; scalar_t__ width; TYPE_1__ par; } ;
struct TYPE_21__ {TYPE_9__ audio; TYPE_5__ video; } ;
struct TYPE_20__ {scalar_t__ type; int buffer_size_min; int buffer_num_min; TYPE_7__* format; } ;
struct TYPE_17__ {int index; void* format_changed; TYPE_3__* mmal; int * component; } ;
typedef TYPE_5__ MMAL_VIDEO_FORMAT_T ;
typedef int MMAL_STATUS_T ;
typedef TYPE_6__ MMAL_EVENT_FORMAT_CHANGED_T ;
typedef TYPE_7__ MMAL_ES_FORMAT_T ;
typedef TYPE_8__ MMAL_BUFFER_HEADER_T ;
typedef TYPE_9__ MMAL_AUDIO_FORMAT_T ;
typedef TYPE_10__ MMALOMX_PORT_T ;
typedef int MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,int,int,int,int,...) ;
 int FUNC_1 (char*,int *,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_6__* FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (int ,TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_7(
   MMALOMX_PORT_T *VAR_12,
   MMAL_BUFFER_HEADER_T *VAR_13)
{
   MMALOMX_COMPONENT_T *VAR_14 = VAR_12->component;
   MMAL_EVENT_FORMAT_CHANGED_T *VAR_15;

   FUNC_1("hComponent %p, port %i, event %4.4s", VAR_14, VAR_12->index,
             (char *)&VAR_13->cmd);

   if (VAR_13->cmd == VAR_6 )
   {
      FUNC_6(VAR_14, VAR_9,
         FUNC_5(*(MMAL_STATUS_T *)VAR_13->data), 0, ((void*)0));
      return;
   }

   VAR_15 = FUNC_2(VAR_13);
   if (VAR_15 && VAR_12->mmal->type == VAR_7 &&
       VAR_12->mmal->format->type == VAR_5)
   {
      uint32_t VAR_16 = FUNC_3(VAR_15->format, VAR_12->mmal->format);
      MMAL_ES_FORMAT_T *VAR_17 = VAR_12->mmal->format;
      MMAL_VIDEO_FORMAT_T VAR_18 = VAR_17->es->video;


      FUNC_4(VAR_17, VAR_15->format);
      VAR_12->mmal->buffer_num_min = VAR_15->buffer_num_min;
      VAR_12->mmal->buffer_size_min = VAR_15->buffer_size_min;
      VAR_12->format_changed = VAR_8;

      if ((VAR_16 & VAR_1) &&

          !(VAR_17->es->video.par.num == VAR_17->es->video.par.den && !VAR_18.par.num))
      {
         FUNC_0("aspect ratio change %ix%i->%ix%i", (int)VAR_18.par.num, (int)VAR_18.par.den,
                   (int)VAR_17->es->video.par.num, (int)VAR_17->es->video.par.den);
         FUNC_6(VAR_14, VAR_10,
                                        VAR_12->index, VAR_11, ((void*)0));
      }

      if (VAR_16 & (VAR_0|
                  VAR_3|
                  VAR_2))
      {
         FUNC_0("format change %ix%i(%ix%i) -> %ix%i(%ix%i)",
                   (int)VAR_18.width, (int)VAR_18.height,
                   (int)VAR_18.crop.width, (int)VAR_18.crop.height,
                   (int)VAR_17->es->video.width, (int)VAR_17->es->video.height,
                   (int)VAR_17->es->video.crop.width, (int)VAR_17->es->video.crop.height);
         FUNC_6(VAR_14, VAR_10,
                                        VAR_12->index, 0, ((void*)0));
      }
   }
   else if (VAR_15 && VAR_12->mmal->type == VAR_7 &&
       VAR_12->mmal->format->type == VAR_4)
   {
      uint32_t VAR_19 = FUNC_3(VAR_15->format, VAR_12->mmal->format);
      MMAL_ES_FORMAT_T *VAR_20 = VAR_12->mmal->format;
      MMAL_AUDIO_FORMAT_T VAR_21 = VAR_20->es->audio;


      FUNC_4(VAR_20, VAR_15->format);
      VAR_12->mmal->buffer_num_min = VAR_15->buffer_num_min;
      VAR_12->mmal->buffer_size_min = VAR_15->buffer_size_min;
      VAR_12->format_changed = VAR_8;

      if (VAR_19)
      {
         FUNC_0("format change %ich, %iHz, %ibps -> %ich, %iHz, %ibps",
                   (int)VAR_21.channels, (int)VAR_21.sample_rate,
                   (int)VAR_21.bits_per_sample,
                   (int)VAR_20->es->audio.channels,
                   (int)VAR_20->es->audio.sample_rate,
                   (int)VAR_20->es->audio.bits_per_sample);
         FUNC_6(VAR_14, VAR_10,
                                        VAR_12->index, 0, ((void*)0));
      }
   }
}
