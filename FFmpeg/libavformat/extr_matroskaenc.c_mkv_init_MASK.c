
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct AVFormatContext {int nb_streams; int avoid_negative_ts; TYPE_3__** streams; TYPE_2__* internal; } ;
struct TYPE_6__ {TYPE_1__* codecpar; } ;
struct TYPE_5__ {int avoid_negative_ts_use_pts; } ;
struct TYPE_4__ {scalar_t__ codec_id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct AVFormatContext*,int ,char*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_3__*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct AVFormatContext *VAR_10)
{
    int VAR_11;

    if (VAR_10->nb_streams > VAR_9) {
        FUNC_1(VAR_10, VAR_7,
               "At most %d streams are supported for muxing in Matroska\n",
               VAR_9);
        return FUNC_0(VAR_8);
    }

    for (VAR_11 = 0; VAR_11 < VAR_10->nb_streams; VAR_11++) {
        if (VAR_10->streams[VAR_11]->codecpar->codec_id == VAR_1 ||
            VAR_10->streams[VAR_11]->codecpar->codec_id == VAR_2 ||
            VAR_10->streams[VAR_11]->codecpar->codec_id == VAR_3 ||
            VAR_10->streams[VAR_11]->codecpar->codec_id == VAR_6 ||
            VAR_10->streams[VAR_11]->codecpar->codec_id == VAR_4 ||
            VAR_10->streams[VAR_11]->codecpar->codec_id == VAR_5) {
            FUNC_1(VAR_10, VAR_7,
                   "The Matroska muxer does not yet support muxing %s\n",
                   FUNC_2(VAR_10->streams[VAR_11]->codecpar->codec_id));
            return VAR_0;
        }
    }

    if (VAR_10->avoid_negative_ts < 0) {
        VAR_10->avoid_negative_ts = 1;
        VAR_10->internal->avoid_negative_ts_use_pts = 1;
    }

    for (VAR_11 = 0; VAR_11 < VAR_10->nb_streams; VAR_11++) {

        FUNC_3(VAR_10->streams[VAR_11], 64, 1, 1000);
    }

    return 0;
}
