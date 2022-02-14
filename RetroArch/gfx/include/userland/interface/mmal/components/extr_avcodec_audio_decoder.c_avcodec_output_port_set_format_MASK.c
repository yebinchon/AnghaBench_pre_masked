
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ bits_per_sample; scalar_t__ output_needs_configuring; scalar_t__ channels; scalar_t__ sample_rate; TYPE_1__* codec_context; int sample_fmt; } ;
struct TYPE_17__ {TYPE_5__* priv; } ;
struct TYPE_16__ {TYPE_7__* component; TYPE_4__* format; } ;
struct TYPE_15__ {TYPE_8__* module; } ;
struct TYPE_14__ {scalar_t__ encoding; TYPE_3__* es; } ;
struct TYPE_12__ {scalar_t__ bits_per_sample; scalar_t__ channels; scalar_t__ sample_rate; } ;
struct TYPE_13__ {TYPE_2__ audio; } ;
struct TYPE_11__ {int sample_fmt; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_6__ MMAL_PORT_T ;
typedef TYPE_7__ MMAL_COMPONENT_T ;
typedef TYPE_8__ MMAL_COMPONENT_MODULE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_3(MMAL_PORT_T *VAR_2)
{
   MMAL_COMPONENT_T *VAR_3 = VAR_2->component;
   MMAL_COMPONENT_MODULE_T *VAR_4 = VAR_3->priv->module;


   if (FUNC_1(VAR_4->codec_context->sample_fmt) != VAR_2->format->encoding ||
       FUNC_2(VAR_4->codec_context->sample_fmt) != VAR_2->format->es->audio.bits_per_sample)
      return VAR_0;

   if (!VAR_2->format->es->audio.sample_rate || !VAR_2->format->es->audio.channels)
      return VAR_0;

   VAR_4->sample_fmt = VAR_4->codec_context->sample_fmt;
   VAR_4->sample_rate = VAR_2->format->es->audio.sample_rate;
   VAR_4->channels = VAR_2->format->es->audio.channels;
   VAR_4->bits_per_sample = VAR_2->format->es->audio.bits_per_sample;

   VAR_2->component->priv->module->output_needs_configuring = 0;
   FUNC_0(VAR_2->component);

   return VAR_1;
}
