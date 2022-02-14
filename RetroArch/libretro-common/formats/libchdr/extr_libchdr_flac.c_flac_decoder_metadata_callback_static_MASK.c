
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int channels; int bits_per_sample; int sample_rate; } ;
typedef TYPE_3__ flac_decoder ;
struct TYPE_7__ {int channels; int bits_per_sample; int sample_rate; } ;
struct TYPE_6__ {TYPE_2__ stream_info; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__ data; } ;
typedef TYPE_4__ FLAC__StreamMetadata ;
typedef int FLAC__StreamDecoder ;


 scalar_t__ VAR_0 ;

void FUNC_0(const FLAC__StreamDecoder *VAR_1, const FLAC__StreamMetadata *VAR_2, void *VAR_3)
{
   flac_decoder *VAR_4;

 if (VAR_2->type != VAR_0)
  return;


 VAR_4 = (flac_decoder *)(VAR_3);
 VAR_4->sample_rate = VAR_2->data.stream_info.sample_rate;
 VAR_4->bits_per_sample = VAR_2->data.stream_info.bits_per_sample;
 VAR_4->channels = VAR_2->data.stream_info.channels;
}
