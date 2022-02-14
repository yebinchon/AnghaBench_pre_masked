
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int64_t ;
struct TYPE_22__ {scalar_t__ codec_id; int extradata_size; scalar_t__ codec_type; void* extradata; } ;
struct TYPE_21__ {int nb_streams; TYPE_2__** streams; TYPE_4__* priv_data; } ;
struct TYPE_20__ {size_t stream_index; int size; scalar_t__ pts; scalar_t__ dts; int flags; } ;
struct TYPE_19__ {int flags; int need_rewrite_extradata; scalar_t__ max_fragment_duration; scalar_t__ max_fragment_size; scalar_t__ mdat_size; scalar_t__ min_fragment_duration; TYPE_3__* tracks; } ;
struct TYPE_18__ {int frag_discont; scalar_t__ dts_shift; scalar_t__ start_dts; scalar_t__ start_cts; scalar_t__ track_duration; scalar_t__ end_pts; int end_reliable; scalar_t__ entry; TYPE_1__* cluster; TYPE_7__* par; } ;
struct TYPE_17__ {int time_base; } ;
struct TYPE_16__ {scalar_t__ dts; } ;
typedef TYPE_3__ MOVTrack ;
typedef TYPE_4__ MOVMuxContext ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFormatContext ;
typedef TYPE_7__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (scalar_t__) ;
 int * FUNC_3 (TYPE_5__*,int ,int*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_6__*,TYPE_5__*) ;
 scalar_t__ FUNC_7 (int *,void*,int) ;
 int FUNC_8 (void*,int *,int) ;
 int FUNC_9 (TYPE_6__*,int ) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_15, AVPacket *VAR_16)
{
        MOVMuxContext *VAR_17 = VAR_15->priv_data;
        MOVTrack *VAR_18 = &VAR_17->tracks[VAR_16->stream_index];
        AVCodecParameters *VAR_19 = VAR_18->par;
        int64_t VAR_20 = 0;
        int VAR_21 = VAR_16->size;

        int VAR_22 = FUNC_5(VAR_15, VAR_16);
        if (VAR_22 < 0)
            return VAR_22;

        if (VAR_17->flags & VAR_11) {
            int VAR_23;
            for (VAR_23 = 0; VAR_23 < VAR_15->nb_streams; VAR_23++)
                VAR_17->tracks[VAR_23].frag_discont = 1;
            VAR_17->flags &= ~VAR_11;
        }

        if (VAR_17->flags & VAR_14) {
            if (VAR_18->dts_shift == VAR_6)
                VAR_18->dts_shift = VAR_16->pts - VAR_16->dts;
            VAR_16->dts += VAR_18->dts_shift;
        }

        if (VAR_18->par->codec_id == VAR_4 ||
            VAR_18->par->codec_id == VAR_1 ||
            VAR_18->par->codec_id == VAR_2 ||
            VAR_18->par->codec_id == VAR_3) {
            int VAR_24 = 0;
            uint8_t *VAR_25 = FUNC_3(VAR_16, VAR_7, &VAR_24);
            if (VAR_25 && VAR_24 > 0 && (VAR_24 != VAR_19->extradata_size || FUNC_7(VAR_25, VAR_19->extradata, VAR_24))) {
                void *VAR_26 = FUNC_2(VAR_24 + VAR_5);
                if (!VAR_26)
                    return FUNC_0(VAR_10);
                FUNC_1(VAR_19->extradata);
                VAR_19->extradata = VAR_26;
                FUNC_8(VAR_19->extradata, VAR_25, VAR_24);
                VAR_19->extradata_size = VAR_24;
                if (!VAR_16->size)
                    VAR_17->need_rewrite_extradata = 1;
            }
        }

        if (!VAR_16->size) {
            if (VAR_18->start_dts == VAR_6 && VAR_18->frag_discont) {
                VAR_18->start_dts = VAR_16->dts;
                if (VAR_16->pts != VAR_6)
                    VAR_18->start_cts = VAR_16->pts - VAR_16->dts;
                else
                    VAR_18->start_cts = 0;
            }

            return 0;
        }

        if (VAR_18->entry && VAR_16->stream_index < VAR_15->nb_streams)
            VAR_20 = FUNC_4(VAR_16->dts - VAR_18->cluster[0].dts,
                                         VAR_15->streams[VAR_16->stream_index]->time_base,
                                         VAR_9);
        if ((VAR_17->max_fragment_duration &&
             VAR_20 >= VAR_17->max_fragment_duration) ||
             (VAR_17->max_fragment_size && VAR_17->mdat_size + VAR_21 >= VAR_17->max_fragment_size) ||
             (VAR_17->flags & VAR_13 &&
              VAR_19->codec_type == VAR_0 &&
              VAR_18->entry && VAR_16->flags & VAR_8) ||
              (VAR_17->flags & VAR_12)) {
            if (VAR_20 >= VAR_17->min_fragment_duration) {




                VAR_18->track_duration = VAR_16->dts - VAR_18->start_dts;
                if (VAR_16->pts != VAR_6)
                    VAR_18->end_pts = VAR_16->pts;
                else
                    VAR_18->end_pts = VAR_16->dts;
                VAR_18->end_reliable = 1;
                FUNC_9(VAR_15, 0);
            }
        }

        return FUNC_6(VAR_15, VAR_16);
}
