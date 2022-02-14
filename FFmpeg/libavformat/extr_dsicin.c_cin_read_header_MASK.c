
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int * pb; TYPE_3__* priv_data; } ;
struct TYPE_14__ {TYPE_1__* codecpar; int index; } ;
struct TYPE_12__ {int video_frame_height; int video_frame_width; } ;
struct TYPE_13__ {int audio_stream_index; int video_stream_index; scalar_t__ audio_buffer_size; scalar_t__ audio_stream_pts; scalar_t__ video_stream_pts; TYPE_2__ file_header; } ;
struct TYPE_11__ {int channels; int sample_rate; int bits_per_coded_sample; int bit_rate; int channel_layout; scalar_t__ codec_tag; int codec_id; int codec_type; int height; int width; } ;
typedef TYPE_2__ CinFileHeader ;
typedef TYPE_3__ CinDemuxContext ;
typedef TYPE_4__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_1 (TYPE_5__*,int *) ;
 int FUNC_2 (TYPE_4__*,int,int,int) ;
 int FUNC_3 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_6)
{
    int VAR_7;
    CinDemuxContext *VAR_8 = VAR_6->priv_data;
    CinFileHeader *VAR_9 = &VAR_8->file_header;
    AVIOContext *VAR_10 = VAR_6->pb;
    AVStream *VAR_11;

    VAR_7 = FUNC_3(VAR_8, VAR_10);
    if (VAR_7)
        return VAR_7;

    VAR_8->video_stream_pts = 0;
    VAR_8->audio_stream_pts = 0;
    VAR_8->audio_buffer_size = 0;


    VAR_11 = FUNC_1(VAR_6, ((void*)0));
    if (!VAR_11)
        return FUNC_0(VAR_5);

    FUNC_2(VAR_11, 32, 1, 12);
    VAR_8->video_stream_index = VAR_11->index;
    VAR_11->codecpar->codec_type = VAR_1;
    VAR_11->codecpar->codec_id = VAR_4;
    VAR_11->codecpar->codec_tag = 0;
    VAR_11->codecpar->width = VAR_9->video_frame_width;
    VAR_11->codecpar->height = VAR_9->video_frame_height;


    VAR_11 = FUNC_1(VAR_6, ((void*)0));
    if (!VAR_11)
        return FUNC_0(VAR_5);

    FUNC_2(VAR_11, 32, 1, 22050);
    VAR_8->audio_stream_index = VAR_11->index;
    VAR_11->codecpar->codec_type = VAR_0;
    VAR_11->codecpar->codec_id = VAR_3;
    VAR_11->codecpar->codec_tag = 0;
    VAR_11->codecpar->channels = 1;
    VAR_11->codecpar->channel_layout = VAR_2;
    VAR_11->codecpar->sample_rate = 22050;
    VAR_11->codecpar->bits_per_coded_sample = 8;
    VAR_11->codecpar->bit_rate = VAR_11->codecpar->sample_rate * VAR_11->codecpar->bits_per_coded_sample * VAR_11->codecpar->channels;

    return 0;
}
