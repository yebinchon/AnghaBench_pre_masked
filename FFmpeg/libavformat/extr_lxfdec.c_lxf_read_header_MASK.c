
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_14__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_13__ {TYPE_1__* codecpar; int need_parsing; void* duration; } ;
struct TYPE_12__ {int channels; int extended_size; } ;
struct TYPE_11__ {int bit_rate; int codec_tag; int channels; int sample_rate; int codec_type; int codec_id; } ;
typedef TYPE_2__ LXFDemuxContext ;
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
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (TYPE_4__*,int ,char*,...) ;
 TYPE_3__* FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_3__*,int,int,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_4__*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_12)
{
    LXFDemuxContext *VAR_13 = VAR_12->priv_data;
    AVIOContext *VAR_14 = VAR_12->pb;
    uint8_t VAR_15[VAR_9];
    int VAR_16;
    AVStream *VAR_17;
    uint32_t VAR_18, VAR_19;
    uint16_t VAR_20, VAR_21;

    if ((VAR_16 = FUNC_9(VAR_12)) < 0)
        return VAR_16;

    if (VAR_16 != VAR_9) {
        FUNC_3(VAR_12, VAR_6, "expected %d B size header, got %d\n",
               VAR_9, VAR_16);
        return VAR_1;
    }

    if ((VAR_16 = FUNC_5(VAR_14, VAR_15, VAR_9)) != VAR_9)
        return VAR_16 < 0 ? VAR_16 : VAR_0;

    if (!(VAR_17 = FUNC_4(VAR_12, ((void*)0))))
        return FUNC_0(VAR_8);

    VAR_17->duration = FUNC_2(&VAR_15[32]);
    VAR_18 = FUNC_2(&VAR_15[40]);
    VAR_20 = FUNC_1(&VAR_15[56]);
    VAR_21 = FUNC_1(&VAR_15[58]);
    VAR_19 = FUNC_2(&VAR_15[116]);

    VAR_17->codecpar->codec_type = VAR_3;
    VAR_17->codecpar->bit_rate = 1000000 * ((VAR_18 >> 14) & 0xFF);
    VAR_17->codecpar->codec_tag = VAR_18 & 0xF;
    VAR_17->codecpar->codec_id = FUNC_8(VAR_11, VAR_17->codecpar->codec_tag);
    VAR_17->need_parsing = VAR_4;

    FUNC_3(VAR_12, VAR_5, "record: %x = %i-%02i-%02i\n",
           VAR_20, 1900 + (VAR_20 & 0x7F), (VAR_20 >> 7) & 0xF,
           (VAR_20 >> 11) & 0x1F);

    FUNC_3(VAR_12, VAR_5, "expire: %x = %i-%02i-%02i\n",
           VAR_21, 1900 + (VAR_21 & 0x7F), (VAR_21 >> 7) & 0xF,
           (VAR_21 >> 11) & 0x1F);

    if ((VAR_18 >> 22) & 1)
        FUNC_3(VAR_12, VAR_7, "VBI data not yet supported\n");

    if ((VAR_13->channels = 1 << ((VAR_19 >> 4 & 3) + 1))) {
        if (!(VAR_17 = FUNC_4(VAR_12, ((void*)0))))
            return FUNC_0(VAR_8);

        VAR_17->codecpar->codec_type = VAR_2;
        VAR_17->codecpar->sample_rate = VAR_10;
        VAR_17->codecpar->channels = VAR_13->channels;

        FUNC_7(VAR_17, 64, 1, VAR_17->codecpar->sample_rate);
    }

    FUNC_6(VAR_12->pb, VAR_13->extended_size);

    return 0;
}
