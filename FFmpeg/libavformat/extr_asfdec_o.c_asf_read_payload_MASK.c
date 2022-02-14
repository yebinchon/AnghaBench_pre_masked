
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_21__ {int sub_left; int stream_index; int nb_streams; scalar_t__ packet_offset; scalar_t__ packet_size; scalar_t__ data_offset; scalar_t__ data_size; int prop_flags; scalar_t__ rep_data_len; TYPE_1__** asf_st; int state; scalar_t__ nb_mult_left; scalar_t__ sub_dts; } ;
struct TYPE_20__ {scalar_t__ frame_num; int dts; int flags; scalar_t__ size_left; int stream_index; } ;
struct TYPE_19__ {int * pb; TYPE_5__* priv_data; } ;
struct TYPE_18__ {int stream_index; int dts; int flags; } ;
struct TYPE_17__ {int stream_index; int index; TYPE_4__ pkt; } ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ ASFPacket ;
typedef TYPE_5__ ASFContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int,int ,scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_5 (TYPE_3__*,int ,char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,scalar_t__,int ) ;
 int FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_14, AVPacket *VAR_15)
{
    ASFContext *VAR_16 = VAR_14->priv_data;
    AVIOContext *VAR_17 = VAR_14->pb;
    int VAR_18, VAR_19;
    ASFPacket *VAR_20 = ((void*)0);

    if (!VAR_16->sub_left) {
        uint32_t VAR_21, VAR_22;
        uint8_t VAR_23;

        VAR_23 = FUNC_6(VAR_17);
        VAR_16->stream_index = VAR_23 & VAR_6;
        for (VAR_19 = 0; VAR_19 < VAR_16->nb_streams; VAR_19++) {
            if (VAR_16->stream_index == VAR_16->asf_st[VAR_19]->stream_index) {
                VAR_20 = &VAR_16->asf_st[VAR_19]->pkt;
                VAR_20->stream_index = VAR_16->asf_st[VAR_19]->index;
                break;
            }
        }
        if (!VAR_20) {
            if (VAR_16->packet_offset + VAR_16->packet_size <= VAR_16->data_offset + VAR_16->data_size) {
                if (!VAR_16->packet_size) {
                    FUNC_5(VAR_14, VAR_8, "Invalid packet size 0.\n");
                    return VAR_7;
                }
                FUNC_7(VAR_17, VAR_16->packet_offset + VAR_16->packet_size, VAR_13);
                FUNC_5(VAR_14, VAR_9, "Skipping the stream with the invalid stream index %d.\n",
                       VAR_16->stream_index);
                return FUNC_0(VAR_11);
            } else
                return VAR_7;
        }

        if (VAR_23 >> 7)
            VAR_20->flags |= VAR_10;
        FUNC_1(VAR_16->prop_flags & VAR_3,
                 VAR_0, VAR_22);
        FUNC_1(VAR_16->prop_flags & VAR_4,
                 VAR_1, VAR_21);
        FUNC_1(VAR_16->prop_flags & VAR_5,
                 VAR_2, VAR_16->rep_data_len);
        if (VAR_20->size_left && (VAR_20->frame_num != VAR_22)) {
            FUNC_5(VAR_14, VAR_9, "Unfinished frame will be ignored\n");
            FUNC_8(VAR_20);
        }
        VAR_20->frame_num = VAR_22;
        VAR_16->sub_dts = VAR_21;
        if (VAR_16->nb_mult_left) {
            if ((VAR_18 = FUNC_2(VAR_14, VAR_15, VAR_20)) < 0)
                return VAR_18;
        } else if (VAR_16->rep_data_len == 1) {
            VAR_16->sub_left = 1;
            VAR_16->state = VAR_12;
            VAR_15->flags = VAR_20->flags;
            if ((VAR_18 = FUNC_4(VAR_14, VAR_15, 1)) < 0)
                return VAR_18;
        } else {
            if ((VAR_18 = FUNC_3(VAR_14, VAR_20)) < 0)
                return VAR_18;
        }
    } else {
        for (VAR_19 = 0; VAR_19 <= VAR_16->nb_streams; VAR_19++) {
            if (VAR_16->stream_index == VAR_16->asf_st[VAR_19]->stream_index) {
                VAR_20 = &VAR_16->asf_st[VAR_19]->pkt;
                break;
            }
        }
        if (!VAR_20)
            return VAR_7;
        VAR_15->flags = VAR_20->flags;
        VAR_15->dts = VAR_20->dts;
        VAR_15->stream_index = VAR_16->asf_st[VAR_19]->index;
        if ((VAR_18 = FUNC_4(VAR_14, VAR_15, 0)) < 0)
            return VAR_18;
    }

    return 0;
}
