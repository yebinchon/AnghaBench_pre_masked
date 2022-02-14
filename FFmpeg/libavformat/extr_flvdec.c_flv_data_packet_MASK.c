
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
typedef int buf ;
struct TYPE_13__ {int nb_streams; int * pb; TYPE_2__** streams; } ;
struct TYPE_12__ {int dts; int pts; int size; int flags; int stream_index; } ;
struct TYPE_11__ {int index; TYPE_1__* codecpar; } ;
struct TYPE_10__ {scalar_t__ codec_type; int codec_id; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;
typedef scalar_t__ AMFDataType ;





 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,TYPE_3__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int ) ;
 TYPE_2__* FUNC_7 (TYPE_4__*,scalar_t__) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_8, AVPacket *VAR_9,
                           int64_t VAR_10, int64_t VAR_11)
{
    AVIOContext *VAR_12 = VAR_8->pb;
    AVStream *VAR_13 = ((void*)0);
    char VAR_14[20];
    int VAR_15 = VAR_1;
    int VAR_16, VAR_17 = -1;
    int VAR_18 = 0;

    switch (FUNC_4(VAR_12)) {
    case 130:
        VAR_18 = 1;
    case 129:
        FUNC_6(VAR_12, 4, VAR_6);
    case 128:
        break;
    default:
        goto skip;
    }

    while (VAR_18 || (VAR_15 = FUNC_1(VAR_12, VAR_14, sizeof(VAR_14))) > 0) {
        AMFDataType VAR_19 = FUNC_4(VAR_12);
        if (VAR_19 == VAR_0 && (VAR_18 || !FUNC_8(VAR_14, "text"))) {
            VAR_17 = FUNC_5(VAR_12);
            VAR_15 = FUNC_3(VAR_12, VAR_9, VAR_17);
            if (VAR_15 < 0)
                goto skip;
            else
                break;
        } else {
            if ((VAR_15 = FUNC_2(VAR_12, VAR_19)) < 0)
                goto skip;
        }
    }

    if (VAR_17 < 0) {
        VAR_15 = VAR_1;
        goto skip;
    }

    for (VAR_16 = 0; VAR_16 < VAR_8->nb_streams; VAR_16++) {
        VAR_13 = VAR_8->streams[VAR_16];
        if (VAR_13->codecpar->codec_type == VAR_2)
            break;
    }

    if (VAR_16 == VAR_8->nb_streams) {
        VAR_13 = FUNC_7(VAR_8, VAR_2);
        if (!VAR_13)
            return FUNC_0(VAR_5);
        VAR_13->codecpar->codec_id = VAR_3;
    }

    VAR_9->dts = VAR_10;
    VAR_9->pts = VAR_10;
    VAR_9->size = VAR_15;

    VAR_9->stream_index = VAR_13->index;
    VAR_9->flags |= VAR_4;

skip:
    FUNC_6(VAR_8->pb, VAR_11 + 4, VAR_7);

    return VAR_15;
}
