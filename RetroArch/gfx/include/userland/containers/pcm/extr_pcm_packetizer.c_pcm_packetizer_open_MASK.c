
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef enum conversion { ____Placeholder_conversion } conversion ;
struct TYPE_20__ {int max_frame_size; TYPE_7__* priv; TYPE_6__* in; TYPE_3__* out; } ;
typedef TYPE_8__ VC_PACKETIZER_T ;
struct TYPE_21__ {int conversion; int conversion_factor; int max_frame_size; unsigned int bytes_per_sample; unsigned int samples_per_frame; } ;
typedef TYPE_9__ VC_PACKETIZER_MODULE_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_19__ {int pf_reset; int pf_packetize; int pf_close; int time; TYPE_9__* module; } ;
struct TYPE_18__ {scalar_t__ codec; TYPE_5__* type; } ;
struct TYPE_16__ {int block_align; int bits_per_sample; int channels; int sample_rate; } ;
struct TYPE_17__ {TYPE_4__ audio; } ;
struct TYPE_15__ {scalar_t__ codec_variant; scalar_t__ codec; TYPE_2__* type; } ;
struct TYPE_13__ {int bits_per_sample; int block_align; } ;
struct TYPE_14__ {TYPE_1__ audio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (char,char,char,char) ;
 TYPE_9__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_9__*,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int *,int ,int) ;

VC_CONTAINER_STATUS_T FUNC_5( VC_PACKETIZER_T *VAR_17 )
{
   VC_PACKETIZER_MODULE_T *VAR_18;
   unsigned int VAR_19 = 0;
   enum conversion VAR_20 = VAR_0;

   if(VAR_17->in->codec != VAR_9 &&
      VAR_17->in->codec != VAR_10 &&
      VAR_17->in->codec != VAR_7 &&
      VAR_17->in->codec != VAR_8 &&
      VAR_17->in->codec != VAR_5 &&
      VAR_17->in->codec != VAR_6)
      return VAR_11;

   if(VAR_17->in->type->audio.block_align)
      VAR_19 = VAR_17->in->type->audio.block_align;
   else if(VAR_17->in->type->audio.bits_per_sample && VAR_17->in->type->audio.channels)
      VAR_19 = VAR_17->in->type->audio.bits_per_sample *
         VAR_17->in->type->audio.channels / 8;

   if(!VAR_19)
      return VAR_11;


   if(VAR_17->out->codec_variant)
      VAR_20 = VAR_2;
   if(VAR_17->out->codec_variant == FUNC_1('s','1','6','l') &&
      VAR_17->in->codec == VAR_8 &&
      VAR_17->in->type->audio.bits_per_sample == 16)
      VAR_20 = VAR_0;
   if(VAR_17->out->codec_variant == FUNC_1('s','1','6','l') &&
      (VAR_17->in->codec == VAR_10 ||
       VAR_17->in->codec == VAR_9) &&
      VAR_17->in->type->audio.bits_per_sample == 8)
      VAR_20 = VAR_1;
   if(VAR_20 == VAR_2)
      return VAR_11;

   VAR_17->priv->module = VAR_18 = FUNC_2(sizeof(*VAR_18));
   if(!VAR_18)
      return VAR_12;
   FUNC_3(VAR_18, 0, sizeof(*VAR_18));
   VAR_18->conversion = VAR_20;
   VAR_18->conversion_factor = 1 << VAR_3;

   VAR_17->out->codec_variant = 0;
   if(VAR_20 == VAR_1)
   {
      VAR_18->conversion_factor = 2 << VAR_3;
      VAR_17->out->type->audio.bits_per_sample *= 2;
      VAR_17->out->type->audio.block_align *= 2;
      VAR_17->out->codec = VAR_8;
   }

   FUNC_4(&VAR_17->priv->time, VAR_17->in->type->audio.sample_rate, 1);

   VAR_17->max_frame_size = VAR_4;
   VAR_18->max_frame_size = (VAR_4 << VAR_3) / VAR_18->conversion_factor;
   VAR_18->bytes_per_sample = VAR_19;
   VAR_18->samples_per_frame = VAR_18->max_frame_size / VAR_19;
   VAR_17->priv->pf_close = VAR_14;
   VAR_17->priv->pf_packetize = VAR_15;
   VAR_17->priv->pf_reset = VAR_16;

   FUNC_0(0, "using pcm audio packetizer");
   return VAR_13;
}
