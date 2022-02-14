
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int codec_tag; int channels; unsigned int sample_rate; scalar_t__ codec_id; } ;
struct TYPE_12__ {TYPE_2__* pb; TYPE_1__** streams; } ;
struct TYPE_11__ {int seekable; } ;
struct TYPE_10__ {TYPE_4__* codecpar; } ;
typedef TYPE_2__ AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_3__*,char*) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_5)
{
    AVIOContext *VAR_6 = VAR_5->pb;
    AVCodecParameters *VAR_7 = VAR_5->streams[0]->codecpar;

    if (!VAR_7->codec_tag)
        return VAR_0;

    if (VAR_7->channels != 1) {
        FUNC_0(VAR_5, VAR_4, "RSO only supports mono\n");
        return VAR_0;
    }

    if (!(VAR_5->pb->seekable & VAR_2)) {
        FUNC_0(VAR_5, VAR_4, "muxer does not support non seekable output\n");
        return VAR_0;
    }


    if (VAR_7->sample_rate >= 1u<<16) {
        FUNC_0(VAR_5, VAR_4, "Sample rate must be < 65536\n");
        return VAR_0;
    }

    if (VAR_7->codec_id == VAR_3) {
        FUNC_3(VAR_5, "ADPCM in RSO");
        return VAR_1;
    }


    FUNC_2(VAR_6, VAR_7->codec_tag);
    FUNC_2(VAR_6, 0);
    FUNC_2(VAR_6, VAR_7->sample_rate);
    FUNC_2(VAR_6, 0x0000);

    FUNC_1(VAR_6);

    return 0;
}
