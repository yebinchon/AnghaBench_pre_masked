
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {TYPE_4__* format; } ;
typedef TYPE_5__ VC_CONTAINER_TRACK_T ;
struct TYPE_22__ {TYPE_5__** tracks; TYPE_1__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_23__ {size_t current_track; scalar_t__ brand; } ;
typedef TYPE_7__ VC_CONTAINER_MODULE_T ;
struct TYPE_20__ {int codec; TYPE_3__* type; } ;
struct TYPE_18__ {unsigned int channels; int sample_rate; } ;
struct TYPE_19__ {TYPE_2__ audio; } ;
struct TYPE_17__ {TYPE_7__* module; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;






 int FUNC_1 (TYPE_6__*,unsigned int,char*) ;
 int FUNC_2 (TYPE_6__*,int,char*) ;
 int FUNC_3 (TYPE_6__*,int ,char*) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_8( VC_CONTAINER_T *VAR_2 )
{
   VC_CONTAINER_MODULE_T *VAR_3 = VAR_2->priv->module;
   VC_CONTAINER_TRACK_T *VAR_4 = VAR_2->tracks[VAR_3->current_track];
   unsigned int VAR_5, VAR_6 = 0;

   for(VAR_5 = 0; VAR_5 < 6; VAR_5++) FUNC_3(VAR_2, 0, "reserved");
   FUNC_1(VAR_2, 1, "data_reference_index");

   if(VAR_3->brand == VAR_1)
   {
      if(VAR_4->format->codec == 129) VAR_6 = 1;
      FUNC_1(VAR_2, VAR_6, "version");
      FUNC_1(VAR_2, 0, "revision_level");
      FUNC_2(VAR_2, 0, "vendor");
   }
   else
   {
      for(VAR_5 = 0; VAR_5 < 2; VAR_5++) FUNC_2(VAR_2, 0, "reserved");
   }

   FUNC_1(VAR_2, VAR_4->format->type->audio.channels, "channelcount");
   FUNC_1(VAR_2, 0, "samplesize");
   FUNC_1(VAR_2, 0, "pre_defined");
   FUNC_1(VAR_2, 0, "reserved");
   FUNC_2(VAR_2, VAR_4->format->type->audio.sample_rate << 16, "samplerate");

   if(VAR_3->brand == VAR_1 && VAR_6 == 1)
   {
      FUNC_2(VAR_2, 1024, "samples_per_packet");
      FUNC_2(VAR_2, 1536, "bytes_per_packet");
      FUNC_2(VAR_2, 2, "bytes_per_frame");
      FUNC_2(VAR_2, 2, "bytes_per_sample");
   }

   switch(VAR_4->format->codec)
   {
   case 133:
   case 132:
      return FUNC_5(VAR_2);
   case 131:
      return FUNC_6(VAR_2);
   case 130:
      return FUNC_7(VAR_2);
   case 129:
   case 128:
      return FUNC_4(VAR_2, VAR_0);
   default: break;
   }

   return FUNC_0(VAR_2);
}
