
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * pb; } ;
struct TYPE_10__ {TYPE_1__* codecpar; } ;
struct TYPE_9__ {int bits_per_coded_sample; int bit_rate; int channels; int sample_rate; int channel_layout; int codec_type; int codec_id; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (unsigned char*) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (TYPE_3__*,char*,...) ;
 int FUNC_5 (TYPE_2__*,int,int,int) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_9)
{
    AVIOContext *VAR_10 = VAR_9->pb;
    AVStream *VAR_11;
    unsigned char VAR_12[VAR_0];
    int VAR_13, VAR_14, VAR_15;

    if (FUNC_3(VAR_10, VAR_12, VAR_0) != VAR_0)
        return FUNC_0(VAR_7);

    VAR_13 = FUNC_1(&VAR_12[0]);
    VAR_14 = (VAR_12[10] & 0x1) + 1;
    VAR_15 = VAR_12[11];


    VAR_11 = FUNC_2(VAR_9, ((void*)0));
    if (!VAR_11)
        return FUNC_0(VAR_8);

    switch (VAR_15) {
    case 1:
        if (VAR_14 != 1) {
            FUNC_4(VAR_9, "Stereo WS-SND1");
            return VAR_1;
        }
        VAR_11->codecpar->codec_id = VAR_6;
        break;
    case 99:
        VAR_11->codecpar->codec_id = VAR_5;
        VAR_11->codecpar->bits_per_coded_sample = 4;
        VAR_11->codecpar->bit_rate = VAR_14 * VAR_13 * 4;
        break;
    default:
        FUNC_4(VAR_9, "Unknown codec: %d", VAR_15);
        return VAR_1;
    }
    FUNC_5(VAR_11, 64, 1, VAR_13);
    VAR_11->codecpar->codec_type = VAR_2;
    VAR_11->codecpar->channels = VAR_14;
    VAR_11->codecpar->channel_layout = VAR_14 == 1 ? VAR_3 :
                                                   VAR_4;
    VAR_11->codecpar->sample_rate = VAR_13;

    return 0;
}
