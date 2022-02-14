
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_23__ {TYPE_3__** streams; int pb; TYPE_4__* priv_data; } ;
struct TYPE_22__ {size_t stream_index; int flags; scalar_t__ dts; scalar_t__ pts; scalar_t__ size; } ;
struct TYPE_21__ {scalar_t__ cluster_pts; int cluster_pos; scalar_t__ cluster_time_limit; int cluster_size_limit; TYPE_5__ cur_audio_pkt; scalar_t__ is_dash; scalar_t__ have_video; int cluster_bc; TYPE_2__* tracks; } ;
struct TYPE_20__ {int time_base; TYPE_1__* codecpar; } ;
struct TYPE_19__ {scalar_t__ ts_offset; scalar_t__ write_dts; } ;
struct TYPE_18__ {int codec_type; } ;
typedef TYPE_4__ MatroskaMuxContext ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_6__*,int ,char*,int) ;
 int FUNC_1 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*,TYPE_5__*,int) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_7, AVPacket *VAR_8)
{
    MatroskaMuxContext *VAR_9 = VAR_7->priv_data;
    int VAR_10 = VAR_7->streams[VAR_8->stream_index]->codecpar->codec_type;
    int VAR_11 = !!(VAR_8->flags & VAR_5);
    int VAR_12;
    int64_t VAR_13;
    int VAR_14;
    int VAR_15;

    VAR_14 = FUNC_6(VAR_7, VAR_8);
    if (VAR_14 < 0)
        return VAR_14;

    if (VAR_9->tracks[VAR_8->stream_index].write_dts)
        VAR_13 = VAR_8->dts - VAR_9->cluster_pts;
    else
        VAR_13 = VAR_8->pts - VAR_9->cluster_pts;
    VAR_13 += VAR_9->tracks[VAR_8->stream_index].ts_offset;



    VAR_12 = FUNC_4(VAR_9->cluster_bc);

    if (VAR_9->is_dash && VAR_10 == VAR_3) {



        VAR_15 = VAR_11;
    } else if (VAR_9->is_dash && VAR_10 == VAR_2 &&
               (VAR_9->cluster_pos == -1 ||
                VAR_13 > VAR_9->cluster_time_limit)) {

        VAR_15 = 1;
    } else if (!VAR_9->is_dash &&
               (VAR_12 > VAR_9->cluster_size_limit ||
                VAR_13 > VAR_9->cluster_time_limit ||
                (VAR_10 == VAR_3 && VAR_11 &&
                 VAR_12 > 4 * 1024))) {
        VAR_15 = 1;
    } else {
        VAR_15 = 0;
    }

    if (VAR_9->cluster_pos != -1 && VAR_15) {
        FUNC_7(VAR_7);
    }

    if (!VAR_9->cluster_pos)
        FUNC_5(VAR_7->pb,
                          FUNC_3(VAR_8->dts, VAR_7->streams[VAR_8->stream_index]->time_base, VAR_6),
                          VAR_11 && (VAR_9->have_video ? VAR_10 == VAR_3 : 1) ? VAR_1 : VAR_0);


    if (VAR_9->cur_audio_pkt.size > 0) {

        VAR_14 = FUNC_8(VAR_7, &VAR_9->cur_audio_pkt,
                                        VAR_9->is_dash ? VAR_15 : 0);
        FUNC_2(&VAR_9->cur_audio_pkt);
        if (VAR_14 < 0) {
            FUNC_0(VAR_7, VAR_4,
                   "Could not write cached audio packet ret:%d\n", VAR_14);
            return VAR_14;
        }
    }



    if (VAR_10 == VAR_2) {
        if (VAR_8->size > 0)
            VAR_14 = FUNC_1(&VAR_9->cur_audio_pkt, VAR_8);
    } else
        VAR_14 = FUNC_8(VAR_7, VAR_8, 0);
    return VAR_14;
}
