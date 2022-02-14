
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int commandbuffer ;
struct TYPE_19__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_22__ {int type; int * data; scalar_t__ size; int extra; } ;
struct TYPE_21__ {int skip_bytes; scalar_t__ flv_header_bytes; int flv_size; scalar_t__ flv_off; scalar_t__ flv_nb_packets; scalar_t__ flush_interval; int * nb_prev_pkt; TYPE_13__** prev_pkt; int in_chunk_size; TYPE_10__* stream; TYPE_6__ out_pkt; int * flv_data; int stream_id; int * flv_header; } ;
struct TYPE_20__ {int member_0; } ;
struct TYPE_18__ {scalar_t__ channel_id; } ;
struct TYPE_17__ {int flags; } ;
typedef TYPE_2__ RTMPPacket ;
typedef TYPE_3__ RTMPContext ;
typedef int GetByteContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int **,scalar_t__) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int const**) ;
 int FUNC_5 (int const**,int *,int) ;
 int FUNC_6 (int const**) ;
 int FUNC_7 (int *,int *,int,int*) ;
 int FUNC_8 (int **,char*) ;
 int FUNC_9 (TYPE_13__**,int *,int) ;
 int FUNC_10 (TYPE_6__*,int,int,int,int) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_10__*,TYPE_2__*,int ,TYPE_13__**,int *,int ) ;
 int FUNC_13 (TYPE_10__*,int *,int) ;
 int FUNC_14 (int *,int *,scalar_t__) ;
 int FUNC_15 (TYPE_1__*,TYPE_3__*,TYPE_2__*) ;
 int FUNC_16 (TYPE_3__*,TYPE_6__*,int ) ;
 int FUNC_17 (int *,char*) ;

__attribute__((used)) static int FUNC_18(URLContext *VAR_8, const uint8_t *VAR_9, int VAR_10)
{
    RTMPContext *VAR_11 = VAR_8->priv_data;
    int VAR_12 = VAR_10;
    int VAR_13, VAR_14, VAR_15;
    uint32_t VAR_16;
    const uint8_t *VAR_17 = VAR_9;
    uint8_t VAR_18;
    int VAR_19;

    do {
        if (VAR_11->skip_bytes) {
            int VAR_20 = FUNC_1(VAR_11->skip_bytes, VAR_12);
            VAR_17 += VAR_20;
            VAR_12 -= VAR_20;
            VAR_11->skip_bytes -= VAR_20;
            continue;
        }

        if (VAR_11->flv_header_bytes < VAR_3) {
            const uint8_t *VAR_21 = VAR_11->flv_header;
            int VAR_22 = VAR_2;

            VAR_15 = FUNC_1(VAR_3 - VAR_11->flv_header_bytes, VAR_12);
            FUNC_5(&VAR_17, VAR_11->flv_header + VAR_11->flv_header_bytes, VAR_15);
            VAR_11->flv_header_bytes += VAR_15;
            VAR_12 -= VAR_15;
            if (VAR_11->flv_header_bytes < VAR_3)
                break;

            VAR_14 = FUNC_6(&VAR_21);
            VAR_13 = FUNC_4(&VAR_21);
            VAR_16 = FUNC_4(&VAR_21);
            VAR_16 |= FUNC_6(&VAR_21) << 24;
            FUNC_4(&VAR_21);
            VAR_11->flv_size = VAR_13;

            if (VAR_14 == VAR_6)
                VAR_22 = VAR_7;

            if (((VAR_14 == VAR_6 || VAR_14 == VAR_4) && VAR_16 == 0) ||
                VAR_14 == VAR_5) {
                if ((VAR_19 = FUNC_9(&VAR_11->prev_pkt[1],
                                                     &VAR_11->nb_prev_pkt[1],
                                                     VAR_22)) < 0)
                    return VAR_19;



                VAR_11->prev_pkt[1][VAR_22].channel_id = 0;
            }


            if ((VAR_19 = FUNC_10(&VAR_11->out_pkt, VAR_22,
                                             VAR_14, VAR_16, VAR_13)) < 0)
                return VAR_19;

            VAR_11->out_pkt.extra = VAR_11->stream_id;
            VAR_11->flv_data = VAR_11->out_pkt.data;
        }

        VAR_15 = FUNC_1(VAR_11->flv_size - VAR_11->flv_off, VAR_12);
        FUNC_5(&VAR_17, VAR_11->flv_data + VAR_11->flv_off, VAR_15);
        VAR_11->flv_off += VAR_15;
        VAR_12 -= VAR_15;

        if (VAR_11->flv_off == VAR_11->flv_size) {
            VAR_11->skip_bytes = 4;

            if (VAR_11->out_pkt.type == VAR_5) {




                uint8_t VAR_23[64];
                int VAR_24 = 0;
                GetByteContext VAR_25;

                FUNC_3(&VAR_25, VAR_11->flv_data, VAR_11->flv_size);
                if (!FUNC_7(&VAR_25, VAR_23, sizeof(VAR_23),
                                        &VAR_24)) {
                    if (!FUNC_17(VAR_23, "onMetaData") ||
                        !FUNC_17(VAR_23, "|RtmpSampleAccess")) {
                        uint8_t *VAR_26;
                        if ((VAR_19 = FUNC_2(&VAR_11->out_pkt.data, VAR_11->out_pkt.size + 16)) < 0) {
                            VAR_11->flv_size = VAR_11->flv_off = VAR_11->flv_header_bytes = 0;
                            return VAR_19;
                        }
                        FUNC_14(VAR_11->out_pkt.data + 16, VAR_11->out_pkt.data, VAR_11->out_pkt.size);
                        VAR_11->out_pkt.size += 16;
                        VAR_26 = VAR_11->out_pkt.data;
                        FUNC_8(&VAR_26, "@setDataFrame");
                    }
                }
            }

            if ((VAR_19 = FUNC_16(VAR_11, &VAR_11->out_pkt, 0)) < 0)
                return VAR_19;
            VAR_11->flv_size = 0;
            VAR_11->flv_off = 0;
            VAR_11->flv_header_bytes = 0;
            VAR_11->flv_nb_packets++;
        }
    } while (VAR_17 - VAR_9 < VAR_10);

    if (VAR_11->flv_nb_packets < VAR_11->flush_interval)
        return VAR_10;
    VAR_11->flv_nb_packets = 0;


    VAR_11->stream->flags |= VAR_0;


    VAR_19 = FUNC_13(VAR_11->stream, &VAR_18, 1);


    VAR_11->stream->flags &= ~VAR_0;

    if (VAR_19 == FUNC_0(VAR_1)) {

        return VAR_10;
    } else if (VAR_19 < 0) {
        return VAR_19;
    } else if (VAR_19 == 1) {
        RTMPPacket VAR_27 = { 0 };

        if ((VAR_19 = FUNC_12(VAR_11->stream, &VAR_27,
                                                VAR_11->in_chunk_size,
                                                &VAR_11->prev_pkt[0],
                                                &VAR_11->nb_prev_pkt[0], VAR_18)) <= 0)
             return VAR_19;

        if ((VAR_19 = FUNC_15(VAR_8, VAR_11, &VAR_27)) < 0)
            return VAR_19;

        FUNC_11(&VAR_27);
    }

    return VAR_10;
}
