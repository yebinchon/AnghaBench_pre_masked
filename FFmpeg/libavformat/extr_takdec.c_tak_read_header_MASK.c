
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
typedef enum TAKMetaDataType { ____Placeholder_TAKMetaDataType } TAKMetaDataType ;
struct TYPE_30__ {int error_recognition; TYPE_5__* pb; TYPE_3__* priv_data; } ;
struct TYPE_29__ {int seekable; } ;
struct TYPE_28__ {scalar_t__ duration; TYPE_1__* codecpar; scalar_t__ start_time; int need_parsing; } ;
struct TYPE_27__ {int mlast_frame; scalar_t__ data_end; } ;
struct TYPE_26__ {scalar_t__ samples; int channels; int sample_rate; scalar_t__ ch_layout; int bps; } ;
struct TYPE_25__ {int* extradata; int extradata_size; int sample_rate; int channels; scalar_t__ channel_layout; int bits_per_coded_sample; int codec_id; int codec_type; } ;
typedef TYPE_2__ TAKStreamInfo ;
typedef TYPE_3__ TAKDemuxContext ;
typedef int GetBitContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVIOContext ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (char,char,char,char) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;





 int FUNC_2 (int**) ;
 int FUNC_3 (TYPE_6__*,int ,char*,...) ;
 int* FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*,int*,int) ;
 int FUNC_10 (TYPE_5__*) ;
 scalar_t__ FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*,int,int ) ;
 int FUNC_13 (TYPE_5__*,int) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_4__*,int,int,int ) ;
 int FUNC_16 (TYPE_2__*,int*,int) ;
 int FUNC_17 (TYPE_6__*) ;
 int FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_20 (int *,int ) ;
 scalar_t__ FUNC_21 (int *,int ) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *,int*,int) ;
 int FUNC_24 (int*,int ,int ) ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_25(AVFormatContext *VAR_18)
{
    TAKDemuxContext *VAR_19 = VAR_18->priv_data;
    AVIOContext *VAR_20 = VAR_18->pb;
    GetBitContext VAR_21;
    AVStream *VAR_22;
    uint8_t *VAR_23 = ((void*)0);
    int VAR_24;

    VAR_22 = FUNC_5(VAR_18, 0);
    if (!VAR_22)
        return FUNC_0(VAR_11);

    VAR_22->codecpar->codec_type = VAR_3;
    VAR_22->codecpar->codec_id = VAR_5;
    VAR_22->need_parsing = VAR_4;

    VAR_19->mlast_frame = 0;
    if (FUNC_11(VAR_20) != FUNC_1('t', 'B', 'a', 'K')) {
        FUNC_12(VAR_20, -4, VAR_12);
        return 0;
    }

    while (!FUNC_6(VAR_20)) {
        enum TAKMetaDataType VAR_25;
        int VAR_26;

        VAR_25 = FUNC_7(VAR_20) & 0x7f;
        VAR_26 = FUNC_10(VAR_20);

        switch (VAR_25) {
        case 128:
            if (VAR_22->codecpar->extradata)
                return VAR_1;
        case 130:
        case 132:
            if (VAR_26 <= 3)
                return VAR_1;

            VAR_23 = FUNC_4(VAR_26 - 3 + VAR_7);
            if (!VAR_23)
                return FUNC_0(VAR_11);
            FUNC_24(VAR_23 + VAR_26 - 3, 0, VAR_7);

            FUNC_19(VAR_20, VAR_17, 0xCE04B7U);
            if (FUNC_9(VAR_20, VAR_23, VAR_26 - 3) != VAR_26 - 3) {
                FUNC_2(&VAR_23);
                return FUNC_0(VAR_10);
            }
            if (FUNC_18(VAR_18->pb) != FUNC_8(VAR_20)) {
                FUNC_3(VAR_18, VAR_8, "%d metadata block CRC error.\n", VAR_25);
                if (VAR_18->error_recognition & VAR_6) {
                    FUNC_2(&VAR_23);
                    return VAR_1;
                }
            }

            break;
        case 129: {
            uint8_t VAR_27[16];
            int VAR_28;

            if (VAR_26 != 19)
                return VAR_1;
            FUNC_19(VAR_20, VAR_17, 0xCE04B7U);
            FUNC_9(VAR_20, VAR_27, 16);
            if (FUNC_18(VAR_18->pb) != FUNC_8(VAR_20)) {
                FUNC_3(VAR_18, VAR_8, "MD5 metadata block CRC error.\n");
                if (VAR_18->error_recognition & VAR_6)
                    return VAR_1;
            }

            FUNC_3(VAR_18, VAR_9, "MD5=");
            for (VAR_28 = 0; VAR_28 < 16; VAR_28++)
                FUNC_3(VAR_18, VAR_9, "%02x", VAR_27[VAR_28]);
            FUNC_3(VAR_18, VAR_9, "\n");
            break;
        }
        case 131: {
            int64_t VAR_29 = FUNC_14(VAR_20);

            if (VAR_20->seekable & VAR_2) {
                FUNC_17(VAR_18);
                FUNC_12(VAR_20, VAR_29, VAR_13);
            }

            VAR_19->data_end += VAR_29;
            return 0;
        }
        default:
            VAR_24 = FUNC_13(VAR_20, VAR_26);
            if (VAR_24 < 0)
                return VAR_24;
        }

        if (VAR_25 == 128) {
            TAKStreamInfo VAR_30;

            VAR_24 = FUNC_16(&VAR_30, VAR_23, VAR_26 -3);
            if (VAR_24 < 0)
                goto end;
            if (VAR_30.samples > 0)
                VAR_22->duration = VAR_30.samples;
            VAR_22->codecpar->bits_per_coded_sample = VAR_30.bps;
            if (VAR_30.ch_layout)
                VAR_22->codecpar->channel_layout = VAR_30.ch_layout;
            VAR_22->codecpar->sample_rate = VAR_30.sample_rate;
            VAR_22->codecpar->channels = VAR_30.channels;
            VAR_22->start_time = 0;
            FUNC_15(VAR_22, 64, 1, VAR_22->codecpar->sample_rate);
            VAR_22->codecpar->extradata = VAR_23;
            VAR_22->codecpar->extradata_size = VAR_26 - 3;
            VAR_23 = ((void*)0);
        } else if (VAR_25 == 130) {
            if (VAR_26 != 11) {
                VAR_24 = VAR_1;
                goto end;
            }
            FUNC_23(&VAR_21, VAR_23, VAR_26 - 3);
            VAR_19->mlast_frame = 1;
            VAR_19->data_end = FUNC_21(&VAR_21, VAR_15) +
                              FUNC_20(&VAR_21, VAR_16);
            FUNC_2(&VAR_23);
        } else if (VAR_25 == 132) {
            FUNC_23(&VAR_21, VAR_23, VAR_26 - 3);
            FUNC_3(VAR_18, VAR_9, "encoder version: %0X\n",
                   FUNC_22(&VAR_21, VAR_14));
            FUNC_2(&VAR_23);
        }
    }

    return VAR_0;
end:
    FUNC_2(&VAR_23);
    return VAR_24;
}
