
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_22__ {scalar_t__ iformat; TYPE_4__** streams; scalar_t__ oformat; int ctx_flags; int max_delay; TYPE_2__* priv_data; } ;
struct TYPE_21__ {int index; int time_base; } ;
struct TYPE_20__ {int ssrc; } ;
struct TYPE_19__ {int reordering_queue_size; scalar_t__ lower_transport; scalar_t__ transport; } ;
struct TYPE_18__ {size_t stream_index; int crypto_params; scalar_t__* crypto_suite; TYPE_3__* transport_priv; int dynamic_handler; int dynamic_protocol_context; int ssrc; int sdp_payload_type; int * rtp_handle; } ;
typedef TYPE_1__ RTSPStream ;
typedef TYPE_2__ RTSPState ;
typedef TYPE_3__ RTPDemuxContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_3__* FUNC_1 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_5__**,TYPE_5__*,TYPE_4__*,int *,int ,size_t) ;
 TYPE_3__* FUNC_3 (TYPE_5__*,TYPE_4__*,int ,int) ;
 int FUNC_4 (TYPE_3__*,scalar_t__*,int ) ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;

int FUNC_6(AVFormatContext *VAR_10, RTSPStream *VAR_11)
{
    RTSPState *VAR_12 = VAR_10->priv_data;
    AVStream *VAR_13 = ((void*)0);
    int VAR_14 = VAR_12->reordering_queue_size;
    if (VAR_14 < 0) {
        if (VAR_12->lower_transport == VAR_5 || !VAR_10->max_delay)
            VAR_14 = 0;
        else
            VAR_14 = VAR_4;
    }


    if (VAR_11->stream_index >= 0)
        VAR_13 = VAR_10->streams[VAR_11->stream_index];
    if (!VAR_13)
        VAR_10->ctx_flags |= VAR_0;

    if (VAR_2 && VAR_10->oformat && VAR_13) {
        int VAR_15 = FUNC_2((AVFormatContext **)&VAR_11->transport_priv,
                                        VAR_10, VAR_13, VAR_11->rtp_handle,
                                        VAR_6,
                                        VAR_11->stream_index);

        VAR_11->rtp_handle = ((void*)0);
        if (VAR_15 < 0)
            return VAR_15;
        VAR_13->time_base = ((AVFormatContext*)VAR_11->transport_priv)->streams[0]->time_base;
    } else if (VAR_12->transport == VAR_7) {
        return 0;
    } else if (VAR_1 && VAR_12->transport == VAR_8 && VAR_13)
        VAR_11->transport_priv = FUNC_1(VAR_10, VAR_13->index,
                                            VAR_11->dynamic_protocol_context,
                                            VAR_11->dynamic_handler);
    else if (VAR_1)
        VAR_11->transport_priv = FUNC_3(VAR_10, VAR_13,
                                         VAR_11->sdp_payload_type,
                                         VAR_14);

    if (!VAR_11->transport_priv) {
         return FUNC_0(VAR_3);
    } else if (VAR_1 && VAR_12->transport == VAR_9 &&
               VAR_10->iformat) {
        RTPDemuxContext *VAR_16 = VAR_11->transport_priv;
        VAR_16->ssrc = VAR_11->ssrc;
        if (VAR_11->dynamic_handler) {
            FUNC_5(VAR_11->transport_priv,
                                              VAR_11->dynamic_protocol_context,
                                              VAR_11->dynamic_handler);
        }
        if (VAR_11->crypto_suite[0])
            FUNC_4(VAR_11->transport_priv,
                                    VAR_11->crypto_suite,
                                    VAR_11->crypto_params);
    }

    return 0;
}
