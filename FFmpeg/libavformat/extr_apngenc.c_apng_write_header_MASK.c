
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_12__ {int extra_data; scalar_t__ extra_data_size; TYPE_2__ last_delay; } ;
struct TYPE_11__ {scalar_t__ codec_type; scalar_t__ codec_id; scalar_t__ extradata_size; int extradata; } ;
struct TYPE_10__ {int nb_streams; int pb; TYPE_1__** streams; TYPE_5__* priv_data; } ;
struct TYPE_8__ {TYPE_4__* codecpar; } ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;
typedef TYPE_5__ APNGMuxContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_9)
{
    APNGMuxContext *VAR_10 = VAR_9->priv_data;
    AVCodecParameters *VAR_11 = VAR_9->streams[0]->codecpar;

    if (VAR_9->nb_streams != 1 ||
        VAR_9->streams[0]->codecpar->codec_type != VAR_0 ||
        VAR_9->streams[0]->codecpar->codec_id != VAR_1) {
        FUNC_1(VAR_9, VAR_3,
               "APNG muxer supports only a single video APNG stream.\n");
        return FUNC_0(VAR_5);
    }

    if (VAR_10->last_delay.num > VAR_8 || VAR_10->last_delay.den > VAR_8) {
        FUNC_3(&VAR_10->last_delay.num, &VAR_10->last_delay.den,
                  VAR_10->last_delay.num, VAR_10->last_delay.den, VAR_8);
        FUNC_1(VAR_9, VAR_4,
               "Last frame delay is too precise. Reducing to %d/%d (%f).\n",
               VAR_10->last_delay.num, VAR_10->last_delay.den, (double)VAR_10->last_delay.num / VAR_10->last_delay.den);
    }

    FUNC_4(VAR_9->pb, VAR_7);


    if (VAR_11->extradata_size) {
        VAR_10->extra_data = FUNC_2(VAR_11->extradata_size + VAR_2);
        if (!VAR_10->extra_data)
            return FUNC_0(VAR_6);
        VAR_10->extra_data_size = VAR_11->extradata_size;
        FUNC_5(VAR_10->extra_data, VAR_11->extradata, VAR_11->extradata_size);
    }

    return 0;
}
