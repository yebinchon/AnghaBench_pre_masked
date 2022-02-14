
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_7__ {scalar_t__ es_type; int extradata_size; int bitrate; int extradata; TYPE_2__* type; int codec; } ;
typedef TYPE_3__ VC_CONTAINER_ES_FORMAT_T ;
struct TYPE_5__ {int channels; int sample_rate; int block_align; int bits_per_sample; } ;
struct TYPE_6__ {TYPE_1__ audio; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int ,int) ;

unsigned int FUNC_2(VC_CONTAINER_ES_FORMAT_T *VAR_2,
                                                    uint8_t *VAR_3, unsigned int VAR_4)
{
   uint16_t VAR_5 = FUNC_0(VAR_2->codec);

   if(VAR_2->es_type != VAR_0 ||
      VAR_5 == VAR_1) return 0;

   if(!VAR_3) return VAR_2->extradata_size + 18;

   if(VAR_4 < VAR_2->extradata_size + 18) return 0;


   VAR_3[0] = VAR_5;
   VAR_3[1] = VAR_5 >> 8;
   VAR_3[2] = VAR_2->type->audio.channels;
   VAR_3[3] = 0;
   VAR_3[4] = (VAR_2->type->audio.sample_rate >> 0) & 0xFF;
   VAR_3[5] = (VAR_2->type->audio.sample_rate >> 8) & 0xFF;
   VAR_3[6] = (VAR_2->type->audio.sample_rate >> 16) & 0xFF;
   VAR_3[7] = (VAR_2->type->audio.sample_rate >> 24) & 0xFF;
   VAR_3[8] = (VAR_2->bitrate >> 3) & 0xFF;
   VAR_3[9] = (VAR_2->bitrate >> 11) & 0xFF;
   VAR_3[10] = (VAR_2->bitrate >> 19) & 0xFF;
   VAR_3[11] = (VAR_2->bitrate >> 27) & 0xFF;
   VAR_3[12] = (VAR_2->type->audio.block_align >> 0) & 0xFF;
   VAR_3[13] = (VAR_2->type->audio.block_align >> 8) & 0xFF;
   VAR_3[14] = (VAR_2->type->audio.bits_per_sample >> 0) & 0xFF;
   VAR_3[15] = (VAR_2->type->audio.bits_per_sample >> 8) & 0xFF;
   VAR_3[16] = (VAR_2->extradata_size >> 0) & 0xFF;
   VAR_3[17] = (VAR_2->extradata_size >> 8) & 0xFF;
   FUNC_1(VAR_3+18, VAR_2->extradata, VAR_2->extradata_size);
   return VAR_2->extradata_size + 18;
}
