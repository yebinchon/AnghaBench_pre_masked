
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
struct TYPE_13__ {int sample_rate; int channels; int block_align; int bits_per_sample; } ;
typedef TYPE_6__ VC_CONTAINER_AUDIO_FORMAT_T ;
typedef int VC_CONTAINERS_LIST_T ;
struct TYPE_11__ {TYPE_3__* type; } ;
struct TYPE_10__ {TYPE_6__ audio; } ;
struct TYPE_9__ {TYPE_1__* module; } ;
struct TYPE_8__ {int timestamp_clock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int const*,int ,int*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3(VC_CONTAINER_T *VAR_3,
      VC_CONTAINER_TRACK_T *VAR_4,
      const VC_CONTAINERS_LIST_T *VAR_5)
{
   VC_CONTAINER_AUDIO_FORMAT_T *VAR_6 = &VAR_4->format->type->audio;

   FUNC_1(VAR_3);



   if (FUNC_2(VAR_5, VAR_1, &VAR_6->sample_rate))
      VAR_4->priv->module->timestamp_clock = VAR_6->sample_rate;
   if (FUNC_2(VAR_5, VAR_0, &VAR_6->channels))
      VAR_6->block_align = VAR_6->channels * FUNC_0(VAR_6->bits_per_sample);

   return VAR_2;
}
