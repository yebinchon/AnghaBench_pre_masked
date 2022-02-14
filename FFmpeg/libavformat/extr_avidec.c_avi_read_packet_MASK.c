
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_32__ {TYPE_2__** streams; int * pb; TYPE_6__* priv_data; } ;
struct TYPE_31__ {int non_interleaved; size_t stream_index; int index_loaded; int dts_max; scalar_t__ dv_demux; int last_pkt_pos; } ;
struct TYPE_30__ {int sample_size; int remaining; scalar_t__ frame_offset; scalar_t__ seek_pos; scalar_t__ packet_size; scalar_t__ has_pal; int pal; } ;
struct TYPE_29__ {scalar_t__ timestamp; int flags; } ;
struct TYPE_28__ {unsigned int size; int* data; scalar_t__ pos; scalar_t__ dts; int stream_index; int flags; int * buf; } ;
struct TYPE_27__ {int nb_index_entries; int time_base; TYPE_1__* codecpar; TYPE_4__* index_entries; TYPE_5__* priv_data; } ;
struct TYPE_26__ {scalar_t__ codec_type; scalar_t__ codec_id; int codec_tag; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVIndexEntry ;
typedef TYPE_5__ AVIStream ;
typedef int AVIOContext ;
typedef TYPE_6__ AVIContext ;
typedef TYPE_7__ AVFormatContext ;
typedef int AVBufferRef ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int,int) ;
 int VAR_13 ;
 int FUNC_1 (int *,TYPE_3__*,int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_7__*,int ,char*) ;
 int* FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (TYPE_7__*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__,TYPE_3__*) ;
 int FUNC_10 (scalar_t__,TYPE_3__*,int*,unsigned int,scalar_t__) ;
 int* FUNC_11 (int const*,int const*,int*) ;
 scalar_t__ FUNC_12 (TYPE_5__*,unsigned int) ;
 scalar_t__ FUNC_13 (TYPE_7__*,TYPE_2__*,TYPE_3__*) ;
 int FUNC_14 (int*,int ,int ) ;
 int FUNC_15 (TYPE_7__*) ;
 scalar_t__ FUNC_16 (TYPE_7__*,TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_17(AVFormatContext *VAR_14, AVPacket *VAR_15)
{
    AVIContext *VAR_16 = VAR_14->priv_data;
    AVIOContext *VAR_17 = VAR_14->pb;
    int VAR_18;

    if (VAR_12 && VAR_16->dv_demux) {
        int VAR_19 = FUNC_9(VAR_16->dv_demux, VAR_15);
        if (VAR_19 >= 0)
            return VAR_19;
        else
            goto resync;
    }

    if (VAR_16->non_interleaved) {
        VAR_18 = FUNC_15(VAR_14);
        if (VAR_18 < 0)
            return VAR_18;
    }

resync:
    if (VAR_16->stream_index >= 0) {
        AVStream *VAR_20 = VAR_14->streams[VAR_16->stream_index];
        AVIStream *VAR_21 = VAR_20->priv_data;
        int VAR_22, VAR_23;

        if (FUNC_13(VAR_14, VAR_20, VAR_15))
            return 0;


        if (VAR_21->sample_size <= 1)
            VAR_22 = VAR_13;
        else if (VAR_21->sample_size < 32)

            VAR_22 = 1024 * VAR_21->sample_size;
        else
            VAR_22 = VAR_21->sample_size;

        if (VAR_22 > VAR_21->remaining)
            VAR_22 = VAR_21->remaining;
        VAR_16->last_pkt_pos = FUNC_8(VAR_17);
        VAR_23 = FUNC_1(VAR_17, VAR_15, VAR_22);
        if (VAR_23 < 0)
            return VAR_23;
        VAR_22 = VAR_23;

        if (VAR_21->has_pal && VAR_15->size < (unsigned)VAR_13 / 2) {
            uint8_t *VAR_24;
            VAR_24 = FUNC_4(VAR_15,
                                          VAR_8,
                                          VAR_3);
            if (!VAR_24) {
                FUNC_3(VAR_14, VAR_6,
                       "Failed to allocate data for palette\n");
            } else {
                FUNC_14(VAR_24, VAR_21->pal, VAR_3);
                VAR_21->has_pal = 0;
            }
        }

        if (VAR_12 && VAR_16->dv_demux) {
            AVBufferRef *VAR_25 = VAR_15->buf;
            VAR_22 = FUNC_10(VAR_16->dv_demux, VAR_15,
                                            VAR_15->data, VAR_15->size, VAR_15->pos);
            VAR_15->buf = VAR_25;
            VAR_15->flags |= VAR_9;
            if (VAR_22 < 0)
                FUNC_5(VAR_15);
        } else if (VAR_20->codecpar->codec_type == VAR_1 &&
                   !VAR_20->codecpar->codec_tag && FUNC_16(VAR_14, VAR_20, VAR_15)) {
            VAR_21->frame_offset++;
            VAR_16->stream_index = -1;
            VAR_21->remaining = 0;
            goto resync;
        } else {

            VAR_15->dts = VAR_21->frame_offset;

            if (VAR_21->sample_size)
                VAR_15->dts /= VAR_21->sample_size;
            VAR_15->stream_index = VAR_16->stream_index;

            if (VAR_20->codecpar->codec_type == VAR_2 && VAR_20->index_entries) {
                AVIndexEntry *VAR_26;
                int VAR_27;

                VAR_27 = FUNC_2(VAR_20, VAR_21->frame_offset, VAR_4);
                VAR_26 = &VAR_20->index_entries[VAR_27];

                if (VAR_27 >= 0 && VAR_26->timestamp == VAR_21->frame_offset) {
                    if (VAR_27 == VAR_20->nb_index_entries-1) {
                        int VAR_28=1;
                        uint32_t VAR_29=-1;
                        if (VAR_20->codecpar->codec_id == VAR_5) {
                            const uint8_t *VAR_30 = VAR_15->data, *VAR_31 = VAR_30 + FUNC_0(VAR_22, 256);
                            while (VAR_30 < VAR_31) {
                                VAR_30 = FUNC_11(VAR_30, VAR_31, &VAR_29);
                                if (VAR_29 == 0x1B6 && VAR_30 < VAR_31) {
                                    VAR_28 = !(*VAR_30 & 0xC0);
                                    break;
                                }
                            }
                        }
                        if (!VAR_28)
                            VAR_26->flags &= ~VAR_0;
                    }
                    if (VAR_26->flags & VAR_0)
                        VAR_15->flags |= VAR_9;
                }
            } else {
                VAR_15->flags |= VAR_9;
            }
            VAR_21->frame_offset += FUNC_12(VAR_21, VAR_15->size);
        }
        VAR_21->remaining -= VAR_23;
        if (!VAR_21->remaining) {
            VAR_16->stream_index = -1;
            VAR_21->packet_size = 0;
        }

        if (!VAR_16->non_interleaved && VAR_15->pos >= 0 && VAR_21->seek_pos > VAR_15->pos) {
            FUNC_5(VAR_15);
            goto resync;
        }
        VAR_21->seek_pos= 0;

        if (!VAR_16->non_interleaved && VAR_20->nb_index_entries>1 && VAR_16->index_loaded>1) {
            int64_t VAR_32= FUNC_6(VAR_15->dts, VAR_20->time_base, VAR_11);

            if (VAR_16->dts_max - VAR_32 > 2*VAR_10) {
                VAR_16->non_interleaved= 1;
                FUNC_3(VAR_14, VAR_7, "Switching to NI mode, due to poor interleaving\n");
            }else if (VAR_16->dts_max < VAR_32)
                VAR_16->dts_max = VAR_32;
        }

        return 0;
    }

    if ((VAR_18 = FUNC_7(VAR_14, 0)) < 0)
        return VAR_18;
    goto resync;
}
