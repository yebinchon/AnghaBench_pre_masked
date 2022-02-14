
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct gxf_stream_info {int fields_per_frame; } ;
struct TYPE_22__ {TYPE_2__** streams; struct gxf_stream_info* priv_data; TYPE_4__* pb; } ;
struct TYPE_21__ {int eof_reached; } ;
struct TYPE_20__ {int stream_index; int dts; int duration; } ;
struct TYPE_19__ {TYPE_1__* codecpar; } ;
struct TYPE_18__ {scalar_t__ codec_id; } ;
typedef int GXFPktType ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_2 (TYPE_5__*,int ,char*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_5__*,int,int) ;
 int FUNC_8 (TYPE_5__*,int) ;
 int FUNC_9 (TYPE_4__*,int *,int*) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_7, AVPacket *VAR_8) {
    AVIOContext *VAR_9 = VAR_7->pb;
    GXFPktType VAR_10;
    int VAR_11;
    struct gxf_stream_info *VAR_12 = VAR_7->priv_data;

    while (!VAR_9->eof_reached) {
        AVStream *VAR_13;
        int VAR_14, VAR_15, VAR_16;
        int VAR_17, VAR_18, VAR_19 = 0;
        int VAR_20;
        if (!FUNC_9(VAR_9, &VAR_10, &VAR_11)) {
            if (!FUNC_3(VAR_9))
                FUNC_2(VAR_7, VAR_4, "sync lost\n");
            return -1;
        }
        if (VAR_10 == VAR_5) {
            FUNC_8(VAR_7, VAR_11);
            continue;
        }
        if (VAR_10 != VAR_6) {
            FUNC_6(VAR_9, VAR_11);
            continue;
        }
        if (VAR_11 < 16) {
            FUNC_2(VAR_7, VAR_4, "invalid media packet length\n");
            continue;
        }
        VAR_11 -= 16;
        VAR_14 = FUNC_4(VAR_9);
        VAR_15 = FUNC_4(VAR_9);
        VAR_20 = FUNC_7(VAR_7, VAR_15, VAR_14);
        if (VAR_20 < 0)
            return VAR_20;
        VAR_13 = VAR_7->streams[VAR_20];
        VAR_17 = FUNC_5(VAR_9);
        VAR_18 = FUNC_5(VAR_9);
        FUNC_5(VAR_9);
        FUNC_4(VAR_9);
        FUNC_4(VAR_9);
        if (VAR_13->codecpar->codec_id == VAR_3 ||
            VAR_13->codecpar->codec_id == VAR_2) {
            int VAR_21 = VAR_18 >> 16;
            int VAR_22 = VAR_18 & 0xffff;
            int VAR_23 = FUNC_0(VAR_13->codecpar->codec_id)>>3;
            if (VAR_21 <= VAR_22 && VAR_22*VAR_23 <= VAR_11) {
                FUNC_6(VAR_9, VAR_21*VAR_23);
                VAR_19 = VAR_11 - VAR_22*VAR_23;
                VAR_11 = (VAR_22-VAR_21)*VAR_23;
            } else
                FUNC_2(VAR_7, VAR_4, "invalid first and last sample values\n");
        }
        VAR_16 = FUNC_1(VAR_9, VAR_8, VAR_11);
        if (VAR_19)
            FUNC_6(VAR_9, VAR_19);
        VAR_8->stream_index = VAR_20;
        VAR_8->dts = VAR_17;


        if (VAR_13->codecpar->codec_id == VAR_1)
            VAR_8->duration = VAR_12->fields_per_frame;

        return VAR_16;
    }
    return VAR_0;
}
