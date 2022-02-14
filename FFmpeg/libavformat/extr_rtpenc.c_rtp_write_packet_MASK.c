
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_33__ {TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_32__ {int size; int stream_index; int data; scalar_t__ pts; } ;
struct TYPE_31__ {TYPE_1__* codecpar; } ;
struct TYPE_30__ {int octet_count; int last_octet_count; int last_rtcp_ntp_time; int flags; int max_payload_size; scalar_t__ base_timestamp; scalar_t__ cur_timestamp; scalar_t__ first_packet; } ;
struct TYPE_29__ {int codec_id; int channels; int bits_per_coded_sample; int field_order; } ;
typedef TYPE_2__ RTPMuxContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_5__*,int ,char*,int,int) ;
 int * FUNC_2 (TYPE_4__*,int ,int*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 int FUNC_5 (TYPE_5__*,int ,int) ;
 int FUNC_6 (TYPE_5__*,int ,int) ;
 int FUNC_7 (TYPE_5__*,int ,int) ;
 int FUNC_8 (TYPE_5__*,int ,int,int const*,int) ;
 int FUNC_9 (TYPE_5__*,int ,int) ;
 int FUNC_10 (TYPE_5__*,int ,int) ;
 int FUNC_11 (TYPE_5__*,int ,int) ;
 int FUNC_12 (TYPE_5__*,int ,int) ;
 int FUNC_13 (TYPE_5__*,int ,int,int) ;
 int FUNC_14 (TYPE_5__*,int ,int) ;
 int FUNC_15 (TYPE_5__*,int ,int) ;
 int FUNC_16 (TYPE_5__*,int ,int) ;
 int FUNC_17 (TYPE_5__*,int,int ) ;
 int FUNC_18 (TYPE_5__*,int ,int) ;
 int FUNC_19 (TYPE_5__*,int ,int) ;
 int FUNC_20 (TYPE_5__*,int ,int) ;
 int FUNC_21 (TYPE_5__*,int ,int) ;
 int FUNC_22 (TYPE_5__*,int ,int,int) ;

__attribute__((used)) static int FUNC_23(AVFormatContext *VAR_11, AVPacket *VAR_12)
{
    RTPMuxContext *VAR_13 = VAR_11->priv_data;
    AVStream *VAR_14 = VAR_11->streams[0];
    int VAR_15;
    int VAR_16= VAR_12->size;

    FUNC_1(VAR_11, VAR_2, "%d: write len=%d\n", VAR_12->stream_index, VAR_16);

    VAR_15 = ((VAR_13->octet_count - VAR_13->last_octet_count) * VAR_10) /
        VAR_9;
    if ((VAR_13->first_packet || ((VAR_15 >= VAR_8) &&
                            (FUNC_3() - VAR_13->last_rtcp_ntp_time > 5000000))) &&
        !(VAR_13->flags & VAR_7)) {
        FUNC_17(VAR_11, FUNC_3(), 0);
        VAR_13->last_octet_count = VAR_13->octet_count;
        VAR_13->first_packet = 0;
    }
    VAR_13->cur_timestamp = VAR_13->base_timestamp + VAR_12->pts;

    switch(VAR_14->codecpar->codec_id) {
    case 139:
    case 140:
    case 132:
    case 135:
        return FUNC_22(VAR_11, VAR_12->data, VAR_16, 8 * VAR_14->codecpar->channels);
    case 134:
    case 133:
    case 138:
    case 137:
        return FUNC_22(VAR_11, VAR_12->data, VAR_16, 16 * VAR_14->codecpar->channels);
    case 136:
        return FUNC_22(VAR_11, VAR_12->data, VAR_16, 24 * VAR_14->codecpar->channels);
    case 159:




        return FUNC_22(VAR_11, VAR_12->data, VAR_16, 8 * VAR_14->codecpar->channels);
    case 158:
    case 157:
        return FUNC_22(VAR_11, VAR_12->data, VAR_16,
                                VAR_14->codecpar->bits_per_coded_sample * VAR_14->codecpar->channels);
    case 146:
    case 145:
        FUNC_19(VAR_11, VAR_12->data, VAR_16);
        break;
    case 144:
    case 142:
        FUNC_12(VAR_11, VAR_12->data, VAR_16);
        break;
    case 160:
        if (VAR_13->flags & VAR_5)
            FUNC_11(VAR_11, VAR_12->data, VAR_16);
        else
            FUNC_4(VAR_11, VAR_12->data, VAR_16);
        break;
    case 156:
    case 155:
        FUNC_5(VAR_11, VAR_12->data, VAR_16);
        break;
    case 143:
        FUNC_20(VAR_11, VAR_12->data, VAR_16);
        break;
    case 154:
        FUNC_13(VAR_11, VAR_12->data, VAR_16, VAR_14->codecpar->field_order != VAR_0 ? 1 : 0);
        break;
    case 150:
        FUNC_9(VAR_11, VAR_12->data, VAR_16);
        break;
    case 153:
        FUNC_6(VAR_11, VAR_12->data, VAR_16);
        break;
    case 152:
        if (VAR_13->flags & VAR_6) {
            int VAR_17 = 0;
            const uint8_t *VAR_18 =
                FUNC_2(VAR_12, VAR_3,
                                        &VAR_17);
            FUNC_8(VAR_11, VAR_12->data, VAR_16, VAR_18, VAR_17);
            break;
        }

    case 151:
        FUNC_7(VAR_11, VAR_12->data, VAR_16);
        break;
    case 149:
        FUNC_9(VAR_11, VAR_12->data, VAR_16);
        break;
    case 130:
    case 131:
        FUNC_16(VAR_11, VAR_12->data, VAR_16);
        break;
    case 129:
        FUNC_14(VAR_11, VAR_12->data, VAR_16);
        break;
    case 128:
        FUNC_15(VAR_11, VAR_12->data, VAR_16);
        break;
    case 148:
        FUNC_18(VAR_11, VAR_12->data, VAR_16);
        break;
    case 147:
        FUNC_10(VAR_11, VAR_12->data, VAR_16);
        break;
    case 141:
        if (VAR_16 > VAR_13->max_payload_size) {
            FUNC_1(VAR_11, VAR_1,
                   "Packet size %d too large for max RTP payload size %d\n",
                   VAR_16, VAR_13->max_payload_size);
            return FUNC_0(VAR_4);
        }

    default:

        FUNC_21(VAR_11, VAR_12->data, VAR_16);
        break;
    }
    return 0;
}
