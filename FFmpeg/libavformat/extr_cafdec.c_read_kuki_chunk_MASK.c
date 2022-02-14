
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char uint8_t ;
typedef int int64_t ;
struct TYPE_12__ {scalar_t__ codec_id; char* extradata; int channels; } ;
struct TYPE_11__ {TYPE_1__** streams; int * pb; } ;
struct TYPE_10__ {TYPE_6__* codecpar; } ;
typedef TYPE_1__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (char**) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_8 (TYPE_6__*,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_6__*,int *,int) ;
 int FUNC_10 (TYPE_2__*,int *) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,char*,int) ;

__attribute__((used)) static int FUNC_13(AVFormatContext *VAR_12, int64_t VAR_13)
{
    AVIOContext *VAR_14 = VAR_12->pb;
    AVStream *VAR_15 = VAR_12->streams[0];

    if (VAR_13 < 0 || VAR_13 > VAR_11 - VAR_8)
        return -1;

    if (VAR_15->codecpar->codec_id == VAR_5) {



        int VAR_16, VAR_17;

        VAR_16 = FUNC_6(VAR_14);
        FUNC_10(VAR_12, VAR_14);
        VAR_17 = VAR_13 - (FUNC_6(VAR_14) - VAR_16);
        if (VAR_17 < 0 || !VAR_15->codecpar->extradata ||
            VAR_15->codecpar->codec_id != VAR_5) {
            FUNC_3(VAR_12, VAR_9, "invalid AAC magic cookie\n");
            return VAR_3;
        }
        FUNC_5(VAR_14, VAR_17);
    } else if (VAR_15->codecpar->codec_id == VAR_6) {



        uint8_t VAR_18[12];
        if (VAR_13 < 24) {
            FUNC_3(VAR_12, VAR_9, "invalid ALAC magic cookie\n");
            FUNC_5(VAR_14, VAR_13);
            return VAR_3;
        }
        if (FUNC_4(VAR_14, VAR_18, 12) != 12) {
            FUNC_3(VAR_12, VAR_9, "failed to read preamble\n");
            return VAR_3;
        }

        FUNC_2(&VAR_15->codecpar->extradata);
        if (FUNC_8(VAR_15->codecpar, 36))
            return FUNC_0(VAR_10);





        if (!FUNC_11(&VAR_18[4], "frmaalac", 8)) {
            if (VAR_13 < 12 + 36) {
                FUNC_3(VAR_12, VAR_9, "invalid ALAC magic cookie\n");
                FUNC_2(&VAR_15->codecpar->extradata);
                return VAR_3;
            }
            if (FUNC_4(VAR_14, VAR_15->codecpar->extradata, 36) != 36) {
                FUNC_3(VAR_12, VAR_9, "failed to read kuki header\n");
                FUNC_2(&VAR_15->codecpar->extradata);
                return VAR_3;
            }
            FUNC_5(VAR_14, VAR_13 - 12 - 36);
        } else {
            FUNC_1(VAR_15->codecpar->extradata, 36);
            FUNC_12(&VAR_15->codecpar->extradata[4], "alac", 4);
            FUNC_1(&VAR_15->codecpar->extradata[8], 0);
            FUNC_12(&VAR_15->codecpar->extradata[12], VAR_18, 12);
            if (FUNC_4(VAR_14, &VAR_15->codecpar->extradata[24], 24 - 12) != 24 - 12) {
                FUNC_3(VAR_12, VAR_9, "failed to read new kuki header\n");
                FUNC_2(&VAR_15->codecpar->extradata);
                return VAR_3;
            }
            FUNC_5(VAR_14, VAR_13 - 24);
        }
    } else if (VAR_15->codecpar->codec_id == VAR_7) {


        if (VAR_15->codecpar->channels > 2) {
            FUNC_7(VAR_12, "multichannel Opus in CAF");
            return VAR_4;
        }
        FUNC_5(VAR_14, VAR_13);
    } else {
        FUNC_2(&VAR_15->codecpar->extradata);
        if (FUNC_9(VAR_12, VAR_15->codecpar, VAR_14, VAR_13) < 0)
            return FUNC_0(VAR_10);
    }

    return 0;
}
