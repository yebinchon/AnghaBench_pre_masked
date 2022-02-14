
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int samplerate; int samples_per_frame; int bitrate; int compression_level; int * name; int dither_method; scalar_t__ normalize_mix_level; scalar_t__ gain; scalar_t__ dynamic_range_compression; int mixdown; int quality; int codec; scalar_t__ track; } ;
struct TYPE_7__ {int samplerate; int samples_per_frame; int bitrate; scalar_t__ track; int * channel_map; scalar_t__ channel_layout; int matrix_encoding; scalar_t__ sample_bit_depth; scalar_t__ mode; scalar_t__ flags; scalar_t__ version; scalar_t__ substream_type; scalar_t__ stream_type; scalar_t__ reg_desc; scalar_t__ codec_param; scalar_t__ codec; } ;
struct TYPE_6__ {scalar_t__* iso639_2; scalar_t__* simple; scalar_t__* description; } ;
struct TYPE_9__ {TYPE_3__ out; TYPE_2__ in; TYPE_1__ lang; } ;
typedef TYPE_4__ hb_audio_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;

void FUNC_2(hb_audio_config_t * VAR_4)
{

    VAR_4->in.codec = 0;
    VAR_4->in.codec_param = 0;
    VAR_4->in.reg_desc = 0;
    VAR_4->in.stream_type = 0;
    VAR_4->in.substream_type = 0;
    VAR_4->in.version = 0;
    VAR_4->in.flags = 0;
    VAR_4->in.mode = 0;
    VAR_4->in.samplerate = -1;
    VAR_4->in.sample_bit_depth = 0;
    VAR_4->in.samples_per_frame = -1;
    VAR_4->in.bitrate = -1;
    VAR_4->in.matrix_encoding = VAR_0;
    VAR_4->in.channel_layout = 0;
    VAR_4->in.channel_map = ((void*)0);
    VAR_4->lang.description[0] = 0;
    VAR_4->lang.simple[0] = 0;
    VAR_4->lang.iso639_2[0] = 0;


    VAR_4->in.track = VAR_4->out.track = 0;
    VAR_4->out.codec = FUNC_1(VAR_3);
    VAR_4->out.samplerate = -1;
    VAR_4->out.samples_per_frame = -1;
    VAR_4->out.bitrate = -1;
    VAR_4->out.quality = VAR_2;
    VAR_4->out.compression_level = -1;
    VAR_4->out.mixdown = VAR_1;
    VAR_4->out.dynamic_range_compression = 0;
    VAR_4->out.gain = 0;
    VAR_4->out.normalize_mix_level = 0;
    VAR_4->out.dither_method = FUNC_0();
    VAR_4->out.name = ((void*)0);
}
