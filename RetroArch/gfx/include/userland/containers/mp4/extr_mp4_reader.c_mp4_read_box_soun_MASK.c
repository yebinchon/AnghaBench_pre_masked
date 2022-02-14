
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_19__ {TYPE_4__* format; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_T ;
struct TYPE_20__ {TYPE_5__** tracks; TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_21__ {size_t current_track; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_18__ {TYPE_3__* type; } ;
struct TYPE_16__ {void* sample_rate; void* bits_per_sample; void* channels; } ;
struct TYPE_17__ {TYPE_2__ audio; } ;
struct TYPE_15__ {TYPE_7__* module; } ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_6__*,char*) ;
 int FUNC_1 (TYPE_6__*,char*) ;
 int FUNC_2 (TYPE_6__*,char*) ;
 int FUNC_3 (TYPE_6__*,char*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,scalar_t__,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6( VC_CONTAINER_T *VAR_1, int64_t VAR_2 )
{
   VC_CONTAINER_MODULE_T *VAR_3 = VAR_1->priv->module;
   VC_CONTAINER_TRACK_T *VAR_4 = VAR_1->tracks[VAR_3->current_track];
   unsigned int VAR_5, VAR_6 = 0;

   for(VAR_5 = 0; VAR_5 < 6; VAR_5++) FUNC_3(VAR_1, "reserved");
   FUNC_1(VAR_1, "data_reference_index");

   VAR_6 = FUNC_0(VAR_1, "version");
   FUNC_1(VAR_1, "revision_level");
   FUNC_2(VAR_1, "vendor");

   VAR_4->format->type->audio.channels = FUNC_0(VAR_1, "channelcount");
   VAR_4->format->type->audio.bits_per_sample = FUNC_0(VAR_1, "samplesize");
   FUNC_1(VAR_1, "pre_defined");
   FUNC_1(VAR_1, "reserved");
   VAR_4->format->type->audio.sample_rate = FUNC_0(VAR_1, "samplerate");
   FUNC_1(VAR_1, "samplerate_fp_low");

   if(VAR_6 == 1)
   {
      FUNC_2(VAR_1, "samples_per_packet");
      FUNC_2(VAR_1, "bytes_per_packet");
      FUNC_2(VAR_1, "bytes_per_frame");
      FUNC_2(VAR_1, "bytes_per_sample");
   }

   if(VAR_2 > 0)
      return FUNC_5( VAR_1, VAR_2, VAR_0 );

   return FUNC_4(VAR_1);
}
