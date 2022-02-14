
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ audio_opened; } ;
struct TYPE_18__ {TYPE_1__* priv; } ;
struct TYPE_17__ {int buffer_size_min; TYPE_4__* format; TYPE_7__* component; } ;
struct TYPE_16__ {scalar_t__ format; int channels; int samples; int freq; TYPE_6__* userdata; int callback; } ;
struct TYPE_15__ {scalar_t__ encoding; TYPE_3__* es; } ;
struct TYPE_13__ {int bits_per_sample; int channels; int sample_rate; } ;
struct TYPE_14__ {TYPE_2__ audio; } ;
struct TYPE_12__ {TYPE_8__* module; } ;
typedef TYPE_5__ SDL_AudioSpec ;
typedef int MMAL_STATUS_T ;
typedef TYPE_6__ MMAL_PORT_T ;
typedef TYPE_7__ MMAL_COMPONENT_T ;
typedef TYPE_8__ MMAL_COMPONENT_MODULE_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_5__*) ;
 int VAR_9 ;

__attribute__((used)) static MMAL_STATUS_T FUNC_3(MMAL_PORT_T *VAR_10)
{
   MMAL_COMPONENT_T *VAR_11 = VAR_10->component;
   MMAL_COMPONENT_MODULE_T *VAR_12 = VAR_11->priv->module;
   SDL_AudioSpec VAR_13, VAR_14;

   if (VAR_10->format->encoding != VAR_4 &&
       VAR_10->format->encoding != VAR_3 &&
       VAR_10->format->es->audio.bits_per_sample != 16 &&
      VAR_10->format->es->audio.bits_per_sample != 32)
   {
      FUNC_0("port does not support '%4.4s' at %ibps",
                (char *)&VAR_10->format->encoding, VAR_10->format->es->audio.bits_per_sample);
      return VAR_2;
   }

   if (VAR_12->audio_opened)
      FUNC_1();
   VAR_12->audio_opened = VAR_6;

   VAR_13.freq = VAR_10->format->es->audio.sample_rate;
   VAR_13.format = VAR_0;
   VAR_13.channels = VAR_10->format->es->audio.channels;
   VAR_13.callback = VAR_9;
   VAR_13.userdata = VAR_10;
   VAR_13.samples = VAR_1;


   if (FUNC_2( &VAR_13, &VAR_14 ) < 0)
       return VAR_5;
   VAR_12->audio_opened = VAR_8;


   if (VAR_14.format != VAR_0)
      return VAR_5;

   VAR_10->format->es->audio.sample_rate = VAR_14.freq;
   VAR_10->format->es->audio.channels = VAR_14.channels;
   VAR_10->buffer_size_min = VAR_14.samples * VAR_10->format->es->audio.channels * 2;

   return VAR_7;
}
