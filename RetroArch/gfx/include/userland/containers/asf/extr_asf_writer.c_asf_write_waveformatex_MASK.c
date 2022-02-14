
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* format; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_8__ {int extradata_size; int extradata; TYPE_2__* type; int bitrate; int codec; } ;
struct TYPE_6__ {int bits_per_sample; int block_align; int sample_rate; int channels; } ;
struct TYPE_7__ {TYPE_1__ audio; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_4( VC_CONTAINER_T *VAR_1,
   VC_CONTAINER_TRACK_T *VAR_2)
{

   FUNC_1(VAR_1, FUNC_3(VAR_2->format->codec), "Codec ID");
   FUNC_1(VAR_1, VAR_2->format->type->audio.channels, "Number of Channels");
   FUNC_2(VAR_1, VAR_2->format->type->audio.sample_rate, "Samples per Second");
   FUNC_2(VAR_1, VAR_2->format->bitrate, "Average Number of Bytes Per Second");
   FUNC_1(VAR_1, VAR_2->format->type->audio.block_align, "Block Alignment");
   FUNC_1(VAR_1, VAR_2->format->type->audio.bits_per_sample, "Bits Per Sample");
   FUNC_1(VAR_1, VAR_2->format->extradata_size, "Codec Specific Data Size");
   FUNC_0(VAR_1, VAR_2->format->extradata, VAR_2->format->extradata_size);

   return VAR_0;
}
