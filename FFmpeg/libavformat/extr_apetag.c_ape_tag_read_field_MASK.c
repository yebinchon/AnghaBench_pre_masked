
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int key ;
typedef scalar_t__ int64_t ;
typedef int filename ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_14__ {int codec_id; int codec_type; } ;
struct TYPE_13__ {int metadata; int * pb; } ;
struct TYPE_12__ {int flags; int stream_index; } ;
struct TYPE_11__ {TYPE_5__* codecpar; TYPE_2__ attached_pic; int index; int disposition; int metadata; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int *,int*,int*,int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int *,TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,int ,char*,...) ;
 int* FUNC_5 (scalar_t__) ;
 TYPE_1__* FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (int *,scalar_t__,int*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int*,scalar_t__) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (TYPE_3__*,TYPE_5__*,int *,scalar_t__) ;
 int FUNC_12 (int*) ;

__attribute__((used)) static int FUNC_13(AVFormatContext *VAR_13)
{
    AVIOContext *VAR_14 = VAR_13->pb;
    uint8_t VAR_15[1024], *VAR_16;
    int64_t VAR_17, VAR_18;
    int VAR_19, VAR_20;

    VAR_17 = FUNC_10(VAR_14);
    VAR_18 = FUNC_10(VAR_14);
    for (VAR_19 = 0; VAR_19 < sizeof(VAR_15) - 1; VAR_19++) {
        VAR_20 = FUNC_8(VAR_14);
        if (VAR_20 < 0x20 || VAR_20 > 0x7E)
            break;
        else
            VAR_15[VAR_19] = VAR_20;
    }
    VAR_15[VAR_19] = 0;
    if (VAR_20 != 0) {
        FUNC_4(VAR_13, VAR_9, "Invalid APE tag key '%s'.\n", VAR_15);
        return -1;
    }
    if (VAR_17 > VAR_12 - VAR_7) {
        FUNC_4(VAR_13, VAR_8, "APE tag size too large.\n");
        return VAR_1;
    }
    if (VAR_18 & VAR_0) {
        uint8_t VAR_21[1024];
        enum AVCodecID VAR_22;
        int VAR_23;
        AVStream *VAR_24 = FUNC_6(VAR_13, ((void*)0));
        if (!VAR_24)
            return FUNC_0(VAR_11);

        VAR_23 = FUNC_7(VAR_14, VAR_17, VAR_21, sizeof(VAR_21));
        if (VAR_23 < 0)
            return VAR_23;
        if (VAR_17 <= VAR_23) {
            FUNC_4(VAR_13, VAR_9, "Skipping binary tag '%s'.\n", VAR_15);
            return 0;
        }
        VAR_17 -= VAR_23;

        FUNC_1(&VAR_24->metadata, VAR_15, VAR_21, 0);

        if ((VAR_22 = FUNC_12(VAR_21)) != VAR_4) {
            AVPacket VAR_25;
            int VAR_26;

            VAR_26 = FUNC_3(VAR_13->pb, &VAR_25, VAR_17);
            if (VAR_26 < 0) {
                FUNC_4(VAR_13, VAR_8, "Error reading cover art.\n");
                return VAR_26;
            }

            VAR_24->disposition |= VAR_6;
            VAR_24->codecpar->codec_type = VAR_3;
            VAR_24->codecpar->codec_id = VAR_22;

            VAR_24->attached_pic = VAR_25;
            VAR_24->attached_pic.stream_index = VAR_24->index;
            VAR_24->attached_pic.flags |= VAR_10;
        } else {
            if (FUNC_11(VAR_13, VAR_24->codecpar, VAR_13->pb, VAR_17) < 0)
                return FUNC_0(VAR_11);
            VAR_24->codecpar->codec_type = VAR_2;
        }
    } else {
        VAR_16 = FUNC_5(VAR_17+1);
        if (!VAR_16)
            return FUNC_0(VAR_11);
        VAR_20 = FUNC_9(VAR_14, VAR_16, VAR_17);
        if (VAR_20 < 0) {
            FUNC_2(VAR_16);
            return VAR_20;
        }
        VAR_16[VAR_20] = 0;
        FUNC_1(&VAR_13->metadata, VAR_15, VAR_16, VAR_5);
    }
    return 0;
}
