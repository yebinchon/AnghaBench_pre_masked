
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_FOURCC_T ;
struct TYPE_7__ {int bitrate; int codec; int es_type; TYPE_2__* type; } ;
typedef TYPE_3__ VC_CONTAINER_ES_FORMAT_T ;
struct TYPE_5__ {int channels; int sample_rate; int block_align; int bits_per_sample; } ;
struct TYPE_6__ {TYPE_1__ audio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;

VC_CONTAINER_STATUS_T FUNC_1(uint8_t *VAR_6,
   unsigned int VAR_7, unsigned int *VAR_8, unsigned int *VAR_9,
   VC_CONTAINER_ES_FORMAT_T *VAR_10)
{
   VC_CONTAINER_FOURCC_T VAR_11;
   uint32_t VAR_12;

   if(!VAR_6 || VAR_7 < 16) return VAR_1;
   VAR_12 = (VAR_6[1] << 8) | VAR_6[0];
   VAR_11 = FUNC_0(VAR_12);


   if(VAR_8) *VAR_8 = 16;
   if(VAR_9) *VAR_9 = 0;
   VAR_10->type->audio.channels = VAR_6[2];
   VAR_10->type->audio.sample_rate = (VAR_6[7] << 24) | (VAR_6[6] << 16) | (VAR_6[5] << 8) | VAR_6[4];
   VAR_10->bitrate = ((VAR_6[11] << 24) | (VAR_6[10] << 16) | (VAR_6[9] << 8) | VAR_6[8]) * 8;
   VAR_10->type->audio.block_align = (VAR_6[13] << 8) | VAR_6[12];
   VAR_10->type->audio.bits_per_sample = (VAR_6[15] << 8) | VAR_6[14];

   if(VAR_12 == VAR_5 && VAR_10->type->audio.bits_per_sample == 8)
      VAR_11 = VAR_0;

   if(VAR_7 >= 18)
   {
      if(VAR_9)
      {
         *VAR_9 = (VAR_6[17] << 8) | VAR_6[16];
         if(*VAR_9 + 18 > VAR_7) *VAR_9 = VAR_7 - 18;
      }
      if(VAR_8) *VAR_8 = 18;
   }


   if(VAR_12 == VAR_4 && VAR_9)
   {
      if(VAR_8) *VAR_8 += *VAR_9;
      *VAR_9 = 0;
   }

   VAR_10->es_type = VAR_2;
   VAR_10->codec = VAR_11;

   return VAR_3;
}
