
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_24__ {scalar_t__ codec_type; scalar_t__ codec_id; } ;
struct TYPE_23__ {int nb_streams; TYPE_1__** streams; TYPE_3__* pb; TYPE_4__* priv_data; } ;
struct TYPE_22__ {int riff_id; int master_index_max_size; scalar_t__ odml_list; int riff_start; int movi_list; } ;
struct TYPE_21__ {int seekable; } ;
struct TYPE_20__ {int packet_count; int max_size; scalar_t__ frames_hdr_strm; int last_dts; } ;
struct TYPE_19__ {TYPE_2__* priv_data; TYPE_6__* codecpar; } ;
typedef TYPE_2__ AVIStream ;
typedef TYPE_3__ AVIOContext ;
typedef TYPE_4__ AVIContext ;
typedef TYPE_5__ AVFormatContext ;
typedef TYPE_6__ AVCodecParameters ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_5__*,int ,char*,int) ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*,scalar_t__,int ) ;
 int FUNC_5 (TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 int FUNC_10 (TYPE_5__*,int,int ) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_8)
{
    AVIContext *VAR_9 = VAR_8->priv_data;
    AVIOContext *VAR_10 = VAR_8->pb;
    int VAR_11 = 0;
    int VAR_12, VAR_13, VAR_14;
    int64_t VAR_15;

    for (VAR_12 = 0; VAR_12 < VAR_8->nb_streams; VAR_12++) {
        AVIStream *VAR_16 = VAR_8->streams[VAR_12]->priv_data;
        FUNC_10(VAR_8, VAR_12, VAR_16->last_dts);
    }

    if (VAR_10->seekable & VAR_0) {
        if (VAR_9->riff_id == 1) {
            FUNC_8(VAR_10, VAR_9->movi_list);
            VAR_11 = FUNC_2(VAR_8);
            FUNC_8(VAR_10, VAR_9->riff_start);
        } else {
            FUNC_3(VAR_8);
            FUNC_8(VAR_10, VAR_9->movi_list);
            FUNC_8(VAR_10, VAR_9->riff_start);

            VAR_15 = FUNC_6(VAR_10);
            FUNC_4(VAR_10, VAR_9->odml_list - 8, VAR_7);
            FUNC_9(VAR_10, "LIST");
            FUNC_5(VAR_10, 16);

            for (VAR_13 = VAR_14 = 0; VAR_13 < VAR_8->nb_streams; VAR_13++) {
                AVCodecParameters *VAR_17 = VAR_8->streams[VAR_13]->codecpar;
                AVIStream *VAR_18 = VAR_8->streams[VAR_13]->priv_data;

                if (VAR_17->codec_type == VAR_3) {
                    if (VAR_14 < VAR_18->packet_count)
                        VAR_14 = VAR_18->packet_count;
                } else {
                    if (VAR_17->codec_id == VAR_4 ||
                        VAR_17->codec_id == VAR_5)
                        VAR_14 += VAR_18->packet_count;
                }
            }
            FUNC_7(VAR_10, VAR_14);
            FUNC_4(VAR_10, VAR_15, VAR_7);

            FUNC_1(VAR_8, VAR_9->riff_id);
        }
    }

    if (VAR_9->riff_id >= VAR_9->master_index_max_size) {
        int VAR_19 = VAR_2 +
                          VAR_1 * VAR_9->riff_id;
        FUNC_0(VAR_8, VAR_6, "Output file not strictly OpenDML compliant, "
               "consider re-muxing with 'reserve_index_space' option value >= %d\n",
               VAR_19);
    }

    for (VAR_12 = 0; VAR_12 < VAR_8->nb_streams; VAR_12++) {
        AVIStream *VAR_20 = VAR_8->streams[VAR_12]->priv_data;
        if (VAR_10->seekable & VAR_0) {
            FUNC_4(VAR_10, VAR_20->frames_hdr_strm + 4, VAR_7);
            FUNC_7(VAR_10, VAR_20->max_size);
        }
    }

    return VAR_11;
}
