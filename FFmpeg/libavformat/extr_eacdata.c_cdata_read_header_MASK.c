
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_13__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_12__ {TYPE_1__* codecpar; } ;
struct TYPE_11__ {int channels; scalar_t__ audio_pts; } ;
struct TYPE_10__ {int channels; unsigned int sample_rate; int channel_layout; int codec_id; scalar_t__ codec_tag; int codec_type; } ;
typedef TYPE_2__ CdataDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*,int ,char*,unsigned int) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_3__*,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_6)
{
    CdataDemuxContext *VAR_7 = VAR_6->priv_data;
    AVIOContext *VAR_8 = VAR_6->pb;
    unsigned int VAR_9, VAR_10;
    AVStream *VAR_11;
    int64_t VAR_12 = 0;

    VAR_10 = FUNC_4(VAR_8);
    switch (VAR_10) {
        case 0x0400: VAR_7->channels = 1; break;
        case 0x0404: VAR_7->channels = 2; break;
        case 0x040C: VAR_7->channels = 4; VAR_12 = VAR_2; break;
        case 0x0414: VAR_7->channels = 6; VAR_12 = VAR_1; break;
        default:
            FUNC_1(VAR_6, VAR_4, "unknown header 0x%04x\n", VAR_10);
            return -1;
    };

    VAR_9 = FUNC_4(VAR_8);
    FUNC_5(VAR_8, (FUNC_3(VAR_8) & 0x20) ? 15 : 11);

    VAR_11 = FUNC_2(VAR_6, ((void*)0));
    if (!VAR_11)
        return FUNC_0(VAR_5);
    VAR_11->codecpar->codec_type = VAR_0;
    VAR_11->codecpar->codec_tag = 0;
    VAR_11->codecpar->codec_id = VAR_3;
    VAR_11->codecpar->channels = VAR_7->channels;
    VAR_11->codecpar->channel_layout = VAR_12;
    VAR_11->codecpar->sample_rate = VAR_9;
    FUNC_6(VAR_11, 64, 1, VAR_9);

    VAR_7->audio_pts = 0;
    return 0;
}
