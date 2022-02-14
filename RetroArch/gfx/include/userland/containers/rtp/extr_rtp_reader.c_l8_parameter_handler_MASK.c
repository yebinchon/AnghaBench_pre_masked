
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* priv; TYPE_4__* format; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_13__ {int sample_rate; int channels; int bits_per_sample; int block_align; } ;
typedef TYPE_6__ VC_CONTAINER_AUDIO_FORMAT_T ;
typedef int VC_CONTAINERS_LIST_T ;
struct TYPE_11__ {TYPE_3__* type; } ;
struct TYPE_10__ {TYPE_6__ audio; } ;
struct TYPE_9__ {TYPE_1__* module; } ;
struct TYPE_8__ {int timestamp_clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int const*,int ,int*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2(VC_CONTAINER_T *VAR_4,
      VC_CONTAINER_TRACK_T *VAR_5,
      const VC_CONTAINERS_LIST_T *VAR_6)
{
   VC_CONTAINER_AUDIO_FORMAT_T *VAR_7 = &VAR_5->format->type->audio;

   FUNC_0(VAR_4);


   if (!FUNC_1(VAR_6, VAR_1, &VAR_7->sample_rate))
      return VAR_2;
   if (!FUNC_1(VAR_6, VAR_0, &VAR_7->channels))
      VAR_7->channels = 1;
   VAR_7->bits_per_sample = 8;
   VAR_7->block_align = VAR_7->channels;
   VAR_5->priv->module->timestamp_clock = VAR_7->sample_rate;

   return VAR_3;
}
