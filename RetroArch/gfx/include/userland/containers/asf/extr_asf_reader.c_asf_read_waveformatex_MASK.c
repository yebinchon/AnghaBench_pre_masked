
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


typedef scalar_t__ uint16_t ;
typedef scalar_t__ int64_t ;
struct TYPE_13__ {TYPE_5__* format; TYPE_4__* priv; } ;
typedef TYPE_6__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_12__ {int bitrate; int extradata; int extradata_size; TYPE_2__* type; int codec; } ;
struct TYPE_11__ {TYPE_3__* module; } ;
struct TYPE_10__ {int extradata; } ;
struct TYPE_8__ {int sample_rate; void* bits_per_sample; void* block_align; void* channels; } ;
struct TYPE_9__ {TYPE_1__ audio; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int ,scalar_t__) ;
 void* FUNC_1 (int *,scalar_t__,char*) ;
 int FUNC_2 (int *,scalar_t__,char*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (void*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_7( VC_CONTAINER_T *VAR_3,
   VC_CONTAINER_TRACK_T *VAR_4, int64_t VAR_5)
{
   uint16_t VAR_6;


   VAR_4->format->codec = FUNC_6(FUNC_1(VAR_3, VAR_5, "Codec ID"));
   VAR_4->format->type->audio.channels = FUNC_1(VAR_3, VAR_5, "Number of Channels");
   VAR_4->format->type->audio.sample_rate = FUNC_2(VAR_3, VAR_5, "Samples per Second");
   VAR_4->format->bitrate = FUNC_2(VAR_3, VAR_5, "Average Number of Bytes Per Second") * 8;
   VAR_4->format->type->audio.block_align = FUNC_1(VAR_3, VAR_5, "Block Alignment");
   VAR_4->format->type->audio.bits_per_sample = FUNC_1(VAR_3, VAR_5, "Bits Per Sample");
   VAR_6 = FUNC_1(VAR_3, VAR_5, "Codec Specific Data Size");

   FUNC_3(VAR_3, VAR_5);

   if(!VAR_6) return VAR_2;


   if(VAR_6 > VAR_5) return VAR_1;

   if(VAR_6 > VAR_0)
   {
      FUNC_4(VAR_3, "extradata truncated");
      VAR_6 = VAR_0;
   }
   VAR_4->format->extradata = VAR_4->priv->module->extradata;
   VAR_4->format->extradata_size = FUNC_0(VAR_3, VAR_5, VAR_4->format->extradata, VAR_6);

   return FUNC_5(VAR_3);
}
