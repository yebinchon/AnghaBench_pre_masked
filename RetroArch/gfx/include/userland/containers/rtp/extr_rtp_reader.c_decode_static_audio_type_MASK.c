
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_16__ {TYPE_4__* priv; TYPE_6__* format; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_T ;
typedef int const VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_17__ {scalar_t__ codec; TYPE_2__* type; int es_type; } ;
typedef TYPE_6__ VC_CONTAINER_ES_FORMAT_T ;
typedef int VC_CONTAINERS_LIST_T ;
struct TYPE_18__ {scalar_t__ codec; int channels; int (* param_handler ) (int const*,TYPE_5__*,int const*) ;int payload_handler; int bits_per_sample; int sample_rate; } ;
struct TYPE_15__ {TYPE_3__* module; } ;
struct TYPE_14__ {int payload_handler; int timestamp_clock; } ;
struct TYPE_12__ {int channels; int block_align; int sample_rate; int bits_per_sample; } ;
struct TYPE_13__ {TYPE_1__ audio; } ;
typedef TYPE_7__ AUDIO_PAYLOAD_TYPE_DATA_T ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int const*) ;
 int VAR_3 ;
 size_t FUNC_2 (TYPE_7__*) ;
 TYPE_7__* VAR_4 ;
 int FUNC_3 (int const*,TYPE_5__*,int const*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5(VC_CONTAINER_T *VAR_5,
      VC_CONTAINER_TRACK_T *VAR_6,
      const VC_CONTAINERS_LIST_T *VAR_7,
      uint32_t VAR_8)
{
   VC_CONTAINER_ES_FORMAT_T *VAR_9 = VAR_6->format;
   AUDIO_PAYLOAD_TYPE_DATA_T *VAR_10 = &VAR_4[VAR_8];

   FUNC_1(VAR_5);
   FUNC_1(VAR_7);

   FUNC_4(VAR_8 < FUNC_2(VAR_4));

   if (VAR_10->codec == VAR_0)
      return VAR_1;

   VAR_9->es_type = VAR_2;
   VAR_9->codec = VAR_10->codec;
   VAR_9->type->audio.channels = VAR_10->channels;
   VAR_9->type->audio.sample_rate = VAR_10->sample_rate;
   VAR_9->type->audio.bits_per_sample = VAR_10->bits_per_sample;
   VAR_9->type->audio.block_align = VAR_10->channels * FUNC_0(VAR_10->bits_per_sample);
   VAR_6->priv->module->timestamp_clock = VAR_9->type->audio.sample_rate;
   VAR_6->priv->module->payload_handler = VAR_10->payload_handler;

   if (VAR_10->param_handler)
      VAR_10->param_handler(VAR_5, VAR_6, VAR_7);

   return VAR_3;
}
