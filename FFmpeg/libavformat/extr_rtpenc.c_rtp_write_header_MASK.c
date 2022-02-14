
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int const codec_id; scalar_t__ codec_type; int sample_rate; int extradata_size; int* extradata; int channels; int block_align; } ;
struct TYPE_12__ {scalar_t__ id; TYPE_7__* codecpar; } ;
struct TYPE_11__ {int nb_streams; scalar_t__ payload_type; int base_timestamp; int timestamp; int ssrc; int first_packet; int start_time_realtime; int seq; int flags; int packet_size; int max_payload_size; int nal_length_size; int max_frames_per_packet; scalar_t__ buf; int strict_std_compliance; scalar_t__ buf_ptr; TYPE_1__* pb; scalar_t__ first_rtcp_ntp_time; scalar_t__ cur_timestamp; TYPE_3__** streams; struct TYPE_11__* priv_data; } ;
struct TYPE_10__ {int max_packet_size; } ;
typedef TYPE_2__ RTPMuxContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,int ,char*,...) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int const) ;
 int FUNC_7 (TYPE_3__*,int,int,int) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_7__*,int) ;
 int FUNC_10 (int const) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_12)
{
    RTPMuxContext *VAR_13 = VAR_12->priv_data;
    int VAR_14, VAR_15 = FUNC_0(VAR_5);
    AVStream *VAR_16;

    if (VAR_12->nb_streams != 1) {
        FUNC_4(VAR_12, VAR_3, "Only one stream supported in the RTP muxer\n");
        return FUNC_0(VAR_5);
    }
    VAR_16 = VAR_12->streams[0];
    if (!FUNC_10(VAR_16->codecpar->codec_id)) {
        FUNC_4(VAR_12, VAR_3, "Unsupported codec %s\n", FUNC_6(VAR_16->codecpar->codec_id));

        return -1;
    }

    if (VAR_13->payload_type < 0) {

        if (VAR_16->id < VAR_10)
            VAR_16->id = FUNC_9(VAR_12, VAR_16->codecpar, -1);

        VAR_13->payload_type = VAR_16->id;
    } else {

        VAR_16->id = VAR_13->payload_type;
    }

    VAR_13->base_timestamp = FUNC_3();
    VAR_13->timestamp = VAR_13->base_timestamp;
    VAR_13->cur_timestamp = 0;
    if (!VAR_13->ssrc)
        VAR_13->ssrc = FUNC_3();
    VAR_13->first_packet = 1;
    VAR_13->first_rtcp_ntp_time = FUNC_8();
    if (VAR_12->start_time_realtime != 0 && VAR_12->start_time_realtime != VAR_4)

        VAR_13->first_rtcp_ntp_time = (VAR_12->start_time_realtime / 1000) * 1000 +
                                 VAR_9;



    if (VAR_13->seq < 0) {
        if (VAR_12->flags & VAR_1) {
            VAR_13->seq = 0;
        } else
            VAR_13->seq = FUNC_3() & 0x0fff;
    } else
        VAR_13->seq &= 0xffff;

    if (VAR_12->packet_size) {
        if (VAR_12->pb->max_packet_size)
            VAR_12->packet_size = FUNC_1(VAR_12->packet_size,
                                    VAR_12->pb->max_packet_size);
    } else
        VAR_12->packet_size = VAR_12->pb->max_packet_size;
    if (VAR_12->packet_size <= 12) {
        FUNC_4(VAR_12, VAR_3, "Max packet size %u too low\n", VAR_12->packet_size);
        return FUNC_0(VAR_6);
    }
    VAR_13->buf = FUNC_5(VAR_12->packet_size);
    if (!VAR_13->buf) {
        return FUNC_0(VAR_7);
    }
    VAR_13->max_payload_size = VAR_12->packet_size - 12;

    if (VAR_16->codecpar->codec_type == VAR_2) {
        FUNC_7(VAR_16, 32, 1, VAR_16->codecpar->sample_rate);
    } else {
        FUNC_7(VAR_16, 32, 1, 90000);
    }
    VAR_13->buf_ptr = VAR_13->buf;
    switch(VAR_16->codecpar->codec_id) {
    case 136:
    case 135:
        VAR_13->buf_ptr = VAR_13->buf + 4;
        FUNC_7(VAR_16, 32, 1, 90000);
        break;
    case 134:
    case 132:
        break;
    case 133:
        VAR_14 = VAR_13->max_payload_size / VAR_11;
        if (VAR_14 < 1)
            VAR_14 = 1;
        VAR_13->max_payload_size = VAR_14 * VAR_11;
        break;
    case 141:
        if (VAR_12->strict_std_compliance > VAR_8) {
            FUNC_4(VAR_13, VAR_3,
                   "Packetizing VC-2 is experimental and does not use all values "
                   "of the specification "
                   "(even though most receivers may handle it just fine). "
                   "Please set -strict experimental in order to enable it.\n");
            VAR_15 = VAR_0;
            goto fail;
        }
        break;
    case 140:
        if (VAR_12->strict_std_compliance > VAR_8) {
            FUNC_4(VAR_13, VAR_3,
                   "Packetizing H.261 is experimental and produces incorrect "
                   "packetization for cases where GOBs don't fit into packets "
                   "(even though most receivers may handle it just fine). "
                   "Please set -f_strict experimental in order to enable it.\n");
            VAR_15 = VAR_0;
            goto fail;
        }
        break;
    case 139:

        if (VAR_16->codecpar->extradata_size > 4 && VAR_16->codecpar->extradata[0] == 1) {
            VAR_13->nal_length_size = (VAR_16->codecpar->extradata[4] & 0x03) + 1;
        }
        break;
    case 138:




        if (VAR_16->codecpar->extradata_size > 21 && VAR_16->codecpar->extradata[0] == 1) {
            VAR_13->nal_length_size = (VAR_16->codecpar->extradata[21] & 0x03) + 1;
        }
        break;
    case 128:
        if (VAR_12->strict_std_compliance > VAR_8) {
            FUNC_4(VAR_13, VAR_3,
                   "Packetizing VP9 is experimental and its specification is "
                   "still in draft state. "
                   "Please set -strict experimental in order to enable it.\n");
            VAR_15 = VAR_0;
            goto fail;
        }
        break;
    case 129:
    case 130:
        VAR_13->max_frames_per_packet = 15;
        break;
    case 144:


        FUNC_7(VAR_16, 32, 1, 8000);
        break;
    case 131:
        if (VAR_16->codecpar->channels > 2) {
            FUNC_4(VAR_12, VAR_3, "Multistream opus not supported in RTP\n");
            goto fail;
        }



        FUNC_7(VAR_16, 32, 1, 48000);
        break;
    case 137:
        if (VAR_16->codecpar->block_align != 38 && VAR_16->codecpar->block_align != 50) {
            FUNC_4(VAR_12, VAR_3, "Incorrect iLBC block size specified\n");
            goto fail;
        }
        VAR_13->max_frames_per_packet = VAR_13->max_payload_size / VAR_16->codecpar->block_align;
        break;
    case 143:
    case 142:
        VAR_13->max_frames_per_packet = 50;
        if (VAR_16->codecpar->codec_id == 143)
            VAR_14 = 31;
        else
            VAR_14 = 61;

        if (1 + VAR_13->max_frames_per_packet + VAR_14 > VAR_13->max_payload_size) {
            FUNC_4(VAR_12, VAR_3, "RTP max payload size too small for AMR\n");
            goto fail;
        }
        if (VAR_16->codecpar->channels != 1) {
            FUNC_4(VAR_12, VAR_3, "Only mono is supported\n");
            goto fail;
        }
        break;
    case 145:
        VAR_13->max_frames_per_packet = 50;
        break;
    default:
        break;
    }

    return 0;

fail:
    FUNC_2(&VAR_13->buf);
    return VAR_15;
}
