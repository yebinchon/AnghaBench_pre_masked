
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef long long uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_14__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_13__ {long long nb_frames; long long duration; TYPE_1__* codecpar; } ;
struct TYPE_12__ {int num_streams; } ;
struct TYPE_11__ {int codec_id; int width; int height; int channels; int sample_rate; int codec_type; } ;
typedef TYPE_2__ PMPContext ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_3__*,scalar_t__,unsigned int,long long,int ,int) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 TYPE_3__* FUNC_3 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*,int,int,int) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_12)
{
    PMPContext *VAR_13 = VAR_12->priv_data;
    AVIOContext *VAR_14 = VAR_12->pb;
    int VAR_15, VAR_16;
    uint32_t VAR_17;
    int VAR_18 = VAR_8;
    int VAR_19, VAR_20;
    unsigned VAR_21;
    uint64_t VAR_22;
    int64_t VAR_23 = FUNC_7(VAR_14);

    AVStream *VAR_24 = FUNC_3(VAR_12, ((void*)0));
    if (!VAR_24)
        return FUNC_0(VAR_11);
    VAR_24->codecpar->codec_type = VAR_3;
    FUNC_8(VAR_14, 8);
    switch (FUNC_6(VAR_14)) {
    case 0:
        VAR_24->codecpar->codec_id = VAR_7;
        break;
    case 1:
        VAR_24->codecpar->codec_id = VAR_5;
        break;
    default:
        FUNC_2(VAR_12, VAR_9, "Unsupported video format\n");
        break;
    }
    VAR_17 = FUNC_6(VAR_14);
    VAR_24->codecpar->width = FUNC_6(VAR_14);
    VAR_24->codecpar->height = FUNC_6(VAR_14);

    VAR_15 = FUNC_6(VAR_14);
    VAR_16 = FUNC_6(VAR_14);
    FUNC_10(VAR_24, 32, VAR_15, VAR_16);
    VAR_24->nb_frames = VAR_17;
    VAR_24->duration = VAR_17;

    switch (FUNC_6(VAR_14)) {
    case 0:
        VAR_18 = VAR_6;
        break;
    case 1:
        FUNC_2(VAR_12, VAR_9, "AAC not yet correctly supported\n");
        VAR_18 = VAR_4;
        break;
    default:
        FUNC_2(VAR_12, VAR_9, "Unsupported audio format\n");
        break;
    }
    VAR_13->num_streams = FUNC_5(VAR_14) + 1;
    FUNC_8(VAR_14, 10);
    VAR_19 = FUNC_6(VAR_14);
    VAR_20 = FUNC_6(VAR_14) + 1;
    VAR_22 = FUNC_9(VAR_14) + 4LL*VAR_17;
    for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21++) {
        uint32_t VAR_25 = FUNC_6(VAR_14);
        int VAR_26 = VAR_25 & 1 ? VAR_1 : 0;
        if (FUNC_4(VAR_14)) {
            FUNC_2(VAR_12, VAR_10, "Encountered EOF while reading index.\n");
            return VAR_0;
        }
        VAR_25 >>= 1;
        if (VAR_25 < 9 + 4*VAR_13->num_streams) {
            FUNC_2(VAR_12, VAR_9, "Packet too small\n");
            return VAR_0;
        }
        FUNC_1(VAR_24, VAR_22, VAR_21, VAR_25, 0, VAR_26);
        VAR_22 += VAR_25;
        if (VAR_23 > 0 && VAR_21 == 0 && VAR_22 > VAR_23) {
            FUNC_2(VAR_12, VAR_9, "File ends before first packet\n");
            return VAR_0;
        }
    }
    for (VAR_21 = 1; VAR_21 < VAR_13->num_streams; VAR_21++) {
        AVStream *VAR_27 = FUNC_3(VAR_12, ((void*)0));
        if (!VAR_27)
            return FUNC_0(VAR_11);
        VAR_27->codecpar->codec_type = VAR_2;
        VAR_27->codecpar->codec_id = VAR_18;
        VAR_27->codecpar->channels = VAR_20;
        VAR_27->codecpar->sample_rate = VAR_19;
        FUNC_10(VAR_27, 32, 1, VAR_19);
    }
    return 0;
}
