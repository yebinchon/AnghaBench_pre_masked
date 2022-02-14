
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int data_codec_id; int subtitle_codec_id; int audio_codec_id; int video_codec_id; } ;
struct TYPE_7__ {TYPE_1__* codecpar; } ;
struct TYPE_6__ {int codec_type; int codec_id; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;







__attribute__((used)) static void FUNC_0(AVFormatContext *VAR_0, AVStream *VAR_1)
{
    switch (VAR_1->codecpar->codec_type) {
    case 128:
        if (VAR_0->video_codec_id)
            VAR_1->codecpar->codec_id = VAR_0->video_codec_id;
        break;
    case 131:
        if (VAR_0->audio_codec_id)
            VAR_1->codecpar->codec_id = VAR_0->audio_codec_id;
        break;
    case 129:
        if (VAR_0->subtitle_codec_id)
            VAR_1->codecpar->codec_id = VAR_0->subtitle_codec_id;
        break;
    case 130:
        if (VAR_0->data_codec_id)
            VAR_1->codecpar->codec_id = VAR_0->data_codec_id;
        break;
    }
}
